/*
 * LM35.h
 *
 *  Created on: Jan 24, 2022
 *      Author: Ahmed abdel Gawad
 */

#ifndef  _LM35_INCLUDE_LM35_H_
#define  _LM35_INCLUDE_LM35_H_
#include "ADC.h"
#include "Std_types.h"
#include "LM35_config.h"
#include "lcd.h"
void LM35_Init(void);

F32 LM35_Read(void);
void LM35_disp_temp(void);
#endif /* 01_SOURCE_02_HAL_06_LM35_INCLUDE_LM35_H_ */
