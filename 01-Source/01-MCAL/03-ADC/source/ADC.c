/*
 * ADC.c
 *
 *  Created on: Jan 21, 2022
 *      Author: Ahmed abdel Gawad
 */
#include "ADC.h"

void ADC_Init( U8 Prescaler) {
	SET_BIT(ADCSRA_REG, 7);	//Enable ADC module
	CLR_BIT(ADCMUX_REG, 5); //left adjust

	switch (Prescaler) {
		case 2:
			ADCSRA_REG = (ADCSRA_REG & 0xF8) | 0;
			break;
		case 4:
			ADCSRA_REG = (ADCSRA_REG & 0xF8) | 2;
			break;
		case 8:
			ADCSRA_REG = (ADCSRA_REG & 0xF8) | 3;
			break;
		case 16:
			ADCSRA_REG = (ADCSRA_REG & 0xF8) | 4;
			break;
		case 32:
			ADCSRA_REG = (ADCSRA_REG & 0xF8) | 5;
			break;
		case 64:
			ADCSRA_REG = (ADCSRA_REG & 0xF8) | 6;
			break;
		case 128:
			ADCSRA_REG = (ADCSRA_REG & 0xF8) | 7;
			break;
		default:
			ADCSRA_REG = (ADCSRA_REG & 0xF8) | 7;
			break;
		}

	switch (CONECTION_OF_REFERANCE) {
		case AREF:
			ADCMUX_REG = (ADCMUX_REG & 0x3F) | (0 << 6);
			break;
		case AVCC:
			ADCMUX_REG = (ADCMUX_REG & 0x3F) | (1 << 6);
			break;
		case Reserved:
			ADCMUX_REG = (ADCMUX_REG & 0x3F) | (2 << 6);
			break;
		case Interal_2_6_V:
			ADCMUX_REG = (ADCMUX_REG & 0x3F) | (3 << 6);
			break;
		default:
			ADCMUX_REG = (ADCMUX_REG & 0x3F) | (1 << 6);
			break;
		}
}

U16 ADC_ReadChannel(U8 ChannelNumber) {//init pre and ref
	U16 ADC_RES;


	ADCMUX_REG = (ADCMUX_REG & 0xF8) | ChannelNumber;
	SET_BIT(ADCSRA_REG, 6); //enable start conversion
	while (!(CHK_BIT(ADCSRA_REG, 4))) {
		//wait to the end of conversion
	}
	SET_BIT(ADCSRA_REG, 4); //clear flag
	ADC_RES = ADCL_REG | (ADCH_REG << 8);
	return ADC_RES;
}
