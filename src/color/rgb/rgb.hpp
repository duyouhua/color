#ifndef color_rgb_rgb_
#define color_rgb_rgb_

#include "../_internal/model.hpp"

#include "./category.hpp"

#include "./uint8.hpp"
#include "./uint16.hpp"
#include "./uint32.hpp"
#include "./uint64.hpp"
#include "./float.hpp"
#include "./double.hpp"
#include "./ldouble.hpp"

#include "./get/get.hpp"
#include "./set/set.hpp"
#include "./make/make.hpp"
#include "./convert/convert.hpp"

namespace color
 {
  namespace _internal
   {
    template< typename type_name > struct pick_rgb
     {
         typedef color::category::rgb_uint32 category_type;
     };

    template<> struct pick_rgb< std::uint8_t   >{ typedef ::color::category::rgb_uint8   category_type; };
    template<> struct pick_rgb< std::uint16_t  >{ typedef ::color::category::rgb_uint16  category_type; };
    template<> struct pick_rgb< std::uint32_t  >{ typedef ::color::category::rgb_uint32  category_type; };
    template<> struct pick_rgb< std::uint64_t  >{ typedef ::color::category::rgb_uint64  category_type; };
    template<> struct pick_rgb< float          >{ typedef ::color::category::rgb_float   category_type; };
    template<> struct pick_rgb< double         >{ typedef ::color::category::rgb_double  category_type; };
    template<> struct pick_rgb< long    double >{ typedef ::color::category::rgb_ldouble category_type; };
   }

  template< typename type_name >
   using rgb = color::_internal::model< typename color::_internal::pick_rgb< type_name >::category_type >;

 }

#endif