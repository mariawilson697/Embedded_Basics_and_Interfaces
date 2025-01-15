#include "timer2.h"
void __interrupt() isr(void)
{
    volatile unsigned int count;
    if(TMR2IF)
    {
        count++;
        
        if(count == 20000)
        {
        LED_PIN = !LED_PIN;
        count = 0;
        }
    }
    
    TMR2IF = 0;
}
