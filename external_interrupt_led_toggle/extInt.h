/* 
 * File:   extInt.h
 * Author: user
 *
 * Created on 9 January, 2025, 3:27 PM
 */

#ifndef EXTINT_H
#define	EXTINT_H
#include <xc.h>

#define LED_PIN_DDR TRISD0
#define INT_PIN_DDR TRISB0

typedef enum
{
    OUTPUT = 0,
    INPUT = 1     
 
}pin_config;



void init_externalInt_config(void);
#endif	/* EXTINT_H */

