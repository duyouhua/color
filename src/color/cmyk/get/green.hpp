#ifndef color_cmyk_get_green
#define color_cmyk_get_green

// ::color::get::green( c )

#include "../../rgb/akin/cmyk.hpp"
#include "../../rgb/trait/component.hpp"

#include "../category.hpp"
#include "../../generic/operation/invert.hpp"
#include "../../_internal/reformat.hpp"

 namespace color
  {
   namespace get
    {
     namespace _internal
      {
       namespace cmyk
        {
         namespace _internal
          {

           template< typename category_name, typename scalar_name = double >
            inline
            typename ::color::trait::component< typename ::color::akin::rgb<category_name>::akin_type >::return_type
            green( ::color::_internal::model< category_name > const& color_parameter  )
             {
              typedef scalar_name scalar_type;

              typedef typename ::color::akin::rgb<category_name >::akin_type     akin_type;

              typedef  ::color::operation::_internal::invert< category_name > invert_type; 
              typedef  ::color::_internal::reformat< akin_type, category_name, scalar_name > reformat_type;

              return reformat_type::template process<1,1>( invert_type::template component<1>( color_parameter.template get<1>() ) );
             }

          }
        }
      }

      inline
      ::color::_internal::model< color::category::cmyk_uint8 >::component_const_type
      green( ::color::_internal::model< color::category::cmyk_uint8 > const& color_parameter )
       {
        return ::color::get::_internal::cmyk::_internal::green<color::category::cmyk_uint8>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::cmyk_uint16 >::component_const_type
      green( ::color::_internal::model< color::category::cmyk_uint16 > const& color_parameter )
       {
        return ::color::get::_internal::cmyk::_internal::green<color::category::cmyk_uint16>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::cmyk_uint32 >::component_const_type
      green( ::color::_internal::model< color::category::cmyk_uint32 > const& color_parameter )
       {
        return ::color::get::_internal::cmyk::_internal::green<color::category::cmyk_uint32>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::cmyk_uint64 >::component_const_type
      green( ::color::_internal::model< color::category::cmyk_uint64 > const& color_parameter )
       {
        return ::color::get::_internal::cmyk::_internal::green<color::category::cmyk_uint64>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::cmyk_float >::component_const_type
      green( ::color::_internal::model< color::category::cmyk_float > const& color_parameter )
       {
        return ::color::get::_internal::cmyk::_internal::green<color::category::cmyk_float>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::cmyk_double >::component_const_type
      green( ::color::_internal::model< color::category::cmyk_double > const& color_parameter )
       {
        return ::color::get::_internal::cmyk::_internal::green<color::category::cmyk_double>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::cmyk_ldouble >::component_const_type
      green( ::color::_internal::model< color::category::cmyk_ldouble > const& color_parameter )
       {
        return ::color::get::_internal::cmyk::_internal::green<color::category::cmyk_ldouble>( color_parameter );
       };


    }
  }

#endif
