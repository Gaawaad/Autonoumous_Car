/*
 * timer2.c
 *
 *  Created on: Mar 10, 2022
 *      Author: Ahmed abdel Gawad
 */

#include "timer2.h"
extern U8 No_of_over_flows_timer2 ;

void TIMER2_Init() {
	CLR_BIT(TCCR2_REG, 3);
	CLR_BIT(TCCR2_REG, 6); /////Normal mode
	GINT_Global_Enable();
	GINT_Enable_InternalInt(TMER2);
}
void TIMER2_Start() {
	TCCR2_REG = (TCCR2_REG & 0xF8) | 0x07; ///preScaller 1027
}
void TIMER2_Stop() {

}
void TIMER2_Reset() {

}
U32 TIMER2_Get_Time() {
	return 0;
}
U32 TIMER2_No_of_over_flows(void) {
	return No_of_over_flows_timer2;
}

