/*
 * File:   main.c
 * Author: user
 *
 * Created on 5 February, 2025, 2:57 PM
 */


#include <xc.h>
#include "timer.h"

#pragma config WDTE = OFF
void init_config()
{
    //configure the RD0, RD1, RD2 as output pins
    LED_PORT_DDR = LED_PORT_DDR & 0xf8;   //1111 1000
    LED_PORT = LED_PORT & 0xf8;
    
    timer0_init_config();
    timer1_init_config();
    timer2_init_config();
    
    //enable peie and gie
    PEIE = 1;
    GIE = 1;
}

void main(void) 
{
    init_config();
    
    while(1);
    return;
}
