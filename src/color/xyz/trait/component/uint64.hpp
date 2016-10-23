#ifndef color_xyz_trait_component_uint64
#define color_xyz_trait_component_uint64

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct component< ::color::category::xyz_uint64 >
      : public ::color::_internal::utility::component::array< std::uint64_t, unsigned >
      {
      };

   }
 }

#endif
