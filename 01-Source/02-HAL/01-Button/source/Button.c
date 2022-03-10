/*
 * Button.c
 *
 *  Created on: Dec 25, 2021
 *      Author: Ahmed abdel Gawad
 */
#include "Button.h"
void Button_Init() {
	Dio_config(BT0_PORT, BT0_PIN, INPUT);
	Dio_config(BT1_PORT, BT1_PIN, INPUT);
	Dio_config(BT2_PORT, BT2_PIN, INPUT);
}

Button_state Button_Read(Button_t BT) {
	Button_state loc_read=0;
	switch (BT) {
	case BT0:
#if(BT0_Con == PULL_DOWN)
		loc_read = Dio_read(BT0_PORT, BT0_PIN);
#elif (BT0_Con==PULL_UP)
		loc_read=!Dio_read(BT0_PORT,BT0_PIN);
#endif
		break;
	case BT1:
#if(BT1_Con == PULL_DOWN)
		loc_read = Dio_read(BT1_PORT, BT1_PIN);
#elif(BT1_Con == PULL_UP)
		loc_read=!Dio_read(BT1_PORT,BT1_PIN);
#endif
		break;
	case BT2:
#if(BT2_Con==PULL_DOWN)
		loc_read = Dio_read(BT2_PORT, BT2_PIN);
#elif(BT2_Con==PULL_UP)
		loc_read=!Dio_read(BT2_PORT,BT2_PIN);
#endif
		break;
	}
	return loc_read;

}
