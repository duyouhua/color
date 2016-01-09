#ifndef color_yiq_trait_component_uint8
#define color_yiq_trait_component_uint8

#include "../../category.hpp"

#include "../../../_internal/utility/component/cnent332.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct component< ::color::category::yiq_uint8 >
      : public ::color::_internal::utility::component::cnent332< unsigned >
      {
      };

   }
 }

#endif
