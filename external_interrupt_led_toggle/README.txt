External Interrupt LED Blink
-------------------------------------------------------------------


Description
-------------

This project demonstrates how to use an external interrupt on a microcontroller to toggle an LED when a switch connected to the external interrupt pin is pressed. 


Features
------------

External Interrupt Handling: Configures an external interrupt to detect button presses.
LED Control: Toggles the LED state based on the interrupt signal.



Requirements
-------------

Microcontroller: PIC16F877A or any compatible MCU with external interrupt capabilities.
Compiler: MPLAB XC8 (or similar).

Hardware:
picsimLAB simulator



Build the Project:
-------------------

Use the provided Makefile or MPLAB IDE to build the project.
Generate the .hex file.
Flash the simulator


Code Highlights
-----------------

Interrupt Configuration:
Sets up the external interrupt with edge triggering.
Clears the interrupt flag after handling.
clear the external interuupt flag
enable the interrupt enable bit

Main Logic:
Initializes GPIO pins for the interrupt and LED.
Handles toggling of the LED state within the ISR.


Example Workflow
--------------------

Press the switch connected to the external interrupt pin.


The LED toggles its state:
If the LED was OFF, it turns ON.
If the LED was ON, it turns OFF.



Future Enhancements
-------------------

Add multiple LEDs controlled by different interrupt sources.
Implement long-press detection for additional functionality.
Extend support for other microcontroller families.