/*
 * DIO.h
 *
 *  Created on: Dec 25, 2021
 *      Author: Ahmed abdel Gawad
 */

#ifndef DIO_H_
#define DIO_H_

#include "Bit_math.h"
#include "Std_types.h"
#include "Dio_REG.h"
#include "Dio_types.h"

void Dio_config(Dio_port_t port,Dio_pin_t pin,Dio_Dirction_t);
void Dio_write(Dio_port_t ,Dio_pin_t ,Dio_level_t );
Dio_level_t Dio_read(Dio_port_t ,Dio_pin_t );
void Dio_writeChannelGroup(Dio_port_t port,U8 value,U8 mask);
void Dio_ToggleChannel(Dio_port_t port, Dio_pin_t pin);

#endif /* DIO_H_ */
