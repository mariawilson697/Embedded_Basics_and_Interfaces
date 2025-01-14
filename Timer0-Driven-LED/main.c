/*
 * File:   main.c
 * Author: user
 *
 * Created on 14 January, 2025, 4:21 PM
 */


#include <xc.h>
#include "timer.h"
#pragma config WDTE = OFF
void init_config()
{
    /*Initialize LED PINS 
     TRISD0 =0 WILL make RD0 as output pin
     Ensure LED is off initialy
     */
    LED_PIN_DDR = 0;
    LED_PIN = 0;
    
    /*Call timer init function*/
    
    init_timer0_config();
    
    /*Enable the global interrupt and Peripheral interrupt*/
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
