/* --------------------------- */
// Dylan van Eck
// 1702786
// Jorn Bunk
// Week 5 opdracht 2
/* --------------------------- */

#include "hwlib.hpp"

class and_decorator : public hwlib::pin_in{
private:
    hwlib::target::pin_in & sw1;
    hwlib::target::pin_in & sw2;
public:
    and_decorator(hwlib::target::pin_in & sw1, hwlib::target::pin_in & sw2):
        sw1(sw1),
        sw2(sw2)
    {}
    
    bool get( hwlib::buffering buf = hwlib::buffering::unbuffered ) override{
        return !sw1.get() && !sw2.get();
    }
};

int main( void ){	
   // kill the watchdog
   WDT->WDT_MR = WDT_MR_WDDIS;
   namespace target = hwlib::target;
   
   auto sw1 = target::pin_in(target::pins::d6);
   auto sw2 = target::pin_in(target::pins::d7);
   
    auto decorator = and_decorator(sw1, sw2);
   
    for(;;){
        hwlib::cout << decorator.get();
        hwlib::wait_ms(1000);
    }
}
