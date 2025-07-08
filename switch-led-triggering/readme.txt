Switch and LED Control with Debouncing and Trigger Modes
-------------------------------------------------------------------
This project implements a control system where multiple switches are mapped to corresponding LEDs. Pressing a switch turns on its associated LED. The system supports both level-triggered and edge-triggered modes, with debouncing to ensure reliable operation.

Features:
Switch-to-LED Mapping:

Each switch (e.g., SW1, SW2, ...) controls a specific LED (LED1, LED2, ...).
Trigger Modes:

Level Triggering: LED stays ON as long as the switch is pressed.
Edge Triggering: LED toggles state (ON/OFF) with each switch press.
Debouncing:

Eliminates false triggering due to switch bounce for consistent operation.
Setup:
Hardware:
Microcontroller: [Specify MCU used, e.g., PIC16F877A or STM32].
Input: Push-buttons (switches).
Output: LEDs.
Software:
Written in Embedded C.
Developed and tested using [IDE/compiler used, e.g., MPLAB XC8, STM32CubeIDE].
Usage:
Press a switch to activate its corresponding LED.
Observe debounced and accurate LED control, based on the configured trigger mode.
This project demonstrates efficient interfacing of switches and LEDs, with practical considerations for real-world embedded systems.