// TODO: Add licence
//
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
//
// $URL:$
// $Id: $
// 
//
// Author(s)     : Pavel Emeliyanenko <asm@mpi-sb.mpg.de>
//
//
// ============================================================================

#ifndef CGAL_ALGEBRAIC_CURVE_KERNEL_HASHED_MAP_H
#define CGAL_ALGEBRAIC_CURVE_KERNEL_HASHED_MAP_H

#include <CGAL/basic.h>

#include <boost/multi_index_container.hpp>
#include <boost/multi_index/member.hpp>
#include <boost/multi_index/hashed_index.hpp>
#include <boost/multi_index/ordered_index.hpp>
#include <boost/multi_index/sequenced_index.hpp>

using boost::multi_index::multi_index_container;
using boost::multi_index::get;
using boost::multi_index::project;

CGAL_BEGIN_NAMESPACE

namespace CGALi {

template <class Key>
struct Stub {

    typedef Key agrument_type;
    typedef Key result_type;
    
    inline Key operator()(Key k) const {
        return k;
    }
};

//! \brief this class defines hashed map container with LRU capabilities,
//!
//! stores pair of \c KeyType_ and \c ValueType_. Before adding to 
//! the map the input is normialized using \c Canonicalizer_
//! \c Pred_ is binary predicate acting as an equivalence relation on 
//! values of \c KeyType_, \c Creator_ is a mapping from \c KeyType_ to
//! \c ValueType_, \c Hash_ is function object which returns hash values
//! for the keys 
template <class KeyType_, class ValueType_,
    class Canonicalizer_ = Stub<KeyType_>,
    class Hash_ = boost::hash<KeyType_>,
    class Creator_ = CGAL::Creator_1<KeyType_, ValueType_>,
    class Pred_ = std::equal_to<KeyType_> >
class LRU_hashed_map
{
public:
    //!\name public typedefs
    //!@{ 
    
    //! this instance's first argument
    typedef KeyType_ Key_type;
    //! this instance's second argument
    typedef ValueType_ Value_type;
    //! input data canonicalizer
    typedef Canonicalizer_ Canonicalizer;
    //! equality predicate
    typedef Pred_ Pred;
    //! mapping \c KeyType_ -> \c ValueType_
    typedef Creator_ Creator;
    //! hash function
    typedef Hash_ Hash;
    //! hashed map data type
    typedef std::pair<Key_type, Value_type> Data_type;
    //! myself
    typedef LRU_hashed_map<Key_type, Value_type, Canonicalizer, Hash, 
        Creator, Pred> Self;
        
    //!@}
private:
    //!\name private members
    //!@{
    
    // try boost::identity ?
    typedef boost::multi_index::multi_index_container<
        Data_type,
        boost::multi_index::indexed_by<
            boost::multi_index::sequenced<>,
            boost::multi_index::hashed_unique<
                BOOST_MULTI_INDEX_MEMBER(Data_type, Key_type, first),
                    Hash, Pred > > > Hashed_map;
    
    //! hashed map instance
    Hashed_map _m_hashed_map;
    
    //! maximal size allowed
    unsigned _m_max_size;
    
    //!@}
public:
    //!\name iterator types
    //!@{
    
    //! hashed index iterator 
    typedef typename
        boost::multi_index::nth_index_iterator<Hashed_map,1>::type
            Hashed_iterator;
    
    //! sequenced index iterator 
    typedef typename
        boost::multi_index::nth_index_iterator<Hashed_map,0>::type
            Sequenced_iterator;
        
    //! sequenced index const iterator 
    typedef typename
        boost::multi_index::nth_index_const_iterator<Hashed_map,0>::type
            Sequenced_const_iterator;
    //!@}
public:
    //!\name constructors and access functions
    //!@{
    
    //! \brief default constructor
    LRU_hashed_map(unsigned max_size = -1u) : _m_hashed_map(),
            _m_max_size(max_size) 
    {  }
    
    ~LRU_hashed_map()
    {  }
    
    /*! \brief implements cache-like behaviour of the map
    *
    *  If the object is not in the map, it is constructed using \c Creator
    *  and added to the map
    */
    Value_type operator()(const Key_type& key_)
    {
        Canonicalizer canonicalize;
        Key_type key = canonicalize(key_);
        std::pair<Hashed_iterator, bool> p = find(key);
        if(!p.second) {
            Creator create;
            Value_type val = create(key_);
            insert(Data_type(key, val));
            return val;
        }
        return (p.first)->second;
    }
    
    //! \brief looks for an entry with a specified key in the map
    //!
    //! returns a pair of iterator pointing to \c Data_type and a boolean
    //! indicating whether an element with specified key was found
    std::pair<Hashed_iterator, bool> find(const Key_type& key)
    {
        typename boost::multi_index::nth_index<Hashed_map,1>::type& 
        idx = _m_hashed_map.get<1>();
        Hashed_iterator it = idx.find(key);
        if(it == idx.end()) 
            return std::make_pair<Hashed_iterator, bool>(it, false);
        // otherwise put the accessed element on the top
        _m_hashed_map.relocate(_m_hashed_map.begin(), 
                _m_hashed_map.project<0>(it));
        return std::make_pair<Hashed_iterator, bool>(it, true);
    }
        
    //! \brief inserts an entry to the map
    //!
    //! on successful insertion, \c p.first points to the element 
    //! inserted; otherwise \c p.first points to an element that caused
    //! the insertion to be banned. If the map's size exceeds \c max_size
    //! the least recently used entry is dropped
    std::pair<Sequenced_iterator, bool> insert(const Data_type& data)
    {
        if(_m_hashed_map.size() > _m_max_size)
            _m_hashed_map.pop_back();
        return _m_hashed_map.push_front(data);
    }
    
    //! clears the map contents
    void clear() { _m_hashed_map.clear(); }

    //! returns whether the map is empty.
    bool is_empty() const { return _m_hashed_map.empty(); }

    //! returns the number of items in the map
    unsigned size() { return _m_hashed_map.size(); }

    //! returns the largest possible size of the map (-1 if not set)
    unsigned max_size() const { return _m_max_size; }

    //! \brief returns an iterator pointing to the beginning of the map
    //!
    //! all iterators run over sequenced indices
    Sequenced_iterator begin() { return _m_hashed_map.begin(); }

    //! returns an iterator pointing to the end of the map
    Sequenced_iterator end() { return _m_hashed_map.end(); }

    //! returns a const_iterator pointing to the beginning of the map
    Sequenced_const_iterator begin() const 
    { return _m_hashed_map.begin(); }

    //! Returns a const_iterator pointing to the end of the map
    Sequenced_const_iterator end() const 
    { return _m_hashed_map.end(); }
   
    //!@}
}; // class LRU_hashed_map

/*! \brief
 *  returns representation id as a hash value
 */
struct Id_hasher
{
    template <class T>
    size_t operator()(const T& x) const {
        return static_cast<size_t>(x.id());
    }
};
    
//! \brief a simple curve pair hasher
//!
//! computes hashes of two curves and then combines them
template <class Curve_analysis_2> 
struct Curve_pair_hasher_2 
{
    typedef std::pair<Curve_analysis_2, Curve_analysis_2> Pair_of_curves_2;
    typedef Pair_of_curves_2 argument_type;
    typedef size_t result_type;
        
    size_t operator()(const Pair_of_curves_2& p) const {
        // uses code from boost::hash_combine
        std::size_t seed = p.first.polynomial_2().id() + 0x9e3779b9;
        seed ^= p.second.polynomial_2().id() + 0x9e3779b9 +
            (seed << 6) + (seed >> 2);
        return seed;
    }  
};

struct Pair_hasher {

    typedef size_t result_type;
    
    template <class T>
    size_t operator()(const std::pair<T, T>& p) const
    {
        std::size_t seed = 0;
        boost::hash_combine(seed, p.first);
        boost::hash_combine(seed, p.second);
        return seed;
    }
};

} // namespace CGALi

CGAL_END_NAMESPACE

#endif // CGAL_ALGEBRAIC_CURVE_KERNEL_HASHED_MAP_H
