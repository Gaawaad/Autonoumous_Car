/*
 * PWM1_REG.h
 *
 *  Created on: Feb 2, 2022
 *      Author: Ahmed abdel Gawad
 */

#ifndef _INCLUDE_PWM1_REG_H_
#define _INCLUDE_PWM1_REG_H_

#define TCCR1A_REG		     (*(volatile U8*)(0x4F))
#define TCCR1B_REG		     (*(volatile U8*)(0x4E))
#define OCR1AH_REG		     (*(volatile U8*)(0x4B))
#define OCR1AL_REG		     (*(volatile U8*)(0x4A))
#define ICR1L_REG		     (*(volatile U8*)(0x46))
#define ICR1H_REG		     (*(volatile U8*)(0x47))

#endif /* 01_SOURCE_01_MCAL_PWM1_INCLUDE_PWM1_REG_H_ */
