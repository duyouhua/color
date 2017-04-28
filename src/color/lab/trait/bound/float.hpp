#ifndef color_lab_trait_bound_float
#define color_lab_trait_bound_float

#include "../../category.hpp"

#include "../../../_internal/utility/bound/lab.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::lab_float >
      : public ::color::_internal::utility::bound::lab_scalar< unsigned, float >
      {
      };

    template< >
     struct bound< ::color::category::lab_double >
      : public ::color::_internal::utility::bound::lab_scalar< unsigned, double >
      {
      };

    template< >
     struct bound< ::color::category::lab_ldouble >
      : public ::color::_internal::utility::bound::lab_scalar< unsigned, long double >
      {
      };

   }
 }

#endif