/*
 * TMR.h
 *
 *  Created on: Jan 23, 2022
 *      Author: Ahmed abdel Gawad
 */

#ifndef _TMR_INCLUDE_TMR_H_
#define _TMR_INCLUDE_TMR_H_
#include "Bit_math.h"
#include "Std_types.h"
#include "GINT.h"
#include "TIMER0_REG.h"
#include "TIMER0_Config.h"
#include <avr/interrupt.h>
#include "LED.h"

void TIMER0_Init();
void TIMER0_Start();
void TIMER0_Stop();
void TIMER0_Reset();
U32 TIMER0_Get_Time();
U32 TIMER0_No_of_over_flows(void);
#endif /* 01_SOURCE_01_MCAL_04_TMR_INCLUDE_TMR_H_ */
