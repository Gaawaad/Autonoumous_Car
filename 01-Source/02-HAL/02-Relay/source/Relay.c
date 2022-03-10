/*
 * Relay.c
 *
 *  Created on: Dec 25, 2021
 *      Author: Ahmed abdel Gawad
 */
#include "Relay.h"

void Relay_Init(){
	Dio_config(Dio_PORTA,Dio_pin2,OUTPUT);
}
void Relay_on(){
	Dio_write(Dio_PORTA,Dio_pin2,Dio_HIGH);
}
void Relay_off(){
	Dio_write(Dio_PORTA,Dio_pin2,Dio_LOW);
}
