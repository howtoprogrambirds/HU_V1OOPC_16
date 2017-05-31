#include "ball.hpp"\

void ball::update(){
   midpoint.x += speed.x;
   midpoint.y += speed.y;
}

void ball::interact( drawable & other ){
   if( this != & other){
      if( overlaps( other ) == TRUE){
         speed.x *= -1;
         speed.y *= -1;
      }
   }
}
