/*
 * L293D.h
 *
 *  Created on: Feb 2, 2022
 *      Author: Ahmed abdel Gawad
 */

#ifndef L293D_INCLUDE_L293D_H_
#define L293D_INCLUDE_L293D_H_

#include "DIO.h"
#include "PWM1.h"
void Motor_driver_Init(void);

void Motor_1_forward(void);
void Motor_1_backward(void);
void Motor_Set_speed(U16 value);
void Motor_1_stop(void);
void Motor_2_stop(void);
void Motor_2_forward(void);
void Motor_2_backward(void);

void Go_Forword(void);
void Go_Backward(void);
void Go_Left(void);
void Go_Right(void);
void Stop_all(void);
#endif /* 01_SOURCE_02_HAL_08_L293D_INCLUDE_L293D_H_ */
