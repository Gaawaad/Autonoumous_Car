/*
 * I2C.h
 *
 *  Created on: Feb 11, 2022
 *      Author: Ahmed abdel Gawad
 */

#ifndef _I2C_INCLUDE_I2C_H_
#define _I2C_INCLUDE_I2C_H_
#include "Std_types.h"
#include "I2C_REG.h"
#include "Bit_math.h"
void I2C_MasterInit(void);
void I2C_SlaveInit(void);
void I2C_Start(void);
void I2C_Repeated_Start(void);
void I2C_Stop(void);
void I2C_SlaveAddressWithWrite(U8 Addres);
void I2C_SlaveAdderssWithRead(U8 Addres);


#endif /* 01_SOURCE_01_MCAL_08_I2C_INCLUDE_I2C_H_ */
