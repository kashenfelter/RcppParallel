//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_CONSTANT_DEFINITION_PIO2_1_HPP_INCLUDED
#define BOOST_SIMD_CONSTANT_DEFINITION_PIO2_1_HPP_INCLUDED

#include <boost/simd/detail/brigand.hpp>
#include <boost/simd/detail/dispatch.hpp>
#include <boost/simd/detail/constant_traits.hpp>
#include <boost/dispatch/function/make_callable.hpp>
#include <boost/dispatch/hierarchy/functions.hpp>
#include <boost/dispatch/as.hpp>

namespace boost { namespace simd
{
  namespace tag
  {
    struct pio2_1_ : boost::dispatch::constant_value_<pio2_1_>
    {
      BOOST_DISPATCH_MAKE_CALLABLE(ext,pio2_1_,boost::dispatch::constant_value_<pio2_1_>);
      BOOST_SIMD_REGISTER_CONSTANT(1, 0X3FC90F80, 0X3FF921FB54400000LL);
    };
  }

  namespace ext
  {
    BOOST_DISPATCH_FUNCTION_DECLARATION(tag,pio2_1_);
  }

  namespace functional
  {
    BOOST_DISPATCH_CALLABLE_DEFINITION(tag::pio2_1_,pio2_1);
  }

  template<typename T> BOOST_FORCEINLINE auto Pio2_1() BOOST_NOEXCEPT
  -> decltype(functional::pio2_1( boost::dispatch::as_<T>{}))
  {
    return functional::pio2_1( boost::dispatch::as_<T>{} );
  }
} }

#endif