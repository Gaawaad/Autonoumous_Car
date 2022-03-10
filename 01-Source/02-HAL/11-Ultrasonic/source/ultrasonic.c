#include "ultrasonic.h"
U8 sensor_working = 0;
U8 rising_edge = 0;
extern U32 No_of_over_flows ;
U32 distance;

void ultrasonic_init(void) {
	Dio_config(TRIGER_PORT,TRIGER,OUTPUT);
	Dio_config(ECHO_PORT,ECHO,INPUT);
	SET_BIT(ECHO_PULLUP,ECHO);
	GINT_Global_Enable();
	GINT_EnaleExtINT(INTR0);
	GINT_Ext_Interrupt_Mode(INTR0, AnyLogic);
	TIMER0_Init();
	TIMER0_Start();
	return;
}


U32 ultra_Get_distance(void) {
	if (!sensor_working) {
		Dio_write(TRIGER_PORT,TRIGER,Dio_HIGH);
		_delay_us(15);
		Dio_write(TRIGER_PORT,TRIGER,Dio_LOW);
		sensor_working = 1;
	}
	return distance;
}

ISR(INT0_vect) {
	if (sensor_working == 1) {
		if (rising_edge == 0) {
			rising_edge = 1;
			TIMER0_Reset();
		} else {
			distance = (No_of_over_flows * 256 + TCNT0) / 933;
			No_of_over_flows = 0;
			rising_edge = 0;
		}
	}
}


