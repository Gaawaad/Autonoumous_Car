/*
 * I2C_REG.h
 *
 *  Created on: Feb 11, 2022
 *      Author: Ahmed abdel Gawad
 */

#ifndef _I2C_INCLUDE_I2C_REG_H_
#define _I2C_INCLUDE_I2C_REG_H_

#define TWBR_REG  (*(volatile U8*)(0x20))
#define TWCR_REG  (*(volatile U8*)(0x56))
#define TWSR_REG  (*(volatile U8*)(0x21))
#define TWDR_REG  (*(volatile U8*)(0x23))
#define TWAR_REG  (*(volatile U8*)(0x22))

#endif /* 01_SOURCE_01_MCAL_08_I2C_INCLUDE_I2C_REG_H_ */
