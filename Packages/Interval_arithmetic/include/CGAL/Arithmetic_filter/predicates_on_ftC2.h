// ======================================================================
//
// Copyright (c) 1998 The CGAL Consortium
//
// This software and related documentation is part of an INTERNAL release
// of the Computational Geometry Algorithms Library (CGAL). It is not
// intended for general use.
//
// ----------------------------------------------------------------------
//
// release       :
// release_date  :
//
// file          : include/CGAL/Arithmetic_filter/predicates_on_ftC2.h
// package       : Interval_arithmetic
// source        : include/CGAL/predicates_on_ftC2.h
// revision      : $Revision$
// revision_date :
// author(s)     : Sylvain.Pion@sophia.inria.fr
//                 Sylvain Pion     (Sylvain.Pion@sophia.inria.fr)
//
// coordinator   : INRIA Sophia-Antipolis (Herve.Bronnimann@sophia.inria.fr)
//
// ======================================================================


#ifndef CGAL_ARITHMETIC_FILTER_PREDICATES_ON_FTC2_H
#define CGAL_ARITHMETIC_FILTER_PREDICATES_ON_FTC2_H

// This file is automatically generated by the script for filtering
// predicates, using Interval arithmetic.

#ifndef CGAL_NUMBER_UTILS_H
#include <CGAL/number_utils.h>
#endif // CGAL_NUMBER_UTILS_H
#ifndef CGAL_DETERMINANT_H
#include <CGAL/determinant.h>
#endif // CGAL_DETERMINANT_H
#ifndef CGAL_BASIC_CONSTRUCTIONS_FTC2_H
#include <CGAL/basic_constructions_ftC2.h>
#endif

CGAL_BEGIN_NAMESPACE

#ifndef CGAL_CFG_NO_EXPLICIT_TEMPLATE_FUNCTION_ARGUMENT_SPECIFICATION
template < class CGAL_IA_CT, class CGAL_IA_ET, class CGAL_IA_CACHE >
#endif
// CGAL_KERNEL_MEDIUM_INLINE
Comparison_result
compare_xC2(
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &px,
            
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &l1a, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &l1b, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &l1c,
            
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &l2a, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &l2b, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &l2c)
{
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    Comparison_result result = compare_xC2(
		px.interval(),
		l1a.interval(),
		l1b.interval(),
		l1c.interval(),
		l2a.interval(),
		l2b.interval(),
		l2c.interval());
    FPU_set_cw(backup);
    return result;
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    return compare_xC2(
		px.exact(),
		l1a.exact(),
		l1b.exact(),
		l1c.exact(),
		l2a.exact(),
		l2b.exact(),
		l2c.exact());
  }
}

#ifndef CGAL_CFG_NO_EXPLICIT_TEMPLATE_FUNCTION_ARGUMENT_SPECIFICATION
template < class CGAL_IA_CT, class CGAL_IA_ET, class CGAL_IA_CACHE >
#endif
// CGAL_KERNEL_MEDIUM_INLINE
Comparison_result
compare_xC2(
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &l1a, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &l1b, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &l1c,
                 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &l2a, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &l2b, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &l2c,
                 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &h1a, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &h1b, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &h1c,
                 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &h2a, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &h2b, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &h2c)
{
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    Comparison_result result = compare_xC2(
		l1a.interval(),
		l1b.interval(),
		l1c.interval(),
		l2a.interval(),
		l2b.interval(),
		l2c.interval(),
		h1a.interval(),
		h1b.interval(),
		h1c.interval(),
		h2a.interval(),
		h2b.interval(),
		h2c.interval());
    FPU_set_cw(backup);
    return result;
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    return compare_xC2(
		l1a.exact(),
		l1b.exact(),
		l1c.exact(),
		l2a.exact(),
		l2b.exact(),
		l2c.exact(),
		h1a.exact(),
		h1b.exact(),
		h1c.exact(),
		h2a.exact(),
		h2b.exact(),
		h2c.exact());
  }
}

#ifndef CGAL_CFG_NO_EXPLICIT_TEMPLATE_FUNCTION_ARGUMENT_SPECIFICATION
template < class CGAL_IA_CT, class CGAL_IA_ET, class CGAL_IA_CACHE >
#endif
// CGAL_KERNEL_MEDIUM_INLINE
Comparison_result
compare_y_at_xC2(
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &px, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &py,
                 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &la, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &lb, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &lc)
{
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    Comparison_result result = compare_y_at_xC2(
		px.interval(),
		py.interval(),
		la.interval(),
		lb.interval(),
		lc.interval());
    FPU_set_cw(backup);
    return result;
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    return compare_y_at_xC2(
		px.exact(),
		py.exact(),
		la.exact(),
		lb.exact(),
		lc.exact());
  }
}

#ifndef CGAL_CFG_NO_EXPLICIT_TEMPLATE_FUNCTION_ARGUMENT_SPECIFICATION
template < class CGAL_IA_CT, class CGAL_IA_ET, class CGAL_IA_CACHE >
#endif
// CGAL_KERNEL_MEDIUM_INLINE
Comparison_result
compare_y_at_xC2(
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &px,
                 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &l1a, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &l1b, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &l1c,
                 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &l2a, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &l2b, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &l2c)
{
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    Comparison_result result = compare_y_at_xC2(
		px.interval(),
		l1a.interval(),
		l1b.interval(),
		l1c.interval(),
		l2a.interval(),
		l2b.interval(),
		l2c.interval());
    FPU_set_cw(backup);
    return result;
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    return compare_y_at_xC2(
		px.exact(),
		l1a.exact(),
		l1b.exact(),
		l1c.exact(),
		l2a.exact(),
		l2b.exact(),
		l2c.exact());
  }
}

#ifndef CGAL_CFG_NO_EXPLICIT_TEMPLATE_FUNCTION_ARGUMENT_SPECIFICATION
template < class CGAL_IA_CT, class CGAL_IA_ET, class CGAL_IA_CACHE >
#endif
// CGAL_KERNEL_LARGE_INLINE
Comparison_result
compare_y_at_xC2(
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &l1a, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &l1b, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &l1c,
                 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &l2a, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &l2b, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &l2c,
                 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &ha,  
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &hb,  
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &hc)
{
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    Comparison_result result = compare_y_at_xC2(
		l1a.interval(),
		l1b.interval(),
		l1c.interval(),
		l2a.interval(),
		l2b.interval(),
		l2c.interval(),
		ha.interval(),
		hb.interval(),
		hc.interval());
    FPU_set_cw(backup);
    return result;
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    return compare_y_at_xC2(
		l1a.exact(),
		l1b.exact(),
		l1c.exact(),
		l2a.exact(),
		l2b.exact(),
		l2c.exact(),
		ha.exact(),
		hb.exact(),
		hc.exact());
  }
}

#ifndef CGAL_CFG_NO_EXPLICIT_TEMPLATE_FUNCTION_ARGUMENT_SPECIFICATION
template < class CGAL_IA_CT, class CGAL_IA_ET, class CGAL_IA_CACHE >
#endif
// CGAL_KERNEL_LARGE_INLINE
Comparison_result
compare_y_at_xC2(
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &l1a, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &l1b, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &l1c,
                 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &l2a, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &l2b, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &l2c,
                 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &h1a, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &h1b, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &h1c,
                 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &h2a, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &h2b, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &h2c)
{
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    Comparison_result result = compare_y_at_xC2(
		l1a.interval(),
		l1b.interval(),
		l1c.interval(),
		l2a.interval(),
		l2b.interval(),
		l2c.interval(),
		h1a.interval(),
		h1b.interval(),
		h1c.interval(),
		h2a.interval(),
		h2b.interval(),
		h2c.interval());
    FPU_set_cw(backup);
    return result;
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    return compare_y_at_xC2(
		l1a.exact(),
		l1b.exact(),
		l1c.exact(),
		l2a.exact(),
		l2b.exact(),
		l2c.exact(),
		h1a.exact(),
		h1b.exact(),
		h1c.exact(),
		h2a.exact(),
		h2b.exact(),
		h2c.exact());
  }
}

#ifndef CGAL_CFG_NO_EXPLICIT_TEMPLATE_FUNCTION_ARGUMENT_SPECIFICATION
template < class CGAL_IA_CT, class CGAL_IA_ET, class CGAL_IA_CACHE >
#endif
// inline
Comparison_result
compare_deltax_deltayC2(
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &px, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &qx,
                        
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &ry, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &sy)
{
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    Comparison_result result = compare_deltax_deltayC2(
		px.interval(),
		qx.interval(),
		ry.interval(),
		sy.interval());
    FPU_set_cw(backup);
    return result;
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    return compare_deltax_deltayC2(
		px.exact(),
		qx.exact(),
		ry.exact(),
		sy.exact());
  }
}

#ifndef CGAL_CFG_NO_EXPLICIT_TEMPLATE_FUNCTION_ARGUMENT_SPECIFICATION
template < class CGAL_IA_CT, class CGAL_IA_ET, class CGAL_IA_CACHE >
#endif
// CGAL_KERNEL_MEDIUM_INLINE
Comparison_result
compare_lexicographically_xyC2(
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &px, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &py,
                               
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &qx, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &qy)
{
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    Comparison_result result = compare_lexicographically_xyC2(
		px.interval(),
		py.interval(),
		qx.interval(),
		qy.interval());
    FPU_set_cw(backup);
    return result;
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    return compare_lexicographically_xyC2(
		px.exact(),
		py.exact(),
		qx.exact(),
		qy.exact());
  }
}

#ifndef CGAL_CFG_NO_EXPLICIT_TEMPLATE_FUNCTION_ARGUMENT_SPECIFICATION
template < class CGAL_IA_CT, class CGAL_IA_ET, class CGAL_IA_CACHE >
#endif
// CGAL_KERNEL_MEDIUM_INLINE
Orientation
orientationC2(
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &px, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &py,
              
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &qx, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &qy,
              
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &rx, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &ry)
{
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    Orientation result = orientationC2(
		px.interval(),
		py.interval(),
		qx.interval(),
		qy.interval(),
		rx.interval(),
		ry.interval());
    FPU_set_cw(backup);
    return result;
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    return orientationC2(
		px.exact(),
		py.exact(),
		qx.exact(),
		qy.exact(),
		rx.exact(),
		ry.exact());
  }
}

#ifndef CGAL_CFG_NO_EXPLICIT_TEMPLATE_FUNCTION_ARGUMENT_SPECIFICATION
template < class CGAL_IA_CT, class CGAL_IA_ET, class CGAL_IA_CACHE >
#endif
// CGAL_KERNEL_MEDIUM_INLINE
bool
collinear_are_ordered_along_lineC2(
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &px, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &py,
                                   
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &qx, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &qy,
                                   
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &rx, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &ry)
{
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    bool result = collinear_are_ordered_along_lineC2(
		px.interval(),
		py.interval(),
		qx.interval(),
		qy.interval(),
		rx.interval(),
		ry.interval());
    FPU_set_cw(backup);
    return result;
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    return collinear_are_ordered_along_lineC2(
		px.exact(),
		py.exact(),
		qx.exact(),
		qy.exact(),
		rx.exact(),
		ry.exact());
  }
}

#ifndef CGAL_CFG_NO_EXPLICIT_TEMPLATE_FUNCTION_ARGUMENT_SPECIFICATION
template < class CGAL_IA_CT, class CGAL_IA_ET, class CGAL_IA_CACHE >
#endif
// CGAL_KERNEL_MEDIUM_INLINE
bool
collinear_are_strictly_ordered_along_lineC2(
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &px, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &py,
                                            
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &qx, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &qy,
                                            
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &rx, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &ry)
{
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    bool result = collinear_are_strictly_ordered_along_lineC2(
		px.interval(),
		py.interval(),
		qx.interval(),
		qy.interval(),
		rx.interval(),
		ry.interval());
    FPU_set_cw(backup);
    return result;
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    return collinear_are_strictly_ordered_along_lineC2(
		px.exact(),
		py.exact(),
		qx.exact(),
		qy.exact(),
		rx.exact(),
		ry.exact());
  }
}

#ifndef CGAL_CFG_NO_EXPLICIT_TEMPLATE_FUNCTION_ARGUMENT_SPECIFICATION
template < class CGAL_IA_CT, class CGAL_IA_ET, class CGAL_IA_CACHE >
#endif
// CGAL_KERNEL_LARGE_INLINE
Oriented_side
side_of_oriented_circleC2(
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &px, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &py,
                          
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &qx, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &qy,
                          
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &rx, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &ry,
                          
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &tx, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &ty)
{
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    Oriented_side result = side_of_oriented_circleC2(
		px.interval(),
		py.interval(),
		qx.interval(),
		qy.interval(),
		rx.interval(),
		ry.interval(),
		tx.interval(),
		ty.interval());
    FPU_set_cw(backup);
    return result;
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    return side_of_oriented_circleC2(
		px.exact(),
		py.exact(),
		qx.exact(),
		qy.exact(),
		rx.exact(),
		ry.exact(),
		tx.exact(),
		ty.exact());
  }
}

#ifndef CGAL_CFG_NO_EXPLICIT_TEMPLATE_FUNCTION_ARGUMENT_SPECIFICATION
template < class CGAL_IA_CT, class CGAL_IA_ET, class CGAL_IA_CACHE >
#endif
// CGAL_KERNEL_LARGE_INLINE
Bounded_side
side_of_bounded_circleC2(
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &px, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &py,
                         
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &qx, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &qy,
                         
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &rx, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &ry,
                         
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &tx, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &ty)
{
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    Bounded_side result = side_of_bounded_circleC2(
		px.interval(),
		py.interval(),
		qx.interval(),
		qy.interval(),
		rx.interval(),
		ry.interval(),
		tx.interval(),
		ty.interval());
    FPU_set_cw(backup);
    return result;
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    return side_of_bounded_circleC2(
		px.exact(),
		py.exact(),
		qx.exact(),
		qy.exact(),
		rx.exact(),
		ry.exact(),
		tx.exact(),
		ty.exact());
  }
}

#ifndef CGAL_CFG_NO_EXPLICIT_TEMPLATE_FUNCTION_ARGUMENT_SPECIFICATION
template < class CGAL_IA_CT, class CGAL_IA_ET, class CGAL_IA_CACHE >
#endif
// CGAL_KERNEL_MEDIUM_INLINE
Comparison_result
cmp_dist_to_pointC2(
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &px, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &py,
                    
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &qx, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &qy,
                    
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &rx, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &ry)
{
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    Comparison_result result = cmp_dist_to_pointC2(
		px.interval(),
		py.interval(),
		qx.interval(),
		qy.interval(),
		rx.interval(),
		ry.interval());
    FPU_set_cw(backup);
    return result;
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    return cmp_dist_to_pointC2(
		px.exact(),
		py.exact(),
		qx.exact(),
		qy.exact(),
		rx.exact(),
		ry.exact());
  }
}

#ifndef CGAL_CFG_NO_EXPLICIT_TEMPLATE_FUNCTION_ARGUMENT_SPECIFICATION
template < class CGAL_IA_CT, class CGAL_IA_ET, class CGAL_IA_CACHE >
#endif
// CGAL_KERNEL_MEDIUM_INLINE
bool
has_larger_dist_to_pointC2(
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &px, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &py,
                           
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &qx, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &qy,
                           
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &rx, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &ry)
{
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    bool result = has_larger_dist_to_pointC2(
		px.interval(),
		py.interval(),
		qx.interval(),
		qy.interval(),
		rx.interval(),
		ry.interval());
    FPU_set_cw(backup);
    return result;
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    return has_larger_dist_to_pointC2(
		px.exact(),
		py.exact(),
		qx.exact(),
		qy.exact(),
		rx.exact(),
		ry.exact());
  }
}

#ifndef CGAL_CFG_NO_EXPLICIT_TEMPLATE_FUNCTION_ARGUMENT_SPECIFICATION
template < class CGAL_IA_CT, class CGAL_IA_ET, class CGAL_IA_CACHE >
#endif
// CGAL_KERNEL_MEDIUM_INLINE
bool
has_smaller_dist_to_pointC2(
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &px, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &py,
                            
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &qx, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &qy,
                            
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &rx, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &ry)
{
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    bool result = has_smaller_dist_to_pointC2(
		px.interval(),
		py.interval(),
		qx.interval(),
		qy.interval(),
		rx.interval(),
		ry.interval());
    FPU_set_cw(backup);
    return result;
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    return has_smaller_dist_to_pointC2(
		px.exact(),
		py.exact(),
		qx.exact(),
		qy.exact(),
		rx.exact(),
		ry.exact());
  }
}

#ifndef CGAL_CFG_NO_EXPLICIT_TEMPLATE_FUNCTION_ARGUMENT_SPECIFICATION
template < class CGAL_IA_CT, class CGAL_IA_ET, class CGAL_IA_CACHE >
#endif
// CGAL_KERNEL_MEDIUM_INLINE
Comparison_result
cmp_signed_dist_to_lineC2(
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &la, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &lb, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &lc,
                          
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &px, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &py,
                          
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &qx, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &qy)
{
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    Comparison_result result = cmp_signed_dist_to_lineC2(
		la.interval(),
		lb.interval(),
		lc.interval(),
		px.interval(),
		py.interval(),
		qx.interval(),
		qy.interval());
    FPU_set_cw(backup);
    return result;
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    return cmp_signed_dist_to_lineC2(
		la.exact(),
		lb.exact(),
		lc.exact(),
		px.exact(),
		py.exact(),
		qx.exact(),
		qy.exact());
  }
}

#ifndef CGAL_CFG_NO_EXPLICIT_TEMPLATE_FUNCTION_ARGUMENT_SPECIFICATION
template < class CGAL_IA_CT, class CGAL_IA_ET, class CGAL_IA_CACHE >
#endif
// CGAL_KERNEL_MEDIUM_INLINE
bool
has_larger_signed_dist_to_lineC2(
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &la, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &lb, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &lc,
                                 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &px, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &py,
                                 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &qx, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &qy)
{
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    bool result = has_larger_signed_dist_to_lineC2(
		la.interval(),
		lb.interval(),
		lc.interval(),
		px.interval(),
		py.interval(),
		qx.interval(),
		qy.interval());
    FPU_set_cw(backup);
    return result;
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    return has_larger_signed_dist_to_lineC2(
		la.exact(),
		lb.exact(),
		lc.exact(),
		px.exact(),
		py.exact(),
		qx.exact(),
		qy.exact());
  }
}

#ifndef CGAL_CFG_NO_EXPLICIT_TEMPLATE_FUNCTION_ARGUMENT_SPECIFICATION
template < class CGAL_IA_CT, class CGAL_IA_ET, class CGAL_IA_CACHE >
#endif
// CGAL_KERNEL_MEDIUM_INLINE
bool
has_smaller_signed_dist_to_lineC2(
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &la, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &lb, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &lc,
                                  
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &px, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &py,
                                  
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &qx, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &qy)
{
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    bool result = has_smaller_signed_dist_to_lineC2(
		la.interval(),
		lb.interval(),
		lc.interval(),
		px.interval(),
		py.interval(),
		qx.interval(),
		qy.interval());
    FPU_set_cw(backup);
    return result;
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    return has_smaller_signed_dist_to_lineC2(
		la.exact(),
		lb.exact(),
		lc.exact(),
		px.exact(),
		py.exact(),
		qx.exact(),
		qy.exact());
  }
}
#ifndef CGAL_CFG_NO_EXPLICIT_TEMPLATE_FUNCTION_ARGUMENT_SPECIFICATION
template < class CGAL_IA_CT, class CGAL_IA_ET, class CGAL_IA_CACHE >
#endif
// CGAL_KERNEL_MEDIUM_INLINE
Comparison_result
cmp_signed_dist_to_lineC2(
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &px, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &py,
                          
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &qx, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &qy,
                          
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &rx, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &ry,
                          
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &sx, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &sy)
{
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    Comparison_result result = cmp_signed_dist_to_lineC2(
		px.interval(),
		py.interval(),
		qx.interval(),
		qy.interval(),
		rx.interval(),
		ry.interval(),
		sx.interval(),
		sy.interval());
    FPU_set_cw(backup);
    return result;
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    return cmp_signed_dist_to_lineC2(
		px.exact(),
		py.exact(),
		qx.exact(),
		qy.exact(),
		rx.exact(),
		ry.exact(),
		sx.exact(),
		sy.exact());
  }
}

#ifndef CGAL_CFG_NO_EXPLICIT_TEMPLATE_FUNCTION_ARGUMENT_SPECIFICATION
template < class CGAL_IA_CT, class CGAL_IA_ET, class CGAL_IA_CACHE >
#endif
// CGAL_KERNEL_MEDIUM_INLINE
bool
has_larger_signed_dist_to_lineC2(
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &px, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &py,
                                 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &qx, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &qy,
                                 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &rx, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &ry,
                                 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &sx, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &sy)
{
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    bool result = has_larger_signed_dist_to_lineC2(
		px.interval(),
		py.interval(),
		qx.interval(),
		qy.interval(),
		rx.interval(),
		ry.interval(),
		sx.interval(),
		sy.interval());
    FPU_set_cw(backup);
    return result;
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    return has_larger_signed_dist_to_lineC2(
		px.exact(),
		py.exact(),
		qx.exact(),
		qy.exact(),
		rx.exact(),
		ry.exact(),
		sx.exact(),
		sy.exact());
  }
}

#ifndef CGAL_CFG_NO_EXPLICIT_TEMPLATE_FUNCTION_ARGUMENT_SPECIFICATION
template < class CGAL_IA_CT, class CGAL_IA_ET, class CGAL_IA_CACHE >
#endif
// CGAL_KERNEL_MEDIUM_INLINE
bool
has_smaller_signed_dist_to_lineC2(
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &px, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &py,
                                  
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &qx, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &qy,
                                  
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &rx, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &ry,
                                  
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &sx, 
    const Filtered_exact <CGAL_IA_CT, CGAL_IA_ET, CGAL_IA_CACHE> &sy)
{
  FPU_CW_t backup = FPU_get_cw();
  FPU_set_cw(FPU_cw_up);
  try
  {
    bool result = has_smaller_signed_dist_to_lineC2(
		px.interval(),
		py.interval(),
		qx.interval(),
		qy.interval(),
		rx.interval(),
		ry.interval(),
		sx.interval(),
		sy.interval());
    FPU_set_cw(backup);
    return result;
  } 
  catch (Interval_nt_advanced::unsafe_comparison)
  {
    FPU_set_cw(backup);
    return has_smaller_signed_dist_to_lineC2(
		px.exact(),
		py.exact(),
		qx.exact(),
		qy.exact(),
		rx.exact(),
		ry.exact(),
		sx.exact(),
		sy.exact());
  }
}


CGAL_END_NAMESPACE

#ifdef CGAL_ARITHMETIC_FILTER_H
#ifndef CGAL_ARITHMETIC_FILTER_ARITHMETIC_FILTER_PREDICATES_ON_FTC2_H
#include <CGAL/Arithmetic_filter/predicates_on_ftC2.h>
#endif // CGAL_ARITHMETIC_FILTER_ARITHMETIC_FILTER_PREDICATES_ON_FTC2_H
#endif

#endif  // CGAL_ARITHMETIC_FILTER_PREDICATES_ON_FTC2_H
