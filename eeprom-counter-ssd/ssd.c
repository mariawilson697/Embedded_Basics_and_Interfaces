#include "ssd.h"
void init_ssd(void)
{
    //configure data line port as output port
    DATA_PORT_DDR = 0x00;
    
    //configure control line port as output port
    CONTROL_PORT_DDR = CONTROL_PORT_DDR & 0xc3; // Sets RA2, RA3, RA4, and RA5 as output while keeping RA0 and RA1 unchanged.
    
    //initialize by making all led of data line port off
    DATA_PORT = 0x00;
    
    //initialize by making all led of control line port off
    CONTROL_PORT = CONTROL_PORT & 0xc3;
}




void display(int digit)
{
    
    //data line mask which need to assign to display 1 2 3 4 
    int datamask[10] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f};
    
    //control line mask which need to assign to display 1 2 3 4
    int controlmask[4] = {0x04, 0x08, 0x10, 0x20};
    
    //display one digit number
    if(digit >= 0 && digit < 10)
    {
        DATA_PORT = (DATA_PORT & 0x00) | datamask[digit];
        CONTROL_PORT = (CONTROL_PORT & 0xc3) | controlmask[0];
    }
    
    //display 2 digit number
    if(digit >= 10 && digit < 100)
    {   
        int digit_1 = digit / 10;
        
        int digit_2 = digit % 10;
        
        int digit[2] = {digit_1, digit_2};
        
        for(int i = 0; i < 2; i++)
        {
            DATA_PORT = (DATA_PORT & 0x00) | datamask[digit[i]];
            CONTROL_PORT = (CONTROL_PORT & 0xc3) | controlmask[i];
            delay(200);
        }
    }
}
//void delay(int time)
//{
//    for(int i = 0; i < time; i++);
//}