## --------------------------------------------------------------------------------------
##                              Copyright 2016 - NumScale SAS
##
##                    Distributed under the Boost Software License Version 1.0
##                        See accompanying file LICENSE.txt or copy at
##                            http://www.boost.org/LICENSE_1_0.txt
## --------------------------------------------------------------------------------------

## benches for functor atanh in simd mode.

set(SOURCES
  regular.float.m1_1.cpp
  regular.double.m1_1.cpp
  raw.float.m1_1.cpp
  raw.double.m1_1.cpp
)

make_bench("function.simd.atanh" ${SOURCES})

## --------------------------------------------------------------------------------------
