// template

#include <iostream>
#include <unistd.h>

#include "window.hpp"
#include "line.hpp"
#include "circle.hpp"
#include "ball.hpp"
#include "rectangle.hpp"

int main(int argc, char **argv){

    unsigned int microseconds;

    window w( vector(128, 64), 2 );
    rectangle klaas(w,vector (30, 10), vector(40, 40), vector(5,5));
    ball b( w, vector(10, 10) , 8, vector(2, 2) , vector (0,0), vector(5,5));
    
    for(;;){
        w.clear();
        klaas.draw();
        b.draw();
        sleep(1);
        b.update();
    }


}
