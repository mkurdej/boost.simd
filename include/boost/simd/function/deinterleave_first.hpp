//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_DEINTERLEAVE_FIRST_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_DEINTERLEAVE_FIRST_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!
  @ingroup group-swar

    Computes deinterleave_first value of its parameter.

  **/
  template<typename T> auto deinterleave_first(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-swar

      Function object tied to simd::deinterleave_first

      @see simd::deinterleave_first
    **/
    const boost::dispatch::functor<tag::deinterleave_first_> deinterleave_first = {};
  }
} }
#endif

#include <boost/simd/function/definition/deinterleave_first.hpp>
#include <boost/simd/arch/common/scalar/function/deinterleave_first.hpp>
//#include <boost/simd/arch/common/function/simd/deinterleave_first.hpp>

#endif