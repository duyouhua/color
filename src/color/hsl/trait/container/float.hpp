#ifndef color_hsl_trait_container_float
#define color_hsl_trait_container_float

#include "../../category.hpp"

#include "../../../_internal/utility/container/array.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct container< ::color::category::hsl_float >
      : public  ::color::_internal::utility::container::array< float, 3 >
      {
      };

   }
 }

#endif