/* --------------------------- */
// Dylan van Eck
// 1702786
// Jorn Bunk
// Week 5 opdracht 1
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
        else if( !toggle.get() && i > 1 && i ){
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
   
   auto ds   = target::pin_out( target::pins::d3 );
   auto shcp = target::pin_out( target::pins::d4 );
   auto stcp = target::pin_out( target::pins::d5 );
   auto spi  = hwlib::spi_bus_bit_banged_sclk_mosi_miso( 
      shcp, ds, hwlib::pin_in_dummy 
   );
   auto hc595 = hwlib::hc595( spi, stcp );

   
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
   auto leds = hwlib::port_out_from_pins(
    hc595.p0, 
    hc595.p3, 
    hc595.p2,
    hc595.p1,
    led0,
    led1, 
    led2, 
    led3
    );
   
   ///\brief
   ///toggler() let the leds light up one more at the time or less at the time
   ::toggler(leds,pb0,pb1);
   //::kitt(leds);
   



}
