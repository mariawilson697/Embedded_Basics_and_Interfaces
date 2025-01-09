/*
 * File:   main.c
 * Author: user
 *
 * Created on 9 January, 2025, 3:26 PM
 */


#include <xc.h>
#include "extInt.h"

#pragma config WDTE = OFF

void init_config()
{
    //configure RD0 and RD1 as output
    LED_PORT_DDR = LED_PORT_DDR & OUTPUT_LINES;
    LED_PORT = LED_PORT & OUTPUT_LINES;

    //initialise the external interrput 
    init_externalInt_config();
}

void main(void) 
{
    init_config();
    unsigned char count = 0;
    while(1)
    {
        if(count <= 5)
        {
        
        
        for(count = 0; count < 6; count++)
        {
            RD1 = !RD1;
            for(int i =0; i < 10000; i++);
        }
        }
        
        else if(count == 5)
        {
            SLEEP();
        }
    }
    
    return;
}
