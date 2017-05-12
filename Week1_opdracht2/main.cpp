// template

#include <iostream>

#include "window.hpp"
#include "line.hpp"
#include "rectangle.hpp"
#include "circle.hpp"
#include "rectangle_full.hpp"
#include "train_head.hpp"
#include "wagon.hpp"
#include "train.hpp"

int main(int argc, char **argv){
   window w( 256, 64, 2 );
   
   //line diagonal_line( w, 5, 5, 30, 40 );
   //diagonal_line.print();
   
   //rectangle box( w, 20, 10, 30, 20 );
   //box.print();
   
   //circle ball( w, 70, 30, 20 );
   //ball.print();
   
   //rectangle_full fullbox( w, 20, 10, 30, 20);
   //fullbox.print();
   /*
   train_head thomas(w, 10, 20);
   thomas.print();
   
   wagon1 thomasW(w, 10, 20);
   thomasW.print();
   
   wagon2 thomasW1(w, 10, 20);
   thomasW1.print();
   
   wagon3 thomasW2(w, 10, 2);
   thomasW2.print();*/
   
   train thomas(w, 10, 20, 0);
   thomas.print();
   return 0;
}
