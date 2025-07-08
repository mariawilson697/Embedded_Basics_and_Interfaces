#include "timer2.h"
void init_timer2(void)
{
    //Enable the TMR2 interrupt
    TMR2IE = 1;
    
    //Initialise the value in tmr2 as 0
    TMR2 = 0x00;
    
    //tmr2 ON
    TMR2ON = 1;
    
    //Load pr2 with a value at which overflow happens
    PR2 = 250;
}
