#ifndef TRAIN_HPP
#define TRAIN_HPP

#include "window.hpp"
#include "train_head.hpp"
#include "wagon.hpp"

///@file
///\brief
///train puts the train_head and the wagons together
///\details
///The max wagons are 3 wagons
///there is one train_head who will always be printed
class train{
private:
    train_head thomas;
    wagon1 first;
    wagon2 second;
    wagon3 thirth;
    int many;
public:
    train(window & w, int startx, int starty, int many);
    ///\brief
    ///print() prints the train.
    ///\details
    ///It depends on the input "many" how many wagons there will be printed
    ///If the input is higher than 3 it will give a error
    void print();
};
#endif