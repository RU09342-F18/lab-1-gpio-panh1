#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	P1DIR |= 0X01;

	for (;;)
	{
	    volatile unsigned int i = 0;
		P1OUT ^= 0x01;

		do (i++);
		while (i <= 40000);
	}
	return 0;
}
