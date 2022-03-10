/*
 * I2C.c
 *
 *  Created on: Feb 11, 2022
 *      Author: Ahmed abdel Gawad
 */
#include "I2C.h"

void I2C_MasterInit(void) {
	SET_BIT(TWCR_REG, 6); // ACK Enable
	TWBR_REG = 32; //speed = 100Khz
	TWSR_REG = (TWSR_REG % 0xFC) | 0x00; //preScaller 1
	SET_BIT(TWCR_REG, 2); //enable I2C

}
void I2C_SlaveInit(void) {
	SET_BIT(TWCR_REG, 6); // ACK Enable
	TWAR_REG = 0b00000010; //slave address
	SET_BIT(TWCR_REG, 2); //enable I2C

}
void I2C_Start(void) {
	SET_BIT(TWCR_REG, 5); //start condition
	SET_BIT(TWCR_REG, 7); //clear flag
	while (!CHK_BIT(TWCR_REG, 7)) {
		//wait
	}

}
void I2C_Repeated_Start(void) {
	SET_BIT(TWCR_REG, 5); //start condition
	SET_BIT(TWCR_REG, 7); //clear flag
	while (!CHK_BIT(TWCR_REG, 7)) {
		//wait
	}
}
void I2C_Stop(void) {
	SET_BIT(TWCR_REG, 4); //stop condition
	SET_BIT(TWCR_REG, 7); //clear flag
	while (!CHK_BIT(TWCR_REG, 7)) {
		//wait
	}

}

void I2C_SlaveAddressWithWrite(U8 Addres) {
	TWDR_REG = (Addres << 1);
	CLR_BIT(TWCR_REG, 5); //Clear start condition
	SET_BIT(TWCR_REG, 7); //clear flag
	while (!CHK_BIT(TWCR_REG, 7)) {
		//wait
	}
}
void I2C_SlaveAdderssWithRead(U8 Addres) {
	TWDR_REG = (Addres << 1);
	SET_BIT(TWDR_REG, 0);
	CLR_BIT(TWCR_REG, 5); //Clear start condition
	SET_BIT(TWCR_REG, 7); //clear flag
	while (!CHK_BIT(TWCR_REG, 7)) {
		//wait
	}
}

void I2C_Mastar_write_bite_to_slave(U8 byte) {
	TWDR_REG = byte;
	SET_BIT(TWCR_REG, 7); //clear flag
	while (!CHK_BIT(TWCR_REG, 7)) {
		//wait
	}
}

U8 I2C_Mastar_Read_bite_from_slave(U8 byte) {

	SET_BIT(TWCR_REG, 7); //clear flag
	while (!CHK_BIT(TWCR_REG, 7)) {
		//wait
	}
	return TWDR_REG;
}
