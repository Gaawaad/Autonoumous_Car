/*
 * PWM1.c
 *
 *  Created on: Feb 2, 2022
 *      Author: Ahmed abdel Gawad
 */
#include "PWM1.h"
static U32 Top = 0;
void PWM1_Init(U32 Frequency) {
	Top = ((16000000) / (Frequency * 64)) - 1;
	ICR1L_REG = Top;
	ICR1H_REG = Top >> 8;

	TCCR1A_REG = (TCCR1A_REG & 0xFC) | 0x02;
	TCCR1B_REG = (TCCR1B_REG & 0xE7) | 0x18;   //Fast PWM
	TCCR1A_REG = (TCCR1A_REG & 0x3F) | 0x80; //non-inverting

	Dio_config(Dio_PORTD, Dio_pin5, OUTPUT);
}

void PWM1_Set_Duty(U32 present) {
    present = (present * Top) / 100;
	OCR1AL_REG = present;
	OCR1AH_REG = present >> 8;
}
void PWM1_Start(void) {
	TCCR1B_REG = (TCCR1B_REG & 0xF8) | 0x03; //preScaller 64
}

void PWM1_Stop(void) {
	TCCR1B_REG = (TCCR1B_REG & 0xF8) | 0x00;
}

