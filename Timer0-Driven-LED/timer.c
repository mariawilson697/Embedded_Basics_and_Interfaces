#include "timer.h"


void init_timer0_config(void)
{
    /*Increwment the ticks from 6 : to make the resolution 250*/
    TMR0 = 0x06;
 
    /*Enable the T0 interrupt*/
    T0IE = 1;
    
//    /*Ensure timer0 interrupt flag bit is disabled*/
//    T0IF = 0;  
      
    /*enable TMR0 as timer: To count the internal clock pulse*/
    T0CS = 0;
    
    /*enable prescaler */
    PSA = 0;

    /*Set prescalar value of 1:2*/
    PS2 = 0;
    PS1 = 0;
    PS0 = 0;

}
