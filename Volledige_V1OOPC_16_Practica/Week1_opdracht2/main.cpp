/* --------------------------- */
// Dylan van Eck
// 1702786
// Jorn Bunk
// Week 1 opdracht 2
/* --------------------------- */

// template


#include <iostream>

#include "window.hpp"
#include "line.hpp"
#include "rectangle.hpp"
#include "circle.hpp"
#include "rectangle_filled.hpp"
#include "train_head.hpp"
#include "wagon.hpp"
#include "train.hpp"

int main(int argc, char **argv){
   window w( 256, 64, 1 );

   train thomas(w, 10, 20, 3);
   thomas.print();
   return 0;
}
