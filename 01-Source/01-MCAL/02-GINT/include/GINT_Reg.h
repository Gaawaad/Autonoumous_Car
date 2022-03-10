/*
 * GINT_Reg.h
 *
 *  Created on: Jan 15, 2022
 *      Author: Ahmed abdel Gawad
 */

#ifndef GINT_INCLUDE_GINT_REG_H_
#define GINT_INCLUDE_GINT_REG_H_

#define INTF0_bit				(6)
#define GINT_SREG_REG		 (*(volatile U8*)(0x5F))
#define GINT_GICR_REG 	     (*(volatile U8*)(0x5B))
#define GINT_MCUCR_REG 		 (*(volatile U8*)(0x55))
#define GINT_MCUCSR_REG 	 (*(volatile U8*)(0x54))
#define GIFR_REG 	    	 (*(volatile U8*)(0x5A))

#endif /* 01_SOURCE_01_MCAL_02_GINT_INCLUDE_GINT_REG_H_ */
