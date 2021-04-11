/*	Author: mwu134
 *  Partner(s) Name: Min Chen Wu
 *	Lab Section: 22
 *	Assignment: Lab 3  Exercise 3
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
	DDRC = 0xFF; PORTC = 0x00;
    /* Insert your solution below */
	unsigned char tmpA = 0x00;
	unsigned char tmpB = 0x00;
    while (1) {
	tmpA = PINA & 0x0F;
	tmpB = PINA & 0x70;
	if(tmpB == 0x30) PORTC = (PORTC & 0x7F) | 0x80;
	if(tmpA >= 0x0D) PORTC = (PORTC & 0x80) | 0x3F;
	else if(tmpA >= 0x0A) PORTC = (PORTC & 0x80) | 0x3E;
	else if(tmpA >= 0x07) PORTC = (PORTC & 0x80) | 0x3C;
	else if(tmpA >= 0x05) PORTC = (PORTC & 0x80) | 0x38;
	else if(tmpA >= 0x03) PORTC = (PORTC & 0x80) | 0x70;
	else if(tmpA >= 0x01) PORTC = (PORTC & 0x80) | 0x60;
	else PORTC = (PORTC & 0x80) | 0x40;
    }
    return 1;
}
