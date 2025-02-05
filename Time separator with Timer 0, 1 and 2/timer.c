#include "timer.h"

void timer0_init_config(void)
{
        /*Increwment the ticks from 6 : to make the resolution 250*/
    TMR0 = 0x06;
 
    /*Enable the T0 interrupt*/
    T0IE = 1;
    
//    /*Ensure timer0 interrupt flag bit is disabled*/
//    T0IF = 0;  
      
    /*enable TMR0 as timer: To count the internal clock pulse*/
    T0CS = 0;
    
    /*enable pre-scaler */
    PSA = 0;
    
    //Setting pre-scalar of 1:2
    PS2 = 0;
    PS1 = 0;
    PS0 = 0;
}
void timer1_init_config(void)
{
      //Enable the TMR1 interrupt
    TMR1IE = 1;
    
    //prescalar = 1
    T1CKPS1 = 0;
    T1CKPS0 = 0;
    
    
    T1OSCEN = 0;

    TMR1CS = 0;
    
    TMR1ON = 1;
    
    TMR1L = 0xDC;
    TMR1H = 0x0B;
    
}
void timer2_init_config(void)
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