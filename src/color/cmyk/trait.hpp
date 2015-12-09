#ifndef color_cmyk_trait_
#define color_cmyk_trait_


#include "./category.hpp"
#include "../generic/trait.hpp"

namespace color
 {
  namespace _internal
   {

    template< >
     struct trait< ::color::category::cmyk_uint8>
      : public ::color::_internal::trait< ::color::category::generic_uint8< 3 > >
      {
      };

    template< >
     struct trait< ::color::category::cmyk_uint16>
      : public ::color::_internal::trait< ::color::category::generic_uint16< 3 > >
      {
      };

   }
 }

#endif
