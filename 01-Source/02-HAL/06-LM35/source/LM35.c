/*
 * LM35.c
 *
 *  Created on: Jan 24, 2022
 *      Author: Ahmed abdel Gawad
 */

#include "LM35.h"
void LM35_Init(void) {
	ADC_Init(128);
}

F32 LM35_Read(void) {
	F32 mili_volt;
	U32 temp;
	mili_volt = (ADC_ReadChannel(LM35_channel) * 5.0);
	temp = mili_volt / 10;
	return temp;
}

void LM35_disp_temp(void){
	lcd_Init();
	lcd_vidDisplayNum(LM35_Read());
	lcd_vidDisplayChar('C');
}
