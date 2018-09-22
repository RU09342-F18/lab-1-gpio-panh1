#include <msp430.h> 

// Multiple Blink

int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;			// stop watchdog timer
	P1DIR |= BIT0;              		// setting bit 0 of port 1 output to 1
    P1DIR |= BIT6;              		// setting bit 6 of port 1 output to 1
	P1OUT = 0xff;						// setting all the port 1 registers output to 1, which enables the toggling between the LED after every delay

	while(1)
	{
	    volatile unsigned int i = 0;	// setting delay variable to i

		P1OUT ^= BIT0;					// toggling the LED on BIT0 with XOR

		do (i++);						 
		while (i <= 30000);				// delaying the toggling by 30,000

       	P1OUT ^= BIT6;					// toggling the LED on BIT6 with XOR
	}
	return 0;
}
