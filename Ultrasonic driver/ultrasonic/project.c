#define F_CPU 8000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
#include "lcd.h"
#include "ultrasonic.h"
#include <util/delay.h>


int main(void){
	uint16 distance;
	SREG |= (1<<7);
	LCD_init(); /* initialize LCD driver */
	Ultrasonic_init();
	LCD_displayString("Distance =    cm");
	while(1){
		distance = Ultrasonic_readDistance()+1;
		LCD_moveCursor(0,11);
		if(distance<100){
			LCD_intgerToString(distance);
			LCD_displayCharacter(' ');
		}else{
			LCD_intgerToString(distance);
		}
	}
}
