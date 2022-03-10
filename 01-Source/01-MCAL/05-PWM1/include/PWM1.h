/*
 * PWM0.h
 *
 *  Created on: Feb 2, 2022
 *      Author: Ahmed abdel Gawad
 */

#ifndef _INCLUDE_PWM0_H_
#define _INCLUDE_PWM0_H_

#include <dio.h>
#include "Bit_math.h"
#include "PWM1_REG.h"

void PWM1_Init(U32 Frequency);
void PWM1_Start(void);
void PWM1_Stop(void);
void PWM1_Set_Duty(U32 present);

#endif /* 01_SOURCE_01_MCAL_PWM0_INCLUDE_PWM0_H_ */
