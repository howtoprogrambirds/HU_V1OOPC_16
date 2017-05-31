/* --------------------------- */
// Dylan van Eck
// 1702786
// Jorn Bunk
// Week 4 opdracht 2
/* --------------------------- */

#include "hwlib.hpp"
#include <cmath>

///@file
void toggler( hwlib::port_out & leds, hwlib::pin_in_out & toggle, hwlib::pin_in_out & erase ){
    
    toggle.direction_set_input();
    erase.direction_set_input();
    int i = 0;
    for(;;){
        //for( unsigned int i = 0; i < leds.number_of_pins(); ++i ){ 
        if( !toggle.get() && i < 1){
            i++;
            leds.set( i );
            i++;
            hwlib::wait_ms(400);
        }
        else if( !toggle.get() && i > 1 && i < 16){
            i = i+i - 1;
            leds.set(i);
            i++;
            hwlib::wait_ms(400);
        }
        else if( !erase.get() && i > 2){
            i = i/2-1;
            leds.set(i);
            i++;
            hwlib::wait_ms(400);
        }
        else if( !erase.get() && i == 2){
            i -= i;
            leds.set(i);
            hwlib::wait_ms(400);
        }
    }
}

int main( void ){
// kill the watchdog
   WDT->WDT_MR = WDT_MR_WDDIS;
   
   namespace target = hwlib::target;
   ///\brief
   ///set all the leds and buttons
   auto led0 = target::pin_out( target::pins::d12 );
   auto led1 = target::pin_out( target::pins::d11 );
   auto led2 = target::pin_out( target::pins::d10 );
   auto led3 = target::pin_out( target::pins::d9 );
   auto pb0  = target::pin_in_out( target::pins::d7 );
   auto pb1  = target::pin_in_out( target::pins::d6 );
   
   ///\brief
   ///group all the leds
   auto leds = hwlib::port_out_from_pins( led0, led1, led2, led3 );
   
   ///\brief
   ///toggler() let the leds light up one more at the time or less at the time
   ::toggler(leds,pb0,pb1);
   



}
