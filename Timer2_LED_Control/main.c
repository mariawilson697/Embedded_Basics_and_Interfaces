/*
 * File:   main.c
 * Author: user
 *
 * Created on 15 January, 2025, 4:01 PM
 */


#include <xc.h>
#include "timer2.h"
#pragma config WDTE = OFF


void init_config()
{
    LED_PIN_DDR = 0;
    LED_PIN = 0;
            
    init_timer2();
    
    GIE = 1;
    PEIE = 1;
}
void main(void) 
{
    init_config();
    while(1)
    {
    
    }
    return;
}
