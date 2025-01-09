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
    //configure RDO = output
    LED_PIN_DDR = OUTPUT;
    init_externalInt_config();
}

void main(void) 
{
    init_config();
    
    return;
}
