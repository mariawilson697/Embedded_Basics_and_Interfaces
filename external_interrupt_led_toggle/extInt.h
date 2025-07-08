/* 
 * File:   extInt.h
 * Author: user
 *
 * Created on 9 January, 2025, 3:27 PM
 */

#ifndef EXTINT_H
#define	EXTINT_H
#include <xc.h>

#define INT_PIN_DDR TRISB0

#define LED_PORT_DDR TRISD
#define LED_PORT PORTD
#define OUTPUT_LINES 0xfc 



void init_externalInt_config(void);
#endif	/* EXTINT_H */

