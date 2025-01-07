/*
 * File:   %<%NAME%>%.%<%EXTENSION%>%
 * Author: %<%USER%>%
 *
 * Created on %<%DATE%>%, %<%TIME%>%
 */


#include <xc.h>
#include"ssd.h"
#include "digkeypad.h"
#include "eeprom.h"

#pragma config WDTE = OFF

void init_config(void)
{
    init_ssd();
    init_digkeypad();
}
void main(void) 
{
    unsigned char key;
    static unsigned char count = 0;
    
    init_config();
    
    
    while(1)
    {
 
    key = isSwitchPressed(EDGETRIGGERING);
    
    if(key == SWITCH0) //(switch_port & inputline) |1
    {
        if(count < 10)
        {
        count = count + 1;
        }
        
        else if(count == 10)
        {
            count = 0;
        }
        
    }
    else if(key == SWITCH1)
    {
        eeprom_write(0x00, count);
    }
    
    else if(key == SWITCH2)
    {
        count = eeprom_read(0x00);    
    }
    
    display(count);
    }
    
	return;
 
}
