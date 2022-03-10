/*
 * Buzzer.c
 *
 *  Created on: Dec 25, 2021
 *      Author: Ahmed abdel Gawad
 */
#include "Buzzer.h"

void Buzzer_Init(){
	Dio_config(Dio_PORTA,Dio_pin3,OUTPUT);
}

void Buzzer_on(){
	Dio_write(Dio_PORTA,Dio_pin3,Dio_HIGH);
}

void Buzzer_off(){
	Dio_write(Dio_PORTA,Dio_pin3,Dio_LOW);
}
