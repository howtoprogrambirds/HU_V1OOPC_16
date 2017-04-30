#ifndef RECTANGLEFULL_HPP
#define RECTANGLEFULL_HPP

#include "window.hpp"


class rectangle_full {
private:
   int start_x;
   int start_y; 
   int end_x;
   int end_y;
   window & w;
public:
    rectangle_full( window & w, int start_x, int start_y, int end_x, int end_y ):
      start_x( start_x ),
      start_y( start_y ),
      end_x( end_x ),
      end_y( end_y ),
      w( w )
   {}
   void print();
};


#endif