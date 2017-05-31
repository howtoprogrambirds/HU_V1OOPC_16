/* --------------------------- */
// Dylan van Eck
// 1702786
// Jorn Bunk
// Week 4 opdracht 1
/* --------------------------- */

#include "hwlib.hpp"
///@file

int main( void ){
// kill the watchdog
   WDT->WDT_MR = WDT_MR_WDDIS;
   
   namespace target = hwlib::target;
   ///\brief
   ///set all the leds as outputs
   auto led0 = target::pin_out( target::pins::d12 );
   auto led1 = target::pin_out( target::pins::d11 );
   auto led2 = target::pin_out( target::pins::d10 );
   auto led3 = target::pin_out( target::pins::d9 );
   
   ///\brief
   ///let light up all the leds in pairs of two from 0 to 3 and back constant
   for(;;){
      led0.set( 1 ); led1.set(1); hwlib::wait_ms( 400 ); led0.set( 0 ); led1.set(0);
      led1.set( 1 ); led2.set(1); hwlib::wait_ms( 400 ); led1.set( 0 ); led2.set(0); 
      led2.set( 1 ); led3.set(1); hwlib::wait_ms( 400 ); led2.set( 0 ); led3.set(0);
      led1.set( 1 ); led2.set(1); hwlib::wait_ms( 400 ); led1.set( 0 ); led2.set(0);
   }

}
