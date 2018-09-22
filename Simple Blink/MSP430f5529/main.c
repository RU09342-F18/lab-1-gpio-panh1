#include <msp430.h> 

// Simple Blink, wasn't able to test on CCS

int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;			// stop watchdog timer
	P1DIR |= BIT0;              		// setting bit 0 of port 1 output to 1

	for (;;)
	{
	    volatile unsigned int i = 0;	// setting delay variable to i

		P1OUT ^= BIT0;					// toggling the LED with XOR

		do (i++);
		while (i <= 30000);				// delaying the toggling by 30,000 
	}
	return 0;
}
