#ifndef WAGON_HPP
#define WAGON_HPP


#include "window.hpp"
#include "line.hpp"
#include "rectangle.hpp"
#include "circle.hpp"

///@file

///\brief
///wagon is a class who makes a wagon
///\detail
///It uses one line for the chain at the back of the wagon.
///there are also 2 rectangles for the wagon(1 for the container, 1 under the container).
///the wagon uses two circles one at the front one at the back.
class wagon{
    private:
    line tailW;
    rectangle base, engine;
    circle front, back;
    public:
    wagon(window & w);
    void print();
    
};

#endif