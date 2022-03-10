/*
 * TMR_REG.h
 *
 *  Created on: Jan 24, 2022
 *      Author: Ahmed abdel Gawad
 */

#ifndef _TMR_INCLUDE_TMR_REG_H_
#define _TMR_INCLUDE_TMR_REG_H_

#define TCCR0_REG		     (*(volatile U8*)(0x53))
#define TCNT0_REG		     (*(volatile U8*)(0x52))
#define TIFR_REG		     (*(volatile U8*)(0x58))

#define TIMSK_REG		     (*(volatile U8*)(0x59))



#endif /* 01_SOURCE_01_MCAL_04_TMR_INCLUDE_TMR_REG_H_ */
