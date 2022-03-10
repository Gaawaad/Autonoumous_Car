/*
 * ultrasonic.h
 *
 *  Created on: Mar 5, 2022
 *      Author: Ahmed abdel Gawad
 */
#ifndef _ULTRA_H_
#define _ULTRA_H_

#include<avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include "TIMER0.h"
#include "Std_types.h"
#include "GINT.h"
#include "DIO.h"
#include "ultra_config.h"

void ultrasonic_init(void);
U32 ultra_Get_distance(void);
#endif
