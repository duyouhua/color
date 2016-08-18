#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  ::color::yuv< std::uint8_t > yv;

  ::color::make::orange( yq ); //!< Fill with some useful information

  std::cout<< "Orange in color::rgb<std::uint8_t> = ";
  std::cout << yq[0] << ", " << yq[1] << ", " << yq[2] << std::endl;
  
  ::color::operation::invert( yv );
  
  std::cout<< ";  Inverted = "; 
  std::cout << yq[0] << ", " << yq[1] << ", " << yq[2] << std::endl;

  return EXIT_SUCCESS;
 }