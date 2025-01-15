PIC16F877A Timer0 LED Blinking Project
--------------------------------------------
Overview:
This project utilizes the Timer0 peripheral of the PIC16F877A microcontroller to blink an LED at a regular interval of one second. The LED blinking is achieved by using the timer overflow interrupt, which triggers an interrupt service routine (ISR) to count the number of overflows and determine when one second has passed.





Concept:
The timer functions based on the overflow event of Timer0 (TMR0). The overflow causes the timer interrupt flag to be set to 1. The Interrupt Service Routine (ISR) handles this event by checking the flag and counting the number of overflows that occur within one second.




Timer Calculation:
Pre-scalar value (P): 1:2
Quantum value (Q): 200 nanoseconds (The timer increment for each clock cycle)
Resolution (R): 256 (The timer resolution, Adjusted to 250 to get a whole number for count)
Using the formula for calculating the number of overflows that will occur in one second:

Time for count number of overflows = count×P×Q×R

After calculating the values, it was found that 20,000 overflows occur within one second. Each overflow triggers the ISR, and the overflow count is incremented.



Code Explanation
1. Timer0 Initialization: Timer0 is configured to operate without prescaling (P = 1), and a resolution of 250 is used to set the overflow period.

2. ISR: The ISR checks for the overflow interrupt flag, increments the overflow count, and once the count reaches 20,000, the LED state is toggled.

3. Main Program: The main program initializes Timer0, enables global interrupts, and waits for the timer interrupt to trigger the LED blinking.



Pin Configuration
LED Pin: Configure a pin (e.g., PORTD, pin 3) as output to connect to the LED.



How to Use
Clone or download the repository to your local machine.
Open the project in MPLAB X IDE or your preferred development environment.
Configure the microcontroller and set up the necessary fuse settings.
Build the project and flash the program to the PIC16F877A.
The LED connected to the configured pin will blink every second.





Conclusion
This project demonstrates how to utilize the Timer0 peripheral of the PIC16F877A to create a time-based event. By calculating the overflow count required for one second, the microcontroller reliably blinks an LED without using delay loops, making it more efficient.