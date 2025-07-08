#include <xc.h>

void __interrupt() isr(void)
{
    unsigned int count;
    //isr for tomer0 interrupt
    if(TMR0IF)
    {
        TMR0 = TMR0 + 8;
        count = count + 1;
        if(count == 10000)
        {
            count = 0;
            RD3 = !RD3;
        }
    }
    
    TMR0IF = 0;
}

