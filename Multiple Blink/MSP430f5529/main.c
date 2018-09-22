#include <msp430.h> 

// Multiple Blink for 5529, wasn't able to test on CCS

int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;			// stop watchdog timer
	P1DIR |= BIT0;              		// setting bit 0 of port 1 output to 1
    P4DIR |= BIT7;              		// setting bit 7 of port 4 output to 1
	P1OUT = 0xff;						// setting all the port 1 registers output to 1, which enables the toggling between the LED after every delay
    P4OUT = 0xff;

	while(1)
	{
	    volatile unsigned int i = 0;	// setting delay variable to i

		P1OUT ^= BIT0;					// toggling the LED on BIT0 with XOR

		do (i++);						 
		while (i <= 30000);				// delaying the toggling by 30,000

       	P4OUT ^= BIT7;					// toggling the LED on BIT7 with XOR
	}
	return 0;
}
