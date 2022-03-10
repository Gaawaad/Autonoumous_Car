/*
 * Dio_REG.h
 *
 *  Created on: Dec 25, 2021
 *      Author: Ahmed abdel Gawad
 */

#ifndef DIO_REG_H_
#define DIO_REG_H_

#define DDRA_REG   (*(volatile U8*)(0x3A))
#define PORTA_REG  (*(volatile U8*)(0x3B))
#define PINA_REG   (*(volatile U8*)(0x39))

#define DDRB_REG   (*(volatile U8*)(0x37))
#define PORTB_REG  (*(volatile U8*)(0x38))
#define PINB_REG   (*(volatile U8*)(0x36))

#define DDRC_REG   (*(volatile U8*)(0x34))
#define PORTC_REG  (*(volatile U8*)(0x35))
#define PINC_REG   (*(volatile U8*)(0x33))

#define DDRD_REG   (*(volatile U8*)(0x31))
#define PORTD_REG  (*(volatile U8*)(0x32))
#define PIND_REG   (*(volatile U8*)(0x30))

#endif /* DIO_REG_H_ */
