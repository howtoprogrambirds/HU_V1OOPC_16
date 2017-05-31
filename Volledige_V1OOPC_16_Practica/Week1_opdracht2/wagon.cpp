#include "wagon.hpp"

wagon1::wagon1(window & w, int start_x, int start_y):
    base(w, start_x+50, start_y-5, start_x+80, start_y+8),
    engine(w, start_x+52, start_y+9, start_x+79, start_y+10),
    front(w, start_x+55, start_y+10, 3),
    back(w, start_x+75, start_y+10, 3),
    tailW(w, start_x+45, start_y+8, start_x+50, start_y+8)
{}

void wagon1::print(){
    base.print();
    engine.print();
    front.print();
    back.print();
    tailW.print();
}

wagon2::wagon2(window & w, int start_x, int start_y):
    base(w, start_x+50+(35*1), start_y-5, start_x+80+(35*1), start_y+8),
    engine(w, start_x+52+(35*1), start_y+9, start_x+79+(35*1), start_y+10),
    front(w, start_x+55+(35*1), start_y+10, 3),
    back(w, start_x+75+(35*1), start_y+10, 3),
    tailW(w, start_x+45+(35*1), start_y+8, start_x+50+(35*1), start_y+8)
{}

void wagon2::print(){
    base.print();
    engine.print();
    front.print();
    back.print();
    tailW.print();
}

wagon3::wagon3(window & w, int start_x, int start_y):
    base(w, start_x+50+(35*2), start_y-5, start_x+80+(35*2), start_y+8),
    engine(w, start_x+52+(35*2), start_y+9, start_x+79+(35*2), start_y+10),
    front(w, start_x+55+(35*2), start_y+10, 3),
    back(w, start_x+75+(35*2), start_y+10, 3),
    tailW(w, start_x+45+(35*2), start_y+8, start_x+50+(35*2), start_y+8)
{}

void wagon3::print(){
    base.print();
    engine.print();
    front.print();
    back.print();
    tailW.print();
}