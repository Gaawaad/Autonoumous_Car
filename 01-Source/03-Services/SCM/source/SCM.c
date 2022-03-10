/*
 * SCM.c
 *
 *  Created on: Mar 10, 2022
 *      Author: Ahmed abdel Gawad
 */
#include "SCM.h"
SCM_t Task_Array[_MAXIMUM_TASKS];
U32 No_of_over_flows_timer2 = 0;
void SCM_Init(void) {
	TIMER2_Init();
	TCNT2_REG = 240;
}
void SCM_CreateTask(U16 Priority, U16 Periodicity, void (*funPtr)(void)) {
	Task_Array[Priority].TaskPeriodicity = Periodicity;
	Task_Array[Priority].fun_Ptr = funPtr;
}
static void SCM_handler(void) {
	for (U32 count = 0; count < _MAXIMUM_TASKS; count++) {
		if (No_of_over_flows_timer2 % Task_Array[count].TaskPeriodicity == 0) {
			Task_Array[count].fun_Ptr();
		}
	}
}
void SCM_Start(void) {
	TIMER2_Start();
}

ISR(TIMER2_OVF_vect) {
	No_of_over_flows_timer2++;
	TCNT2_REG = 240;
	SCM_handler();
}
