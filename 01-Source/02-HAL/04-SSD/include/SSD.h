/*
 * SSD.h
 *
 *  Created on: Jan 1, 2022
 *      Author: Ahmed abdel Gawad
 */

#ifndef _SSD_H_
#define _SSD_H_
#include <dio.h>
#include "Std_types.h"
#include <util/delay.h>
#include "TIMER0.h"

void SSD_Init();
void SSD_disNum_scd(U8 num);
void SSD_disNum(U8 num);
void SSD_disNumWithDelay(U8 num,U32 delay);
#endif /* 01_SOURCE_02_HAL_04_SSD_INCLUDE_SSD_H_ */
