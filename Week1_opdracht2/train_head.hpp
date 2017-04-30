#ifndef TRAINHEAD_HPP
#define TRAINHEAD_HPP

#include "window.hpp"
#include "line.hpp"
#include "rectangle.hpp"
#include "rectangle_full.hpp"
#include "circle.hpp"

///@file

///\brief
///train_head is a class who makes the head and the coalwagon
///\detail
///It uses lines for chain between the head and the coalwagon.
///The class makes in total 3 rectangles for the head(base, top, nose) and one for the coalwagon.
///The head has also one filled rectangle named quard.
///There are 4 circles for the head(it ends with H) and 2 circles for the coalwagon

class train_head {
    private:
    line tailH, tailC;
    rectangle base, top, nose, coalwagon;
    rectangle_full quard;
    circle firstH, secondH, thirdH, bigH, firstC, secondC;
    public:
    train_head( window & w);
    void print();
};

#endif