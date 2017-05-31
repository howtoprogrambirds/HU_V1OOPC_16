// example:
// declaration of a rectangle object that is contains four line objects

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "window.hpp"
#include "drawable.hpp"
#include "vector.hpp"
#include "line.hpp"

///@file
class rectangle : public drawable {
private:
    vector end;
    vector start;
    line left;
    line right;
    line top;
    line bottom;
protected:
    ///\brief
    ///bool filled
    bool filled;
public:
    rectangle( window & w, const vector & start, const vector & end );   
    ///\brief
    ///draw() print filled rectangle if filled is true otherwise print normal rectangle
    void draw() override;
};


#endif // RECTANGLE_HPP
