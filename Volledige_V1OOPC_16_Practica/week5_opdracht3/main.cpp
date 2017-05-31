/* --------------------------- */
// Dylan van Eck
// 1702786
// Jorn Bunk
// Week 5 opdracht 3
/* --------------------------- */

#include "hwlib.hpp"

class pin_out_invert : public hwlib::pin_out{
private:
    hwlib::pin_out & slave;
public:
    pin_out_invert(hwlib::pin_out & slave):
        slave(slave)
    {}
    
    void set(bool x, hwlib::buffering buf = hwlib::buffering::unbuffered){
        slave.set(!x);
    }
};

void kitt( hwlib::port_out & leds, int ms = 400 ){
   for(;;){
         leds.set( 0 );      
         hwlib::wait_ms( ms );
         leds.set( 255 );
         hwlib::wait_ms( ms );
   }
}


int main( void ){	
   // kill the watchdog
   WDT->WDT_MR = WDT_MR_WDDIS;
   namespace target = hwlib::target;
   
   auto led1 = target::pin_out(target::pins::d12);
   auto led2 = target::pin_out(target::pins::d11);
   auto led3 = target::pin_out(target::pins::d10);
   auto led4 = target::pin_out(target::pins::d9);
   
	auto ds = target::pin_out( target::pins::d3);
	auto shcp = target::pin_out( target::pins::d4);
	auto stcp = target::pin_out( target::pins::d5);
	auto spi = hwlib::spi_bus_bit_banged_sclk_mosi_miso(
    shcp, ds, hwlib::pin_in_dummy
    );
	
	auto hc595 = hwlib::hc595(spi, stcp);
   
   auto inverted_led1 = pin_out_invert(led1);
   auto inverted_led2 = pin_out_invert(led2);
   auto inverted_led3 = pin_out_invert(led3);
   auto inverted_led4 = pin_out_invert(led4);
   
   auto leds = hwlib::port_out_from_pins( hc595.p0, hc595.p3, hc595.p2, hc595.p1, inverted_led1, inverted_led2, inverted_led3, inverted_led4);
   auto all = hwlib::port_out_from_pins(leds);
   ::kitt(all);
}
