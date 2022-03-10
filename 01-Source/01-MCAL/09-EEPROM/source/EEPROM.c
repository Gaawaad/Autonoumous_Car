/*
 * EEPROM.c
 *
 *  Created on: Feb 12, 2022
 *      Author: Ahmed abdel Gawad
 */

#include "EEPROM.h"

U8 EEPROM_Read(U16 Address) {

	while(CHK_BIT(EECR_REG,1)){
			//wait
		}
	EEARL_REG = Address;
	EEARH_REG = (Address >> 8);
	SET_BIT(EECR_REG, 0); //Read enable
	return EEDR_REG;
}
void EEPROM_Write(U16 Address, U8 data) {
	while(CHK_BIT(EECR_REG,1)){
		//wait
	}
	EEARL_REG = Address;
	EEARH_REG = (Address >> 8);
	EEDR_REG=data;
	SET_BIT(EECR_REG,2);
	SET_BIT(EECR_REG, 1); //Write enable
}
