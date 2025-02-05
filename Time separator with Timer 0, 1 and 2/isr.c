#include <xc.h>

void __interrupt() isr(void)
{
    static unsigned int count0 = 0;
    static unsigned int count1 = 0;
    static unsigned int count2 = 0;
    
    //isr for tomer0 interrupt
    if(TMR0IF)
    {
        TMR0 = TMR0 + 8;
        count0 = count0 + 1;
        if(count0 == 5000)
        {
            count0 = 0;
            RD0 = !RD0;
        }
    }
    if(TMR1IF)
    {
            
        TMR1L = 0xDC;
        TMR1H = 0x0B;
        count1 = count1 + 1;
        if(count1 == 40)
        {
            count1 = 0;
            RD1 = !RD1;
        }
    }
    
    if(TMR2IF)
    {
        count2++;
        
        if(count2 == 5000)
        {
            RD2 = !RD2;
            count2 = 0;
        }
    }
    
    TMR1IF = 0;
    TMR2IF = 0;
    TMR0IF = 0;
}
