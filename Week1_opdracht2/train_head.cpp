#include "train_head.hpp"

train_head::train_head( window & w):
   tailH(w, 50, 28, 55, 28),
   top( w, 40, 12, 50, 20),
   base( w, 20, 20, 50, 30),
   nose(w, 21, 15, 40, 20),
   quard(w, 28, 18, 43, 25),
   firstH(w, 23, 31, 2),
   secondH(w, 29, 31, 2),
   thirdH(w, 35, 31, 2),
   bigH(w, 45, 28, 5),
   coalwagon(w, 55, 25, 65, 30),
   firstC(w, 57, 31, 2),
   secondC(w, 63, 31,2),
   tailC(w, 65, 28, 70, 28)
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