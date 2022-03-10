/*
 * LED_config.h
 *
 *  Created on: Jan 1, 2022
 *      Author: Ahmed abdel Gawad
 */

#ifndef _LED_CONFIG_H_
#define _LED_CONFIG_H_

#define LED0_PIN     Dio_pin2
#define LED0_PORT    Dio_PORTC
#define LED1_PIN	 Dio_pin7
#define LED1_PORT	 Dio_PORTC
#define LED2_PIN	 Dio_pin3
#define LED2_PORT	 Dio_PORTD

#define FOREWORD  0
#define REVERSE   1

/**********************
 * Options :
 	FOREWORD
 	REVERSE
 ***********************/

#define LED0_Con 	 FOREWORD  /*FOREWORD or REVERSE  Connection */
#define LED1_Con  	 FOREWORD  /*FOREWORD or REVERSE  Connection */
#define LED2_Con  	 FOREWORD  /*FOREWORD or REVERSE  Connection */


#endif /* 01_SOURCE_02_HAL_00_LED_INCLUDE_LED_CONFIG_H_ */
