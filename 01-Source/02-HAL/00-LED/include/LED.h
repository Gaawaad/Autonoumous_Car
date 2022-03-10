/*
 * LED.h
 *
 *  Created on: Dec 25, 2021
 *      Author: Ahmed abdel Gawad
 */

#ifndef LED_H_
#define LED_H_
#include "DIO.h"
#include "Bit_math.h"
#include "Dio_REG.h"
#include "Led_types.h"
#include "LED_config.h"
void Led_Init(void);
void Led_on(led_t led);
void Led_off(led_t led);
void Led_Toggle(led_t led);
#endif /* LED_H_ */
