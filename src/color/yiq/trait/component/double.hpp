#ifndef color_yiq_trait_component_double
#define color_yiq_trait_component_double

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct component< ::color::category::yiq_double >
      : public ::color::_internal::utility::component::array< double, unsigned >
      {
      };

   }
 }

#endif