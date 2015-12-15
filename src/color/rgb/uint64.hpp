#ifndef color_rgb_uint64
#define color_rgb_uint64

#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/unsigned.hpp"
#include "../_internal/utility/container/unsigned.hpp"

namespace color
 {
  namespace _internal
   {

    template< >
     struct bound< ::color::category::rgb_uint64 >
      : public ::color::_internal::utility::bound::general< std::uint64_t, unsigned >
      {
      };

    template< >
     struct index< ::color::category::rgb_uint64 >
      : public color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::rgb_uint64 >
      : public ::color::_internal::utility::component::Unsigned< std::uint16_t, 16, unsigned>
      {
      };

    template< >
     struct container< ::color::category::rgb_uint64 >
      : public  ::color::_internal::utility::container::Unsigned< std::uint64_t, std::uint16_t, unsigned, 3, 16 >
      {
      };

   }
 }

#endif