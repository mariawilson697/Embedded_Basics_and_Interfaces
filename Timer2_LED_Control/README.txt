# Timer2 LED Control

This project demonstrates the use of Timer2 on an 8-bit microcontroller to control an LED. The timer module generates periodic interrupts based on the value loaded into the PR2 register. The interrupt service routine (ISR) toggles the LED state when the timer overflows, showcasing the practical application of Timer2 in embedded systems.

## Features
- Configures Timer2 to operate as a timer with precise overflow intervals.
- Utilizes the PR2 register to set the overflow period.
- Implements an Interrupt Service Routine (ISR) to handle Timer2 overflow events.
- Toggles an LED on each overflow interrupt.

## Prerequisites
- Microcontroller with Timer2 support (e.g., PIC microcontroller).
- MPLAB X IDE or any equivalent development environment.
- XC8 compiler or equivalent.
- Basic understanding of timers and interrupts in embedded systems.

## Hardware Setup
- Connect an LED to a GPIO pin configured as output (e.g., RD0).
- Ensure proper connections for VCC, GND, and a current-limiting resistor for the LED.

## Software Configuration
- Configure Timer2 with the desired prescaler and postscaler values.
- Set the PR2 register value to define the timer overflow period.
- Enable Timer2 interrupts and configure the Global Interrupt Enable (GIE) bit.

## Code Overview
- `init_config()`: Initializes Timer2, LED GPIO, and interrupts.
- `__interrupt() isr()`: Toggles the LED on each Timer2 overflow event.
- `main()`: Contains the infinite loop to keep the microcontroller running.

## Usage
1. Load the project into your microcontroller development environment.
2. Configure the Timer2 prescaler and PR2 register based on the desired timing.
3. Compile and flash the code to your microcontroller.
4. Observe the LED toggling at regular intervals defined by Timer2.


