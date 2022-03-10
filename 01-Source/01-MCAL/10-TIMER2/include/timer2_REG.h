/*
 * timer2_REG.h
 *
 *  Created on: Mar 10, 2022
 *      Author: Ahmed abdel Gawad
 */

#ifndef _SOURCE_01_MCAL_10_TIMER2_INCLUDE_TIMER2_REG_H_
#define _SOURCE_01_MCAL_10_TIMER2_INCLUDE_TIMER2_REG_H_

#define TCCR2_REG		     (*(volatile U8*)(0x45))
#define TCNT2_REG		     (*(volatile U8*)(0x44))
#define TIFR_REG		     (*(volatile U8*)(0x58))

#define TIMSK_REG		     (*(volatile U8*)(0x59))

#endif /* 01_SOURCE_01_MCAL_10_TIMER2_INCLUDE_TIMER2_REG_H_ */
