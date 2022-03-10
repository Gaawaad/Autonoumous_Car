/*
 * SPI.c
 *
 *  Created on: Feb 5, 2022
 *      Author: Ahmed abdel Gawad
 */

#ifndef _SPI_SOURCE_SPI_C_
#define _SPI_SOURCE_SPI_C_

#include "SPI.h"

void SPI_Master_Init(void) {
	SET_BIT(SPCR_REG, 6);		//SPI Enable
	SET_BIT(SPCR_REG, 5);		//Data Order = LSB is transmitted first
	SET_BIT(SPCR_REG, 4);		//Master SPI mode

	SPCR_REG = (SPCR_REG & 0xFC) | 0x00;
	CLR_BIT(SPSR_REG, 0); 		///clk = Foso/4
}
void SPI_Slave_Init(void) {
	SET_BIT(SPCR_REG, 6);		//SPI Enable
	SET_BIT(SPCR_REG, 5);		//Data Order = LSB is transmitted first
	CLR_BIT(SPCR_REG, 4);		//Slave SPI mode

}
U8 SPI_transave(U8 byte) {
	SPDR_REG = byte;
	while (!CHK_BIT(SPSR_REG, 7)) {
		//waiting
	}
	return SPDR_REG;
}
void SPI_transmit_Byte(U8 byte) {
	U8 locBuffer;
	SPDR_REG = byte;
	while (!CHK_BIT(SPSR_REG, 7)) {
		//waiting
	}
	locBuffer = SPDR_REG;
}
U8 SPI_receive_Byte(void) {
	SPDR_REG = SPI_DUMMY_BYTE;
	while (!CHK_BIT(SPSR_REG, 7)) {
		//waiting
	}
	return SPDR_REG;
}

#endif /* 01_SOURCE_01_MCAL_07_SPI_SOURCE_SPI_C_ */
