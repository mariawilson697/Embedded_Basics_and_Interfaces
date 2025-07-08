#include "main.h"

void initSwicth(void)
{
    //Configure PORTB to input Port
    SWITCH_PORT_DDR = SWITCH_PORT_DDR | 0x3F; 
}

unsigned char readDigitalKeypad(unsigned char mode)
{
    static unsigned char once = 1;
    
    if(mode == LEVEL_TRIGGERING)
    {
        //delay for avoiding bouncing 
        delay(500);

        //return the key pressed
        if ((SWITCH_PORT & INPUT_LINES)!= NO_SWITCH_PRESSED)  //1111 1110 & 0011 1111 = XX11 1110 -> SW0 PRESSED
        {
            return SWITCH_PORT & INPUT_LINES;   
        }
        
        else if((SWITCH_PORT & INPUT_LINES)== NO_SWITCH_PRESSED)
        {
            return NO_SWITCH_PRESSED;
        }
    
   }
    
    if(mode == EDGE_TRIGGERING)
    {
        // delay for avoiding bouncing
        delay(500); 
        if (((SWITCH_PORT & INPUT_LINES) != (NO_SWITCH_PRESSED)) && (once == 1))
        {
            once = 0;
            return SWITCH_PORT & INPUT_LINES;
        }
    
        else if((SWITCH_PORT & INPUT_LINES) == NO_SWITCH_PRESSED)
        {
            once = 1;
            return NO_SWITCH_PRESSED;
        }
    }     
        return NO_SWITCH_PRESSED;

}

void delay(int time)
{
    for(int i = 0; i < time; i++);
}