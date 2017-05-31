// example:
// declaration of a window class

#ifndef WINDOW_HPP
#define WINDOW_HPP

#include "windows.h"
#include "vector.hpp"

class window {
   vector size;
   int scale;
   
   // needed to use the OS window
   HDC hdc;
   
public:
   window( vector size,int scale );
   void draw( int x, int y);
   void clear();
};

#endif // WINDOW_HPP
