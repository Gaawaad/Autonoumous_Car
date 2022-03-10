/*
 * GINT_types.h
 *
 *  Created on: Jan 16, 2022
 *      Author: Ahmed abdel Gawad
 */

#ifndef _INCLUDE_GINT_TYPES_H_
#define _INCLUDE_GINT_TYPES_H_

typedef enum{
	INTR0=0,
	INTR1,
	INTR2
}Ext_INT_t;
typedef enum {
	Low_level=0,
	AnyLogic,
	Falling_Edge,
	Rising_Edge
}Ext_Mode;

typedef enum{
	TMIR0=0,
	TMER1,
	TMER2
}Internal_INT;

#endif /* 01_SOURCE_01_MCAL_02_GINT_INCLUDE_GINT_TYPES_H_ */
