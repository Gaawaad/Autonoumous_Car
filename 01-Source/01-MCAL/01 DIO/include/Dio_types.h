/*
 * Dio_types.h
 *
 *  Created on: Dec 25, 2021
 *      Author: Ahmed abdel Gawad
 */

#ifndef DIO_TYPES_H_
#define DIO_TYPES_H_

typedef enum{
	Dio_PORTA=0,
	Dio_PORTB,
	Dio_PORTC,
	Dio_PORTD
}Dio_port_t;
typedef enum{
	INPUT=0,
	OUTPUT
}Dio_Dirction_t;
typedef enum{
	Dio_pin0=0,
	Dio_pin1,
	Dio_pin2,
	Dio_pin3,
	Dio_pin4,
	Dio_pin5,
	Dio_pin6,
	Dio_pin7
}Dio_pin_t;
typedef enum{
	Dio_LOW=0,
	Dio_HIGH
}Dio_level_t;

#endif /* DIO_TYPES_H_ */
