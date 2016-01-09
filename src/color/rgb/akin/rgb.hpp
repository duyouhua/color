#ifndef color_rgb_akin_rgb
#define color_rgb_akin_rgb

#include "../../generic/akin/rgb.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct rgb< ::color::category::rgb_uint8   >{ typedef ::color::category::rgb_uint8   akin_type; };
    template< >struct rgb< ::color::category::rgb_uint16  >{ typedef ::color::category::rgb_uint16  akin_type; };
    template< >struct rgb< ::color::category::rgb_uint32  >{ typedef ::color::category::rgb_uint32  akin_type; };
    template< >struct rgb< ::color::category::rgb_uint64  >{ typedef ::color::category::rgb_uint64  akin_type; };
    template< >struct rgb< ::color::category::rgb_float   >{ typedef ::color::category::rgb_float   akin_type; };
    template< >struct rgb< ::color::category::rgb_double  >{ typedef ::color::category::rgb_double  akin_type; };
    template< >struct rgb< ::color::category::rgb_ldouble >{ typedef ::color::category::rgb_ldouble akin_type; };

   }
 }

#endif
