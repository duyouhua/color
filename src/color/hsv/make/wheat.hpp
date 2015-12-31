#ifndef color_hsv_make_wheat
#define color_hsv_make_wheat

// ::color::make::wheat( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.960784, 0.870588, 0.701961 } ) 

      inline
      void wheat( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x88;
       }

      inline
      void wheat( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xf103;
       }

      inline
      void wheat( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xfff5441bu;
       }

      inline
      void wheat( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xfffff5f544f61bccul;
       }

      inline
      void wheat( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.108586, 0.269388, 0.960784 } );
       }

      inline
      void wheat( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.108586, 0.269388, 0.960784 } );
       }

      inline
      void wheat( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.108586, 0.269388, 0.960784 } );
       }

    }
  }

#endif