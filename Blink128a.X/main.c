/*
 * File:   main.c
 * Author: DHRZ
 *
 * Created on 5 December, 2022, 10:45 AM
 */

#define F_CPU 16000000UL // 16 MHz clock speed

#include <xc.h>
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{	
	DDRB |= (1<<DDB5);
	
    /* Replace with your application code */
    while (1) 
    {
		PORTB |= (1<<PORTB5);
		_delay_ms(100);
		PORTB &= ~ (1<<PORTB5);
		_delay_ms(1000);
    }
}