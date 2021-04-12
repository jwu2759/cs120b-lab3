/*	Author: mwu134
 *  Partner(s) Name: Min Chen Wu
 *	Lab Section: 22
 *	Assignment: Lab 3  Exercise 4
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
	DDRA = 0x00; PORTA = 0xFF;
	DDRC = 0xF0; PORTC = 0x00;
	DDRB = 0x0F; PORTB = 0x00;
    /* Insert your solution below */
	//unsigned char tmpA = 0x00;
	//unsigned char tmpB = 0x00;
    while (1) {
	PORTB = (PINA & 0xF0) >> 4;
	PORTC = (PINA & 0x0F) << 4;
    }
    return 1;
}
