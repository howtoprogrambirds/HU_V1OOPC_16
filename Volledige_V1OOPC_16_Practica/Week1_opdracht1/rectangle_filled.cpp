#include "rectangle_filled.hpp"
///@file

///\brief
///This function prints a filled rectangle
///\detail
///For every x it prints the y from begin to end. 

///for example: 
///start_x = 4, end_x = 7
///start_y = 4, end_y = 5

///It prints: x(4) y(4), x(4), y(5), x(5) y(4) etc.

void rectangle_filled::print(){
    for(int i = start_x; i <= end_x; i++){
        for(int j = start_y; j <= end_y; j++){
            w.draw(i,j);
        }
    }
}

