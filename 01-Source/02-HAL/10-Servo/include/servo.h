/*
 * servo.h
 *
 *  Created on: Mar 4, 2022
 *      Author: Ahmed abdel Gawad
 */

#ifndef SOURCE_02_HAL_10_SERVO_INCLUDE_SERVO_H_
#define SOURCE_02_HAL_10_SERVO_INCLUDE_SERVO_H_
#include <avr/io.h>
#include <stdio.h>
#include "Std_types.h"
void servo_Init(void);
void servo_0(void);
void servo_90(void);
void servo_180(void);
void servo_Angle(U32 angle);
#endif /* 01_SOURCE_02_HAL_10_SERVO_INCLUDE_SERVO_H_ */
