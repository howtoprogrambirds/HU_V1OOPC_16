// example:
// declaration of a line class that stores its window

#ifndef LINE_HPP
#define LINE_HPP

// example:
// declaration of a line class that stores its window

#include "drawable.hpp"

class line: public drawable{
protected:
    vector end;
public:
    line( window & w, const vector & location, const vector & end, const vector & size):
        drawable( w, location, size),
        end (end )
    {}
    void draw() override;
};

#endif // LINE_HPP
