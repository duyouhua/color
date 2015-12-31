#ifndef color_yiq_make_aqua
#define color_yiq_make_aqua

// ::color::make::aqua( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0, 1, 1 } ) 

      inline
      void aqua( ::color::_internal::model< color::category::yiq_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x24;
       }

      inline
      void aqua( ::color::_internal::model< color::category::yiq_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xcdd5;
       }

      inline
      void aqua( ::color::_internal::model< color::category::yiq_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffcb69b2u;
       }

      inline
      void aqua( ::color::_internal::model< color::category::yiq_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffffc9df6780b374ul;
       }

      inline
      void aqua( ::color::_internal::model< color::category::yiq_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.701, -0.595716, -0.211456 } );
       }

      inline
      void aqua( ::color::_internal::model< color::category::yiq_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.701, -0.595716, -0.211456 } );
       }

      inline
      void aqua( ::color::_internal::model< color::category::yiq_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.701, -0.595716, -0.211456 } );
       }

    }
  }

#endif
