/*
 * UART.h
 *
 *  Created on: Feb 5, 2022
 *      Author: Ahmed abdel Gawad
 */

#ifndef _UART_INCLUDE_UART_H_
#define _UART_INCLUDE_UART_H_

#include "UART_REG.h"
#include "Bit_math.h"
#include "Std_types.h"
#include <avr/interrupt.h>
#include "GINT.h"
#define BAUD_RATE_2400    416
#define BAUD_RATE_9600    103
#define BAUD_RATE_115200  8

void UART_Init(U32 Boud_rate);
void UART_sendChar(U8 chr);
void UART_sendString(U8 *str);
U8 UART_receiveChar(void);

#endif /* 01_SOURCE_01_MCAL_06_UART_INCLUDE_UART_H_ */
