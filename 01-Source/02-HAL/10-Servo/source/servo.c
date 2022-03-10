/*
 * servo.c
 *
 *  Created on: Mar 4, 2022
 *      Author: Ahmed abdel Gawad
 */

#include "servo.h"
void servo_Init(void) {
	DDRD |= (1 << PD5); /* Make OC1A pin as output */
	TCNT1 = 0; /* Set timer1 count zero */
	ICR1 = 4999; /* Set TOP count for timer1 in ICR1 register */

	/* Set Fast PWM, TOP in ICR1, Clear OC1A on compare match, clk/64 */
	TCCR1A = (1 << WGM11) | (1 << COM1A1);
	TCCR1B = (1 << WGM12) | (1 << WGM13) | (1 << CS10) | (1 << CS11);
}
void servo_0(void) {
	OCR1AL = 130;
	OCR1AH = 130 >> 8;
}
void servo_90(void) {
	OCR1AL = (U8) 350;
	OCR1AH = 350 >> 8;
}
void servo_180(void) {
	OCR1AL = (U8) 600;
	OCR1AH = 600 >> 8;
}
void servo_Angle(U32 angle) {
	F32 ang = (F32) 2.611 * (F32) angle;
	angle = (U32) ang + 130;
	OCR1AL = (U8) angle;
	OCR1AH = (U32) angle >> 8;
}
