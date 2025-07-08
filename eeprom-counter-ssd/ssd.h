/* 
 * File:   ssd.h
 * Author: user
 *
 * Created on 3 January, 2025, 9:09 PM
 */

#ifndef SSD_H
#include <stdio.h>
#include <xc.h>
#include <stdint.h>


#define DATA_PORT_DDR TRISD
#define CONTROL_PORT_DDR TRISA



#define DATA_PORT PORTD
#define CONTROL_PORT PORTA


void init_ssd(void);
void display(int digit);
void delay(int time);
#endif	/* SSD_H */

