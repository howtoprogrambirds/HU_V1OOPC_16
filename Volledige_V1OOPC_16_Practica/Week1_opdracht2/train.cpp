#include "train.hpp"
#include <iostream>

train::train(window & w, int startx, int starty, int many):
    thomas(w, startx, starty),
    first(w, startx, starty),
    second(w, startx, starty),
    thirth(w, startx, starty),
    many(many)
{}

void train::print(){
    for (int i = 0; i <= many; i++){
        if (many == 0){
            thomas.print();
        }
        else if(many == 1){
            thomas.print();
            first.print();
        }
        else if(many == 2){
            thomas.print();
            first.print();
            second.print();
        }
        else if(many == 3){
            thomas.print();
            first.print();
            second.print();
            thirth.print();
        }
        else{
            std::cerr << "you think i am rich, you rich m*therf*cker!" << '\n';
        }
    }
}