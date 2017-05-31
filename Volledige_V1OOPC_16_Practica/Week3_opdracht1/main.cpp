/* --------------------------- */
// Dylan van Eck
// 1702786
// Jorn Bunk
// Week 3 opdracht 1
/* --------------------------- */
#include "window.hpp"
#include "line.hpp"
#include "ball.hpp"
#include "wall.hpp"

int main(){
   window w( vector( 128, 64 ), 1 );
   wall top(w, vector(0, 0), vector(123, 4), 5);
   wall right(w, vector(123, 0), vector(127, 59), 5);
   wall bottom(w, vector(4, 59), vector(127, 63), 5);
   wall left(w, vector(0, 4), vector(4, 63), 5);
   ball b(w, vector(50, 20), 6, vector(5, 2));
   
   drawable * objects[] = { &b, &top, &left, &right, &bottom};

   for(;;){
      w.clear();
      for( auto & p : objects ){
            p->draw();
      }
      wait_ms( 50 );
      for( auto & p : objects ){
          p->update();
      }
      for( auto & p : objects ){
         for( auto & other : objects ){
            p->interact( *other );
         } 
      }
   }
}


