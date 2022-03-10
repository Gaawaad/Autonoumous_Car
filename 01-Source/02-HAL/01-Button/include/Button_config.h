/*
 * Button_config.h
 *
 *  Created on: Jan 13, 2022
 *      Author: Ahmed abdel Gawad
 */

#ifndef _BUTTON_CONFIG_H_
#define _BUTTON_CONFIG_H_

#define BT0_PIN     Dio_pin0
#define BT0_PORT    Dio_PORTB

#define BT1_PIN	    Dio_pin6
#define BT1_PORT	Dio_PORTD

#define BT2_PIN	    Dio_pin2
#define BT2_PORT	Dio_PORTD

#define PULL_UP   0
#define PULL_DOWN 1

/*************
 *Options :
 PULL_UP
 PULL_DOWN
 *************/

#define BT0_Con 	PULL_DOWN  /*PULL_UP or PULL_DOWN  Connection */
#define BT1_Con  	PULL_DOWN  /*PULL_UP or PULL_DOWN  Connection */
#define BT2_Con  	PULL_DOWN  /*PULL_UP or PULL_DOWN  Connection */


#endif /* 01_SOURCE_02_HAL_01_BUTTON_INCLUDE_BUTTON_CONFIG_H_ */
