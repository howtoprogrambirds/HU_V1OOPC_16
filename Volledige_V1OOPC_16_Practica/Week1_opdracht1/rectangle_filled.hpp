#ifndef RECTANGLEFILLED_HPP
#define RECTANGLEFILLED_HPP

#include "window.hpp"

///@file

///\brief
///rectangle_filled is a class who makes a filled rectangle.
///\detail
///This is a class that implements several ints. Who are the x's and y's of the filled block.
///It also implements the window that is written to it.
class rectangle_filled {
private:
   int start_x;
   int start_y; 
   int end_x;
   int end_y;
   window & w;
public:
    rectangle_filled( window & w, int start_x, int start_y, int end_x, int end_y ):
      start_x( start_x ),
      start_y( start_y ),
      end_x( end_x ),
      end_y( end_y ),
      w( w )
   {}
   void print();
};


#endif