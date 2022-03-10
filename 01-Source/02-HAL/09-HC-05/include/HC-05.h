/*
 * HC-05.h
 *
 *  Created on: Mar 2, 2022
 *      Author: Ahmed abdel Gawad
 */

#ifndef SOURCE_02_HAL_09_HC_05_INCLUDE_HC_05_H_
#define SOURCE_02_HAL_09_HC_05_INCLUDE_HC_05_H_
#include "Std_types.h"
#include "UART.h"
void HC_05_Init(void);
void HC_05_send_char(U8 byte);
void HC_05_send_str(U8 *STRING);
U8 HC_05_receive_char(void);
#endif /* 01_SOURCE_02_HAL_09_HC_05_INCLUDE_HC_05_H_ */
