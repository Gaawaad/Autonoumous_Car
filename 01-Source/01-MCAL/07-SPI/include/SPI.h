/*
 * SPI.h
 *
 *  Created on: Feb 5, 2022
 *      Author: Ahmed abdel Gawad
 */

#ifndef  _SPI_INCLUDE_SPI_H_
#define  _SPI_INCLUDE_SPI_H_

#include "Std_types.h"
#include "SPI_reg.h"
#include "Bit_math.h"

#define SPI_DUMMY_BYTE (0xFF)

void SPI_Master_Init(void);
void SPI_Slave_Init(void);
U8 SPI_transave(U8 byte);
void SPI_transmit_Byte(U8 byte);
U8 SPI_receive_Byte(void);

#endif /* 01_SOURCE_01_MCAL_07_SPI_INCLUDE_SPI_H_ */
