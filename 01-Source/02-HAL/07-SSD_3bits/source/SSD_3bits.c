/*
 * SSD_3bits.c
 *
 *  Created on: Jan 24, 2022
 *      Author: Ahmed abdel Gawad
 */
#include "SSD_3bits.h"
void SSD_3bits_Init() {
	///Data lines
	Dio_config(Dio_PORTA, Dio_pin4, OUTPUT);
	Dio_config(Dio_PORTA, Dio_pin5, OUTPUT);
	Dio_config(Dio_PORTA, Dio_pin6, OUTPUT);
	Dio_config(Dio_PORTA, Dio_pin7, OUTPUT);
	//control lines
	Dio_config(Dio_PORTB, Dio_pin1, OUTPUT);
	Dio_config(Dio_PORTB, Dio_pin2, OUTPUT);
	Dio_config(Dio_PORTB, Dio_pin3, OUTPUT);
}
void SSD_3bits_disNum(U16 num) {
	U8 loc_digit1 = (num % 10) << 4;
	U8 loc_digit2 = (num / 10)%10 << 4;
	U8 loc_digit3 = (num / 100) << 4;
	//enable ssd1
	Dio_write(Dio_PORTB, Dio_pin1, Dio_HIGH);
	//disable ssd2
	Dio_write(Dio_PORTB, Dio_pin2, Dio_LOW);
	//disable ssd3
	Dio_write(Dio_PORTB, Dio_pin3, Dio_LOW);
	//send digit 1
	Dio_writeChannelGroup(Dio_PORTA, loc_digit1, 0xF0);
	_delay_ms(5);

	//disable ssd1
	Dio_write(Dio_PORTB, Dio_pin1, Dio_LOW);
	//enable ssd2
	Dio_write(Dio_PORTB, Dio_pin2, Dio_HIGH);
	//disable ssd3
	Dio_write(Dio_PORTB, Dio_pin3, Dio_LOW);
	//send digit 2
	Dio_writeChannelGroup(Dio_PORTA, loc_digit2, 0xF0);
	_delay_ms(5);

	//disable ssd1
	Dio_write(Dio_PORTB, Dio_pin1, Dio_LOW);
	//disable ssd2
	Dio_write(Dio_PORTB, Dio_pin2, Dio_LOW);
	//enable ssd3
	Dio_write(Dio_PORTB, Dio_pin3, Dio_HIGH);
	//send digit 2
	Dio_writeChannelGroup(Dio_PORTA, loc_digit3, 0xF0);
	_delay_ms(5);
}
void SSD_3bits_disNumWithDelay(U16 num, U32 delay) {
	U32 count;
	for(count=1;count<=delay;count+=16){
		SSD_3bits_disNum(num);
		_delay_ms(1);
	}
}
