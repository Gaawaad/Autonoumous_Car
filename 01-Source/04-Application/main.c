#include "LED.h"
#include "lcd.h"
#include "avr/delay.h"
#include "servo.h"
#include "ultrasonic.h"
#include "Motor_driver.h"
U16 distance = 0;
U16 left_dis = 0;
U16 Right_dis = 0;

int main() {
	lcd_Init();
	lcd_vidSendCmd(_LCD_CURSOR_OFF);
	servo_Init();
	Motor_driver_Init();
	ultrasonic_init();
	servo_90();
	while (1) {
		distance = ultra_Get_distance();
		if (distance > 20) {
			Go_Forword();
			lcd_vidSendCmd(_LCD_CLEAR);
			lcd_vidDisplayString((U8*) "Direc. = Forword");
		} else if (distance <= 20) {
			Stop_all();
			servo_0();
			_delay_ms(1000);
			Right_dis = ultra_Get_distance();
			servo_180();
			_delay_ms(1000);
			left_dis = ultra_Get_distance();
			servo_90();
			if (Right_dis > left_dis) {
				Go_Right();
				lcd_vidSendCmd(_LCD_CLEAR);
				lcd_vidDisplayString((U8*) "Direc. = Right");
				_delay_ms(1000);
			} else if (left_dis > Right_dis) {
				Go_Left();
				lcd_vidSendCmd(_LCD_CLEAR);
				lcd_vidDisplayString((U8*) "Direc. = Left");
				_delay_ms(1000);
			} else {
				Go_Forword();
				lcd_vidSendCmd(_LCD_CLEAR);
				lcd_vidDisplayString((U8*) "Direc. = Forword");
			}
		}

	}
	return 0;
}

