// example:
// declaration of a rectangle object that is contains four line objects

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "line.hpp"
#include "drawable.hpp"
#include "vector.hpp"

class rectangle : drawable {
private:
    vector end;
    line left, right, top, bottom;
public:
   rectangle( window & w, const vector & location, const vector & end, const vector & size ):
        drawable(w,location,size),
        end (end),
        left(w, vector(location.x, location.y), vector(location.x, end.y),size),
        right(w, vector(end.x, location.y), vector(end.x, end.y),size),
        top(w, vector(location.x, location.y), vector(end.x, location.y),size),
        bottom(w, vector(location.x, end.y), vector(end.x + 1, end.y),size)
    {}
        
   void draw() override;
};


#endif // RECTANGLE_HPP
