#ifndef color_hsl_convert_cmyk
#define color_hsl_convert_cmyk

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../cmyk/cmyk.hpp"
#include "../../rgb/rgb.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename hsl_tag_name, typename cmyk_tag_name >
     struct convert
      <
        ::color::category::hsl< hsl_tag_name >
       ,::color::category::cmyk<  cmyk_tag_name >
      >
      {
       public:
         typedef ::color::category::hsl<   hsl_tag_name >     hsl_category_type, category_left_type;
         typedef ::color::category::cmyk< cmyk_tag_name >    cmyk_category_type, category_right_type;

         typedef typename ::color::akin::rgb< cmyk_category_type >::akin_type  rgb_category_type;

         typedef ::color::_internal::model< hsl_category_type > hsl_model_type;
         typedef ::color::_internal::model< cmyk_category_type >  cmyk_model_type;

         typedef ::color::_internal::model< rgb_category_type >  rgb_model_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           left = hsl_model_type( rgb_model_type( cmyk_model_type( right ) ) ).container();
          }
        };

   }
 }

#endif
