/*
 * SCM.h
 *
 *  Created on: Feb 25, 2022
 *      Author: Ahmed abdel Gawad
 */

#ifndef SOURCE_03_SERVICES_SCM_INCLUDE_SCM_H_
#define SOURCE_03_SERVICES_SCM_INCLUDE_SCM_H_
#include "Std_types.h"
#include "Bit_math.h"
#include "timer2.h"
#define _MAXIMUM_TASKS   (10)
typedef struct {
	U32 TaskPeriodicity;
	void (*fun_Ptr)(void);
} SCM_t;
void SCM_Init(void);
void SCM_CreateTask(U16 Priority, U16 Periodicity, void (*funPtr)(void));
void SCM_Start(void);
static void SCM_handler(void);

#endif /* 01_SOURCE_03_SERVICES_SCM_INCLUDE_SCM_H_ */
