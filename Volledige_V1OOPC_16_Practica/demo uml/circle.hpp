// example:
// declaration of a circle class that stores its window

#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "drawable.hpp"
 
class circle : public drawable {
protected:
   int radius;
   vector midpoint;
public:
   circle( window & w, const vector & midpoint, int radius , const vector & location, const vector & size):
      drawable(w, location, size),
      midpoint( midpoint ),
      radius( radius )
   {}
   void draw() override;
};

#endif // CIRCLE_HPP
