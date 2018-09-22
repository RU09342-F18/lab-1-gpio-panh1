# Lab Exercise 1: Blinking LEDs

           Created On: Sept 14, 2018
          Last Edited: Sept 21, 2018
               Author: Helen Pan
    Dependent Library: msp430.h

### Goal

The goal of this lab part C is to control the blinking of at least one LED by pressing a BUTTON on each of the boards.

### Code Run-Down

The function of each line of code is commented in each respective main.c files.

### MSP430 G2 Vs. 5529 Boards

There was one differences in coding between G2 and 5529 such that the BUTTON is set to port P1.3 on the G2 while it is set to port P1.1 on 5529. The similarity between them is that the blinking LED is set to port P1.0 on both boards.  
