#ifndef WAGON_HPP
#define WAGON_HPP


#include "window.hpp"
#include "line.hpp"
#include "rectangle.hpp"
#include "circle.hpp"

///@file
///\brief
///wagon1 wagon2 wagon3 are classes who makes a wagons
///\detail
///every single class uses one line for the chain at the back of the wagon.
///there are also 2 rectangles for the wagon(1 for the container, 1 under the container).
///the wagon uses two circles one at the front one at the back.
class wagon1{
    private:
    line tailW;
    rectangle base, engine;
    circle front, back;
    public:
    wagon1(window & w, int start_x, int start_y);
    void print();
    
};

class wagon2{
    private:
    line tailW;
    rectangle base, engine;
    circle front, back;
    public:
    wagon2(window & w, int start_x, int start_y);
    void print();
};

class wagon3{
    private:
    line tailW;
    rectangle base, engine;
    circle front, back;
    public:
    wagon3(window & w, int start_x, int start_y);
    void print();
};
#endif