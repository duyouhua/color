#ifndef color_xyz_make_plum
#define color_xyz_make_plum

// ::color::make::plum( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.866667, 0.627451, 0.866667 } ) - rgb(221,160,221) - #DDA0DD

     template< typename tag_name >
      inline
      void plum( ::color::model< ::color::category::xyz< tag_name > > & color_parameter )
       {
        typedef ::color::category::xyz< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::xyz< double >      right_type;

        static left_type local( right_type( { 0.726247059, 0.065653424, 0.125011976 } ) );

        color_parameter = local;
       }

    }
  }

#endif
