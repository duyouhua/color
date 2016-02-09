#ifndef color_cmy_get_quadrature
#define color_cmy_get_quadrature

// ::color::get::quadrature( c )

#include "../../yiq/akin/cmy.hpp"
#include "../../yiq/trait/component.hpp"
#include "../../yiq/constant.hpp"

#include "../category.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"
#include "../../generic/trait/scalar.hpp"


 namespace color
  {
   namespace get
    {

     template< typename tag_name>
      inline
      typename ::color::_internal::model<  typename ::color::akin::yiq< ::color::category::cmy< tag_name > >::akin_type >::component_const_type
      quadrature( ::color::_internal::model< ::color::category::cmy<tag_name> > const& color_parameter )
       {
        typedef ::color::category::cmy<tag_name>  category_type;
        typedef typename ::color::trait::scalar<category_type>::instance_type   scalar_type;

        typedef typename ::color::akin::yiq<category_type>::akin_type     akin_type;

        typedef ::color::_internal::diverse< akin_type >       diverse_type;
        typedef ::color::_internal::normalize< category_type > normalize_type;

        typedef ::color::constant::yiq< akin_type > yiq_const_type;

        scalar_type value =
           + yiq_const_type::b31() * ( 1 - normalize_type::template process<0>( color_parameter.template get<0>() ) )
           + yiq_const_type::b32() * ( 1 - normalize_type::template process<1>( color_parameter.template get<1>() ) )
           + yiq_const_type::b33() * ( 1 - normalize_type::template process<2>( color_parameter.template get<2>() ) )
           ;

        value = yiq_const_type::q_normalize( value );

        return diverse_type::template process<2>( /*typename ::color::trait::scalar<akin_type>::instance_type ( */value /* ) */);
       }

    }
  }

#endif