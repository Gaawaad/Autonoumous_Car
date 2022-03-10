/*
 * SSD_3bits.h
 *
 *  Created on: Jan 24, 2022
 *      Author: Ahmed abdel Gawad
 */

#ifndef _SSD_3BITS_INCLUDE_SSD_3BITS_H_
#define _SSD_3BITS_INCLUDE_SSD_3BITS_H_

#include <dio.h>
#include "Std_types.h"
#include <util/delay.h>

void SSD_3bits_Init();
void SSD_3bits_disNum(U16 num);
void SSD_3bits_disNumWithDelay(U16 num,U32 delay);

#endif /* 01_SOURCE_02_HAL_07_SSD_3BITS_INCLUDE_SSD_3BITS_H_ */
