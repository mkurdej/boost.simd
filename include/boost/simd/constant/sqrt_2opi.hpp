//==================================================================================================
/*!
  @file

  @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_CONSTANT_SQRT_2OPI_HPP_INCLUDED
#define BOOST_SIMD_CONSTANT_SQRT_2OPI_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!

    @ingroup group-constant

    Constant  \f$\frac{\sqrt2}{\pi}\f$.

    @par Semantic:

    For type T:

    @code
    T r = Sqrt_2opi<T>();
    @endcode

    is similar to:

    @code
    T r = sqrt(Two<T>())/Pi<T>();
    @endcode

    @return a value of type T

**/
  template<typename T> T Sqrt_2opi();

  namespace functional
  {
    /*!
      @ingroup group-callable-constant


      Constant  \f$\frac{\sqrt2}{\pi}\f$.

      Generate the  constant sqrt_2opi.

      @return The Sqrt_2opi constant for the proper type
    **/
    Value Sqrt_2opi<Value>();
  }
} }
#endif

#include <boost/simd/constant/scalar/sqrt_2opi.hpp>
#include <boost/simd/constant/simd/sqrt_2opi.hpp>

#endif
