#include "extInt.h"

void init_externalInt_config()
{
    //INT pin = input
    INT_PIN_DDR = INPUT;
    
    //select falling edge
    INTEDG = 0;
    
    //clear the int flag bit
    INTF = 0;
    
    //Enable the int flag
    INTE = 1;
    
    //Enable global interrupt enable
    GIE = 1;
    
}

