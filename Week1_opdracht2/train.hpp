#ifndef TRAIN_HPP
#define TRAIN_HPP

#include "window.hpp"
#include "train_head.hpp"
#include "wagon.hpp"

class train{
    private:
    train_head thomas;
    wagon1 first;
    wagon2 second;
    wagon3 thirth;
    int many;
    public:
    train(window & w, int startx, int starty, int many);
    void print();
};
#endif