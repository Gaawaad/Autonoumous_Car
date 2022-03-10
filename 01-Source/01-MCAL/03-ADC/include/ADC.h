/*
 * ADC.h
 *
 *  Created on: Jan 21, 2022
 *      Author: Ahmed abdel Gawad
 */

#ifndef ADC_INCLUDE_ADC_H_
#define ADC_INCLUDE_ADC_H_
#include "Std_types.h"
#include "ADC_REG.h"
#include "Bit_math.h"
#include "ADC_Config.h"

void ADC_Init( U8 Prescaler);
U16 ADC_ReadChannel(U8 ChannelNumber);
#endif /* 01_SOURCE_01_MCAL_03_ADC_INCLUDE_ADC_H_ */
