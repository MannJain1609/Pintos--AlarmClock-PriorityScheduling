// { dg-options "-D__STDCPP_WANT_MATH_SPEC_FUNCS__" }
//
// Copyright (C) 2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

//  comp_ellint_2

//  Compare against values generated by the GNU Scientific Library.
//  The GSL can be found on the web: http://www.gnu.org/software/gsl/
#include <limits>
#include <cmath>
#if defined(__TEST_DEBUG)
#  include <iostream>
#  define VERIFY(A) \
  if (!(A)) \
    { \
      std::cout << "line " << __LINE__ \
	<< "  max_abs_frac = " << max_abs_frac \
	<< std::endl; \
    }
#else
#  include <testsuite_hooks.h>
#endif
#include <specfun_testcase.h>

// Test data.
// max(|f - f_GSL|): 6.6613381477509392e-16
// max(|f - f_GSL| / |f_GSL|): 4.4233707954398090e-16
const testcase_comp_ellint_2<double>
data001[19] =
{
  { 1.1716970527816140, -0.90000000000000002 },
  { 1.2763499431699064, -0.80000000000000004 },
  { 1.3556611355719554, -0.69999999999999996 },
  { 1.4180833944487241, -0.59999999999999998 },
  { 1.4674622093394274, -0.50000000000000000 },
  { 1.5059416123600402, -0.40000000000000002 },
  { 1.5348334649232491, -0.30000000000000004 },
  { 1.5549685462425291, -0.19999999999999996 },
  { 1.5668619420216685, -0.099999999999999978 },
  { 1.5707963267948966, 0.0000000000000000 },
  { 1.5668619420216685, 0.10000000000000009 },
  { 1.5549685462425291, 0.19999999999999996 },
  { 1.5348334649232491, 0.30000000000000004 },
  { 1.5059416123600404, 0.39999999999999991 },
  { 1.4674622093394274, 0.50000000000000000 },
  { 1.4180833944487241, 0.60000000000000009 },
  { 1.3556611355719554, 0.69999999999999996 },
  { 1.2763499431699064, 0.80000000000000004 },
  { 1.1716970527816144, 0.89999999999999991 },
};
const double toler001 = 2.5000000000000020e-13;

template<typename Tp, unsigned int Num>
  void
  test(const testcase_comp_ellint_2<Tp> (&data)[Num], Tp toler)
  {
    bool test __attribute__((unused)) = true;
    const Tp eps = std::numeric_limits<Tp>::epsilon();
    Tp max_abs_diff = -Tp(1);
    Tp max_abs_frac = -Tp(1);
    unsigned int num_datum = Num;
    for (unsigned int i = 0; i < num_datum; ++i)
      {
	const Tp f = std::comp_ellint_2(data[i].k);
	const Tp f0 = data[i].f0;
	const Tp diff = f - f0;
	if (std::abs(diff) > max_abs_diff)
	  max_abs_diff = std::abs(diff);
	if (std::abs(f0) > Tp(10) * eps
	 && std::abs(f) > Tp(10) * eps)
	  {
	    const Tp frac = diff / f0;
	    if (std::abs(frac) > max_abs_frac)
	      max_abs_frac = std::abs(frac);
	  }
      }
    VERIFY(max_abs_frac < toler);
  }

int
main()
{
  test(data001, toler001);
  return 0;
}