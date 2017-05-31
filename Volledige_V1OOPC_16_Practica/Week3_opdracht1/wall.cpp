#include "wall.hpp"

wall::wall(window & w, const vector & start, const vector & end, int update_interval):
    rectangle( w, start, end),
    update_interval(update_interval),
    update_count(0)
{}

void wall::update(){
    if (update_count < update_interval){
        ++update_count;
    }
    else{
    filled = !filled;
    update_count = 0;
    }
}
