/*
 * GINT.h
 *
 *  Created on: Jan 15, 2022
 *      Author: Ahmed abdel Gawad
 */

#ifndef GINT_INCLUDE_GINT_H_
#define GINT_INCLUDE_GINT_H_

#include "GINT_Reg.h"
#include "Bit_math.h"
#include "Std_types.h"
#include "GINT_types.h"
#include "TIMER0_REG.h"

void GINT_Global_Enable(void);
void GINT_Global_Disable(void);
void GINT_EnaleExtINT(Ext_INT_t);
void GINT_DisaleExtINT(Ext_INT_t INT);
void GINT_Ext_Interrupt_Mode(Ext_INT_t ID, Ext_Mode mode);
void GINT_Enable_InternalInt(Internal_INT ID);
void GINT_Disable_InternalInt(Internal_INT ID);

#endif /* 01_SOURCE_01_MCAL_02_GINT_INCLUDE_GINT_H_ */

/**
 *
 #include <avr/interrupt.h>

 ISR(INT0_vect){
 }
 * */
