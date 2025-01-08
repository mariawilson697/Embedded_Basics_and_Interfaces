#include "main.h"

void initLed(void)
{
    //configure PORTD as LED port
    LED_PORT_DDR = LED_PORT_DDR & ~0x3F;
    
    //Make all LEDS OFF
    LED_PORT = LED_PORT & 0xC0;
    
}

void turnONLed(unsigned char key) //0x3E -> 0011 1110  -> 0000 0001 -> key ^ 0011 1111(mask) -> 3 f
{
    //make LEDBlink
    LED_PORT = LED_PORT ^ ~key; //XX00 0000 ^ XX00 0001 = 00 0001 -> LED0 ON -> 00 0001 ^ 00 0001 -> 0
    delay(20000);  
}