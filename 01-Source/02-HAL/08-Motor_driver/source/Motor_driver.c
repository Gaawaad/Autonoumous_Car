/*
 * L293D.c
 *
 *  Created on: Feb 2, 2022
 *      Author: Ahmed abdel Gawad
 */

#include "Motor_driver.h"
void Motor_driver_Init(void) {
	Dio_config(Dio_PORTD, Dio_pin4, OUTPUT);
	Dio_config(Dio_PORTD, Dio_pin5, OUTPUT); //enable

	Dio_config(Dio_PORTC, Dio_pin3, OUTPUT);
	Dio_config(Dio_PORTC, Dio_pin4, OUTPUT);
	Dio_config(Dio_PORTC, Dio_pin5, OUTPUT);
	Dio_config(Dio_PORTC, Dio_pin6, OUTPUT); //control
	//PWM1_Init(500);
}

void Motor_1_forward(void) {
	Dio_write(Dio_PORTC, Dio_pin3, Dio_HIGH);
	Dio_write(Dio_PORTC, Dio_pin4, Dio_LOW);
	Dio_write(Dio_PORTD, Dio_pin4, Dio_HIGH);

}
void Motor_1_backward(void) {
	Dio_write(Dio_PORTC, Dio_pin3, Dio_LOW);
	Dio_write(Dio_PORTC, Dio_pin4, Dio_HIGH);
	Dio_write(Dio_PORTD, Dio_pin4, Dio_HIGH);

}

void Motor_2_forward(void) {
	Dio_write(Dio_PORTC, Dio_pin5, Dio_HIGH);
	Dio_write(Dio_PORTC, Dio_pin6, Dio_LOW);
	Dio_write(Dio_PORTD, Dio_pin5, Dio_HIGH);

}
void Motor_2_backward(void) {
	Dio_write(Dio_PORTC, Dio_pin5, Dio_LOW);
	Dio_write(Dio_PORTC, Dio_pin6, Dio_HIGH);
	Dio_write(Dio_PORTD, Dio_pin5, Dio_HIGH);
}
void Motor_1_stop(void) {
	Dio_write(Dio_PORTC, Dio_pin3, Dio_LOW);
	Dio_write(Dio_PORTC, Dio_pin4, Dio_LOW);
	Dio_write(Dio_PORTD, Dio_pin4, Dio_HIGH);

}
void Motor_2_stop(void) {
	Dio_write(Dio_PORTC, Dio_pin5, Dio_LOW);
	Dio_write(Dio_PORTC, Dio_pin6, Dio_LOW);
	Dio_write(Dio_PORTD, Dio_pin5, Dio_HIGH);

}
void Motor_Set_speed(U16 value) {

	PWM1_Set_Duty(value);
}

void Go_Forword(void) {
	Motor_1_forward();
	Motor_2_forward();
}
void Go_Backward(void) {
	Motor_1_backward();
	Motor_2_backward();
}
void Go_Left(void) {
	Motor_1_forward();
	Motor_2_backward();
}
void Go_Right(void) {
	Motor_2_forward();
	Motor_1_backward();
}
void Stop_all(void) {
	Motor_1_stop();
	Motor_2_stop();
}
