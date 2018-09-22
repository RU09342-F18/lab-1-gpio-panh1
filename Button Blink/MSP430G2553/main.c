#include <msp430.h> 

// Button Blink 

int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	P1DIR |= BIT0;              // setting bit 0 of port 1 output to 1
    P1REN = BIT3;				// enable port 1 resister
	P1OUT = BIT3; 				// setting the resister to 1 for pull-up, otherwise 0 for pull-down

	while(1)
	{
	    if (BIT3 & P1IN)		// while button is not pressed
		{
			P1OUT &= ~BIT0;		// setting the LED off when button not pressed
		} else
		{
			P1OUT |= BIT0; 		// setting the LED on when button is pressed
		}
	}
	return 0;
}