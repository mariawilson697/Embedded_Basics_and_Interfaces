/* 
 * File:   digkeypad.h
 * Author: user
 *
 * Created on 7 January, 2025, 4:14 PM
 */

#ifndef DIGKEYPAD_H
# include <xc.h>


#define SWITCH_PORT_DDR TRISB
#define SWITCH_PORT PORTB

#define EDGETRIGGERING 1
#define LEVELTRIGGERING 2

#define SWITCH0 0x06
#define SWITCH1 0x05
#define SWITCH2 0x03
#define NOSWITCH 0x07
#define INPUT_LINES 0x07

#define FAILURE 3

void init_digkeypad(void);
unsigned char isSwitchPressed(unsigned char mode);
void delay(int time);

#endif	/* DIGKEYPAD_H */

