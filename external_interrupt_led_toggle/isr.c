#include <xc.h>

void __interrupt() isr(void)
{
    //isr for extrenal interrupt
    if(INTF)
    {
        RD0 = !RD0;
        
    }
    
    INTF = 0;
}
