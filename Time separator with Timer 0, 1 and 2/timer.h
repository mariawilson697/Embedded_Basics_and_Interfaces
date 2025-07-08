/* 
 * File:   timer.h
 * Author: user
 *
 * Created on 5 February, 2025, 2:57 PM
 */

#ifndef TIMER_H
#include <xc.h>
#define LED_PORT_DDR TRISD 
#define LED_PORT PORTD          //RD0, RD1, RD2   





void timer0_init_config(void);
void timer1_init_config(void);
void timer2_init_config(void);
#endif	/* TIMER_H */

