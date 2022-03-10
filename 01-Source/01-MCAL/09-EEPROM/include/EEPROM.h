/*
 * EEPROM.h
 *
 *  Created on: Feb 12, 2022
 *      Author: Ahmed abdel Gawad
 */

#ifndef  _EEPROM_INCLUDE_EEPROM_H_
#define  _EEPROM_INCLUDE_EEPROM_H_
#include "Std_types.h"
#include "EEPROM_REG.h"
#include "Bit_math.h"
U8 EEPROM_Read(U16 Address);
void EEPROM_Write(U16 Address, U8 data);

#endif /* 01_SOURCE_01_MCAL_09_EEPROM_INCLUDE_EEPROM_H_ */
