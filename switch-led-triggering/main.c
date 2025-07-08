/*
 * File:   main.c
 * Author: user
 *
 * Created on 23 December, 2024, 4:25 PM
 */


#include <xc.h>
#include "main.h"

#pragma config WDTE = OFF        // Watchdog Timer Enable bit (WDT enabled)

void init_config()
{
    //Initialize Switch
    initSwicth();
    
    //initialize LED
    initLed();
}
void main(void) 
{
    unsigned char mode;
    init_config();
    unsigned char key;
    while(1)
    {
        //Check which switch is pressed
       key = readDigitalKeypad(LEVEL_TRIGGERING); //XX11 1110
       
       if(key != NO_SWITCH_PRESSED)
       {
//           if(key == 0xFE)
//           {
//               LED_PIN = 0x01;
//           }
               //LED_PORT = ~key;
               //delay(20000);
           turnONLed(key);
       }
    }
    
    
    
    return;
}
