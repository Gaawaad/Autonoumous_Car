/*
 * timer2.h
 *
 *  Created on: Mar 10, 2022
 *      Author: Ahmed abdel Gawad
 */

#ifndef _SOURCE_01_MCAL_10_TIMER2_INCLUDE_TIMER2_H_
#define _SOURCE_01_MCAL_10_TIMER2_INCLUDE_TIMER2_H_

#include "Bit_math.h"
#include "Std_types.h"
#include "GINT.h"
#include "TIMER0_REG.h"
#include "TIMER0_Config.h"
#include <avr/interrupt.h>
#include "LED.h"
#include "timer2_REG.h"

void TIMER2_Init();
void TIMER2_Start();
void TIMER2_Stop();
void TIMER2_Reset();
U32 TIMER2_Get_Time();
U32 TIMER2_No_of_over_flows(void);

#endif /* 01_SOURCE_01_MCAL_10_TIMER2_INCLUDE_TIMER2_H_ */
