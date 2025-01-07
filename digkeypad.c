#include "digkeypad.h"
void init_digkeypad()
{
    //set switch port as input port
    SWITCH_PORT_DDR = SWITCH_PORT_DDR | INPUT_LINES;     
    
}

unsigned char isSwitchPressed(unsigned char mode)
{
    static unsigned char once = 1;
    
    if(mode == EDGETRIGGERING)
    {
        
        // delay for avoiding bouncing
        delay(500); 
        if (((SWITCH_PORT & INPUT_LINES) != (NOSWITCH)) && (once == 1))
        {
            once = 0;
            return SWITCH_PORT & INPUT_LINES;
        }
    
        else if((SWITCH_PORT & INPUT_LINES) == NOSWITCH)
        {
            once = 1;
            return NOSWITCH;
        }
    }
    
    else if(mode == LEVELTRIGGERING)
    {
        //delay for avoiding bouncing 
        delay(500);

        //return the key pressed
        if ((SWITCH_PORT & INPUT_LINES)!= NOSWITCH)  //1111 1110 & 0011 1111 = XX11 1110 -> SW0 PRESSED
        {
            return SWITCH_PORT & INPUT_LINES;   
        }
        
        else if((SWITCH_PORT & INPUT_LINES)== NOSWITCH)
        {
            return NOSWITCH;
        }
    }
    return NOSWITCH;
}

void delay(int time)
{
    for(int i = 0; i < time; i++);
}
