#ifndef color_gray_set_green
#define color_gray_set_green

// ::color::set::green( c, val )

 namespace color
  {
   namespace set
    {
     namespace _internal
      {
       namespace gray
        {
         namespace _internal
          {

           template< typename category_name >
            inline
            void
            green
             ( 
                       ::color::_internal::model< category_name >                                   & color_parameter,
              typename ::color::_internal::model< category_name >::component_input_const_type         component_parameter
             )
             {
              color_parameter.template set<0>( component_parameter );
             }

          }
        }
      }

      inline
      void
      green
       (
         ::color::_internal::model< ::color::category::gray_uint8 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::gray_uint8 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::gray::_internal::green<::color::category::gray_uint8>( color_parameter, component_parameter );
       };

      inline
      void
      green
       (
         ::color::_internal::model< ::color::category::gray_uint16 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::gray_uint16 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::gray::_internal::green<::color::category::gray_uint16>( color_parameter, component_parameter );
       };

      inline
      void
      green
       (
         ::color::_internal::model< ::color::category::gray_uint32 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::gray_uint32 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::gray::_internal::green<::color::category::gray_uint32>( color_parameter, component_parameter );
       };

      inline
      void
      green
       (
         ::color::_internal::model< ::color::category::gray_uint64 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::gray_uint64 >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::gray::_internal::green<::color::category::gray_uint64>( color_parameter, component_parameter );
       };

      inline
      void
      green
       (
         ::color::_internal::model< ::color::category::gray_float >                                   & color_parameter,
         ::color::_internal::model< ::color::category::gray_float >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::gray::_internal::green<::color::category::gray_float>( color_parameter, component_parameter );
       };

      inline
      void
      green
       (
         ::color::_internal::model< ::color::category::gray_double >                                   & color_parameter,
         ::color::_internal::model< ::color::category::gray_double >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::gray::_internal::green<::color::category::gray_double>( color_parameter, component_parameter );
       };

      inline
      void
      green
       (
         ::color::_internal::model< ::color::category::gray_ldouble >                                   & color_parameter,
         ::color::_internal::model< ::color::category::gray_ldouble >::component_input_const_type         component_parameter
       )
       {
        ::color::set::_internal::gray::_internal::green<::color::category::gray_ldouble>( color_parameter, component_parameter );
       };

    }
  }

#endif 