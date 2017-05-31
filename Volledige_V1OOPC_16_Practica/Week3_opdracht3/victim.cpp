#include "victim.hpp"


victim::victim(window & w, const vector& start, const vector& end, const vector& bounce):
    rectangle(w, start, end, bounce),
    start(start),
    end(end),
    touched(false)
{}
    
void victim::update() {
    drawable::update();
    if (touched) {
        if (start.x != end.y && start.x != end.x) {
            start.x++;
            start.y++;
            end.x--;
            end.y--;
            rectangle::resize(start, end);
        } else {
            touched = false;
        }
    }
}

void victim::interact(drawable& other){
    if( this != & other){
          if( overlaps( other )){
              touched = true;
          }
    }
}
