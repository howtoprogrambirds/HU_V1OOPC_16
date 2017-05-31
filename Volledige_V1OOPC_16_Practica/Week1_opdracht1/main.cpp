/* --------------------------- */
// Dylan van Eck
// 1702786
// Jorn Bunk
// Week 1 opdracht 1
/* --------------------------- */
// template


#include <iostream>

#include "window.hpp"
#include "line.hpp"
#include "rectangle.hpp"
#include "circle.hpp"
#include "rectangle_filled.hpp"
int main(int argc, char **argv){
   window w( 128, 64, 1 );
   
   rectangle_filled filledbox1( w, 20, 10, 30, 20);
   filledbox1.print();
   
   rectangle_filled filledbox2(w, 40, 10, 50, 30);
   filledbox2.print();
   
   rectangle_filled filledbox3(w, 20, 40, 120, 50);
   filledbox3.print();
   
   return 0;
}
