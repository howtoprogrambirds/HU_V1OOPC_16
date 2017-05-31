#ifndef DRAWABLE_HPP
#define DRAWABLE_HPP

#include "window.hpp"
#include "vector.hpp"

class drawable {
protected:
   window & w;
   vector location;
   vector size;
public:
    drawable( window & w, const vector & location, const vector & size ):
        w( w ),
        location( location ),
        size( size )
    {}
    virtual void draw() = 0;
    virtual void update(){}
    
    bool overlaps ( const drawable & other);
    virtual void interact( drawable & other){}
};


#endif