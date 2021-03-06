// -------------------------------------------------------------------------------------------------
//                              Copyright 2016 - NumScale SAS
//
//                   Distributed under the Boost Software License, Version 1.0.
//                        See accompanying file LICENSE.txt or copy at
//                            http://www.boost.org/LICENSE_1_0.txt
// -------------------------------------------------------------------------------------------------

/// bench for functor shr in scalar mode for float type with no decorator (regular call).
#include <simd_bench.hpp>
#include <boost/simd/function/shr.hpp>
#include <boost/simd/detail/dispatch/meta/as_integer.hpp>

namespace nsb = ns::bench;
namespace bs =  boost::simd;
namespace bd =  boost::dispatch;

struct shr
{
  template<class T> T operator()(const T & a, const T & N) const
  {
    return bs::shift_right(a, bd::as_integer_t<T>(N));
  }
};

DEFINE_SCALAR_BENCH(scalar_shr, shr());

DEFINE_BENCH_MAIN()
{
  nsb::for_each<scalar_shr, float>(-10, 10, 0, 31);
}
