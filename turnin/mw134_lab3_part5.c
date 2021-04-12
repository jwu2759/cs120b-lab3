/*	Author: mwu134
 *  Partner(s) Name: Min Chen Wu
 *	Lab Section: 22
 *	Assignment: Lab 3  Exercise 5
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRD = 0x00; PORTD = 0xFF;
	DDRB = 0xFE; PORTB = 0x01;
    /* Insert your solution below */
	unsigned char tmpA = 0x00;
	//unsigned char tmpB = 0x00;
    while (1) {
	tmpA = (PIND << 1) + (PINB & 0x01);
	if(tmpA >= 0x46) PORTB = (PORTB & 0xF8) | 0x02;
	else if(tmpA > 0x05 && tmpA < 0x46) PORTB = (PORTB & 0xF8) | 0x04;
	else PORTB = (PORTB & 0xF8);

    }
    return 1;
}
