/* 
 * File:   main.h
 * Author: user
 *
 * Created on 23 December, 2024, 4:26 PM
 */

#ifndef MAIN_H
#include <xc.h>
 

#define SWITCH_PORT PORTB
#define SWITCH_PORT_DDR TRISB

#define LED_PORT PORTD
#define LED_PORT_DDR TRISD
#define LED_PIN 

#define LEVEL_TRIGGERING 1
#define EDGE_TRIGGERING  2

#define SWITCH0 0x3E
#define SWITCH1 0x3D
#define SWITCH2 0x3B
#define SWITCH3 0x37
#define SWITCH4 0x2F
#define SWITCH5 0x1F

#define INPUT_LINES 0x3F
#define NO_SWITCH_PRESSED 0x3F




//Function Prototypes
void initSwicth(void);
void initLed(void);
unsigned char readDigitalKeypad(unsigned char mode);
void turnONLed(unsigned char key);
void delay(int time);
        
#endif	/* MAIN_H */

