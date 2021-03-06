//==================================================================================================
/*!
  @file

  @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_IF_DEC_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_IF_DEC_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{

 /*!
    @ingroup group-boolean
    This function object conditionally returns @c x-1 (respectively @c x)
    if @c c is @ref True (respectively  @ref False)


    @par Header <boost/simd/function/if_dec.hpp>

   @par Example:

     @snippet if_dec.cpp if_dec

   @par Possible output:

     @snippet if_dec.txt if_dec

  **/
  Value if_dec(Value const& c, Value const& x);

  /*!
    @overload
  */
  Value if_dec(LogicalValue const& c, Value const& x);
} }
#endif

#include <boost/simd/function/scalar/if_dec.hpp>
#include <boost/simd/function/simd/if_dec.hpp>

#endif
