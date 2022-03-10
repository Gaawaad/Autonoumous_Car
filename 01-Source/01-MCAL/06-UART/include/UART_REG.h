/*
 * UART_REG.h
 *
 *  Created on: Feb 5, 2022
 *      Author: Ahmed abdel Gawad
 */

#ifndef  _INCLUDE_UART_REG_H_
#define  _INCLUDE_UART_REG_H_

#define UDR_REG		         (*(volatile U8*)(0x2C))
#define UCSRA_REG		     (*(volatile U8*)(0x2B))
#define UCSRB_REG		     (*(volatile U8*)(0x2A))

#define UCSRC_REG		     (*(volatile U8*)(0x40))
#define UBRRH_REG		     (*(volatile U8*)(0x40))

#define UBRRL_REG		     (*(volatile U8*)(0x29))

#endif /* 01_SOURCE_01_MCAL_06_UART_INCLUDE_UART_REG_H_ */
