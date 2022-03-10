/*
 * TMR.c
 *
 *  Created on: Jan 23, 2022
 *      Author: Ahmed abdel Gawad
 */
#include "TIMER0.h"
U32 No_of_over_flows = 0;
F64 tick_time;
extern U8 sensor_working ;
extern U8 rising_edge ;
void (*funcptr)(void);

ISR(TIMER0_OVF_vect) {
	No_of_over_flows++;
	if (No_of_over_flows > 730) {
		TIMER0_Reset();
		sensor_working = 0;
		rising_edge = 0;
		No_of_over_flows = 0;
	}
}

void TIMER0_Init() {
#if(TIMER0_MODE == Normal)
	CLR_BIT(TCCR0_REG, 3);
	CLR_BIT(TCCR0_REG, 6);
#elif (TIMER0_MODE==PWM)
	CLR_BIT(TCCR0_REG, 3);
	SET_BIT(TCCR0_REG, 6);
#elif (TIMER0_MODE==CTC)
	SET_BIT(TCCR0_REG, 3);
	CLR_BIT(TCCR0_REG, 6);
#elif (TIMER0_MODE==Fast_PWM)
	SET_BIT(TCCR0_REG, 3);
	SET_BIT(TCCR0_REG, 6);
#else
	CLR_BIT(TCCR0_REG, 3);
	CLR_BIT(TCCR0_REG, 6);
#endif
	GINT_Global_Enable();
	GINT_Enable_InternalInt(TMIR0);
}

void TIMER0_Start() {
#if (TIMER0_PRESCALLER==CLK)
	TCCR0_REG = (TCCR0_REG & 0xF8) | 0x01;
	tick_time = 0.0000000625;
#elif(TIMER0_PRESCALLER==CLK_8)
	TCCR0_REG = (TCCR0_REG & 0xF8) | 0x02;
	tick_time = 0.0000005;
#elif (TIMER0_PRESCALLER==CLK_64)
	TCCR0_REG = (TCCR0_REG & 0xF8) | 0x03;
	tick_time = 0.000004;
#elif(TIMER0_PRESCALLER==CLK_256)
	TCCR0_REG = (TCCR0_REG & 0xF8) | 0x04;
	tick_time = 0.000016;
#elif(TIMER0_PRESCALLER==CLK_1024)
	TCCR0_REG = (TCCR0_REG & 0xF8) | 0x05;
	tick_time = 0.000064;
#elif(TIMER0_PRESCALLER==EXT_CLK_FALLING_EDGE)
	TCCR0_REG = (TCCR0_REG & 0xF8) | 0x06;
#elif(TIMER0_PRESCALLER==EXT_CLK_RISING_EDGE)
	TCCR0_REG = (TCCR0_REG & 0xF8) | 0x07;
#else
	TCCR0_REG = (TCCR0_REG & 0xF8) | 0x05;
#endif

}
void TIMER0_Stop() {
	No_of_over_flows = 0;
	TCCR0_REG = (TCCR0_REG & 0xF8) | 0x00;
}
void TIMER0_Reset() {
	No_of_over_flows = 0;
	TCNT0_REG = 0;
}
U32 TIMER0_Get_Time() {
	F64 time = (No_of_over_flows * 256 * tick_time + TCNT0_REG * tick_time)
			* 1000;
	return (U32) (time);
}
U32 TIMER0_No_of_over_flows(void) {
	return No_of_over_flows;
}

