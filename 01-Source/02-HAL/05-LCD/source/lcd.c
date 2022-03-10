/*
 * lcd.c
 *
 *  Created on: Jan 14, 2022
 *      Author: Ahmed abdel Gawad
 */
#include "lcd.h"
/*
 * RS->PB1
 * RW->PB2
 * E ->PB3
 *
 * D4->PA4
 * D5->PA5
 * D6->PA6
 * D7->PA7
 * */

void lcd_Init(void) {
	Dio_config(Dio_PORTB, Dio_pin1, OUTPUT);
	Dio_config(Dio_PORTB, Dio_pin2, OUTPUT);
	Dio_config(Dio_PORTB, Dio_pin3, OUTPUT);

	Dio_config(Dio_PORTA, Dio_pin4, OUTPUT);
	Dio_config(Dio_PORTA, Dio_pin5, OUTPUT);
	Dio_config(Dio_PORTA, Dio_pin6, OUTPUT);
	Dio_config(Dio_PORTA, Dio_pin7, OUTPUT);

	Dio_write(Dio_PORTB, Dio_pin2, Dio_LOW);
	_delay_ms(15);
	lcd_vidSendCmd(0x03);
	_delay_ms(5);
	lcd_vidSendCmd(0x03);
	_delay_us(100);
	lcd_vidSendCmd(0x03);
	lcd_vidSendCmd(0x02);
	lcd_vidSendCmd(_LCD_4BIT_MODE);
	lcd_GotoRowColum(0, 0);
}

static void En_pluse(void) {
	Dio_write(Dio_PORTB, Dio_pin3, Dio_HIGH);
	_delay_us(1);
	Dio_write(Dio_PORTB, Dio_pin3, Dio_LOW);
	_delay_ms(2);
}

void lcd_vidSendData(U8 data) {
	U8 loc_LSBData = data << 4;
	U8 loc_MSBData = data;
	Dio_write(Dio_PORTB, Dio_pin1, Dio_HIGH);
	Dio_writeChannelGroup(Dio_PORTA, loc_MSBData, 0xF0);
	En_pluse();
	Dio_writeChannelGroup(Dio_PORTA, loc_LSBData, 0xF0);
	En_pluse();

}
void lcd_vidSendCmd(lcd_Cmd_Type cmd) {

	U8 loc_LSBCmd = cmd << 4;
	U8 loc_MSBCmd = cmd;
	Dio_write(Dio_PORTB, Dio_pin1, Dio_LOW);
	Dio_writeChannelGroup(Dio_PORTA, loc_MSBCmd, 0xF0);
	En_pluse();
	Dio_writeChannelGroup(Dio_PORTA, loc_LSBCmd, 0xF0);
	En_pluse();
}
void lcd_vidDisplayChar(U8 chr) {
	lcd_vidSendData(chr);
}

void lcd_vidDisplayNum(U32 num) {
	U8 loc_digit1 = (num % 10);
	U8 loc_digit2 = (num / 10) % 10;
	U8 loc_digit3 = (num / 100) % 10;
	U8 loc_digit4 = (num / 1000) % 10;
	U8 loc_digit5 = (num / 10000) % 10;
	U8 loc_digit6 = (num / 100000) % 10;
	U8 loc_digit7 = (num / 1000000) % 10;
	U8 loc_digit8 = (num / 10000000) % 10;
	U8 loc_digit9 = (num / 100000000) % 10;
	U8 loc_digit10 = (num / 1000000000);

	if (num < 10) {
		lcd_vidSendData(loc_digit1 + 48);
	} else if (num < 100 && num > 9) {
		lcd_vidSendData(loc_digit2 + 48);
		lcd_vidSendData(loc_digit1 + 48);
	} else if (num < 1000 && num > 99) {
		lcd_vidSendData(loc_digit3 + 48);
		lcd_vidSendData(loc_digit2 + 48);
		lcd_vidSendData(loc_digit1 + 48);
	} else if (num < 10000 && num > 999) {
		lcd_vidSendData(loc_digit4 + 48);
		lcd_vidSendData(loc_digit3 + 48);
		lcd_vidSendData(loc_digit2 + 48);
		lcd_vidSendData(loc_digit1 + 48);
	} else if (num < 100000 && num > 9999) {
		lcd_vidSendData(loc_digit5 + 48);
		lcd_vidSendData(loc_digit4 + 48);
		lcd_vidSendData(loc_digit3 + 48);
		lcd_vidSendData(loc_digit2 + 48);
		lcd_vidSendData(loc_digit1 + 48);
	} else if (num < 1000000 && num > 99999) {
		lcd_vidSendData(loc_digit6 + 48);
		lcd_vidSendData(loc_digit5 + 48);
		lcd_vidSendData(loc_digit4 + 48);
		lcd_vidSendData(loc_digit3 + 48);
		lcd_vidSendData(loc_digit2 + 48);
		lcd_vidSendData(loc_digit1 + 48);
	} else if (num < 10000000 && num > 999999) {
		lcd_vidSendData(loc_digit7 + 48);
		lcd_vidSendData(loc_digit6 + 48);
		lcd_vidSendData(loc_digit5 + 48);
		lcd_vidSendData(loc_digit4 + 48);
		lcd_vidSendData(loc_digit3 + 48);
		lcd_vidSendData(loc_digit2 + 48);
		lcd_vidSendData(loc_digit1 + 48);
	} else if (num < 100000000 && num > 9999999) {
		lcd_vidSendData(loc_digit8 + 48);
		lcd_vidSendData(loc_digit7 + 48);
		lcd_vidSendData(loc_digit6 + 48);
		lcd_vidSendData(loc_digit5 + 48);
		lcd_vidSendData(loc_digit4 + 48);
		lcd_vidSendData(loc_digit3 + 48);
		lcd_vidSendData(loc_digit2 + 48);
		lcd_vidSendData(loc_digit1 + 48);
	} else if (num < 1000000000 && num > 99999999) {
		lcd_vidSendData(loc_digit9 + 48);
		lcd_vidSendData(loc_digit8 + 48);
		lcd_vidSendData(loc_digit7 + 48);
		lcd_vidSendData(loc_digit6 + 48);
		lcd_vidSendData(loc_digit5 + 48);
		lcd_vidSendData(loc_digit4 + 48);
		lcd_vidSendData(loc_digit3 + 48);
		lcd_vidSendData(loc_digit2 + 48);
		lcd_vidSendData(loc_digit1 + 48);
	} else {
		lcd_vidSendData(loc_digit10 + 48);
		lcd_vidSendData(loc_digit9 + 48);
		lcd_vidSendData(loc_digit8 + 48);
		lcd_vidSendData(loc_digit7 + 48);
		lcd_vidSendData(loc_digit6 + 48);
		lcd_vidSendData(loc_digit5 + 48);
		lcd_vidSendData(loc_digit4 + 48);
		lcd_vidSendData(loc_digit3 + 48);
		lcd_vidSendData(loc_digit2 + 48);
		lcd_vidSendData(loc_digit1 + 48);
	}
}
void lcd_vidDisplayString(U8 *str) {
	while (*str != '\0') {
		lcd_vidSendData(*str);
		str++;
	}
}

void lcd_GotoRowColum(U8 row, U8 colum) {
	switch (row) {
	/*Row 0*/
	case 0:
		lcd_vidSendCmd(0x80 + colum);
		break;
	case 1:
		/*Row 1*/
		lcd_vidSendCmd(0xC0 + colum);
		break;
	}

}

void lcd_vidDisplauFloatNum(F32 num) {

	lcd_vidDisplayNum(num);
	lcd_vidSendData('.');
	U32 Int_value = num;
	F32 float_value = (num - Int_value);
	U32 final_int=float_value*100000;
	U8 count=0;
	for(count=0;count<5;count++){
		if(final_int%10==0){
			final_int=final_int/10;
		}else{
			break;
		}
	}
lcd_vidDisplayNum(final_int);
}

