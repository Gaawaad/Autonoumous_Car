/*
 * EEPROM_REG.h
 *
 *  Created on: Feb 12, 2022
 *      Author: Ahmed abdel Gawad
 */

#ifndef EPROM_INCLUDE_EEPROM_REG_H_
#define EPROM_INCLUDE_EEPROM_REG_H_

#define EEARH_REG       (*(volatile U8*)(0x3F))
#define EEARL_REG	    (*(volatile U8*)(0x3E))

#define EEDR_REG		(*(volatile U8*)(0x3D))
#define EECR_REG    	(*(volatile U8*)(0x3C))

#endif /* 01_SOURCE_01_MCAL_09_EEPROM_INCLUDE_EEPROM_REG_H_ */
