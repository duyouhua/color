#ifndef  color_generic_make_sienna
#define color_generic_make_sienna

// ::color::make::sienna( c )

// TODO #include "model.hpp"
#include "../constant/sienna.hpp"

 namespace color
  {


    namespace constant
     {

      template< typename category_name >
       struct make< ::color::constant::sienna_type, category_name >
        {
         typedef category_name                         category_type;
         typedef ::color::model<category_type>            model_type;
         typedef ::color::rgb<std::uint8_t>                 rgb_type;
         typedef ::color::constant::sienna_t           constant_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & container )
          {
           static model_type  s_model{ rgb_type{ 0xA0, 0x52, 0x2D } };
           container = s_model.container();
          } 

        };

     }

  }

#endif
