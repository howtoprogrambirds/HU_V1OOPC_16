#include "train_head.hpp"

train_head::train_head( window & w, int start_x, int start_y):
   tailH(w, start_x+30, start_y+8, start_x+35, start_y+8),
   top( w, start_x+20, start_y-8, start_x+30, start_y),
   base( w, start_x, start_y, start_x + 30, start_y+10),
   nose(w, start_x+1, start_y-5, start_x+20, start_y),
   quard(w, start_x+8, start_y-2, start_x+23, start_y+5),
   firstH(w, start_x+3, start_y+11, 2),
   secondH(w, start_x+9, start_y+11, 2),
   thirdH(w, start_x+15, start_y+11, 2),
   bigH(w, start_x+25, start_y+8, 5),
   coalwagon(w, start_x+35, start_y+5, start_x+45, start_y+10),
   firstC(w, start_x+37, start_y+11, 2),
   secondC(w, start_x+43, start_y+11,2),
   tailC(w, start_x+45, start_y+8, start_x+50, start_y+8)
{}

void train_head::print(){
        tailH.print();
        top.print();
        base.print();
        nose.print();
        quard.print();
        firstH.print();
        secondH.print();
        thirdH.print();
        bigH.print();
        coalwagon.print();
        firstC.print();
        secondC.print();
        tailC.print();
}