#include "wagon.hpp"

wagon::wagon(window & w):
    base(w, 70, 15, 100, 28),
    engine(w, 72, 29, 98, 30),
    front(w, 75, 30, 3),
    back(w, 95, 30, 3),
    tailW(w, 100, 28, 105, 28)
{}

void wagon::print(){
    base.print();
    engine.print();
    front.print();
    back.print();
    tailW.print();
}