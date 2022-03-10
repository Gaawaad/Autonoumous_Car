/*
 * Led.c
 *
 *  Created on: Dec 25, 2021
 *      Author: Ahmed abdel Gawad
 */
#include "Led.h"
#include "LED_config.h"
void Led_Init(void){
	Dio_config(LED0_PORT,LED0_PIN,OUTPUT);
	Dio_config(LED1_PORT,LED1_PIN,OUTPUT);
	Dio_config(LED2_PORT,LED2_PIN,OUTPUT);
}
void Led_on(led_t led){
	switch (led){
		case Led0:
#if(LED0_Con == FOREWORD)
				Dio_write(LED0_PORT,LED0_PIN,Dio_HIGH);
#elif(LED0_Con == REVERSE)
				Dio_write(LED0_PORT,LED0_PIN,Dio_LOW);
#endif
			break;
		case Led1:
#if(LED1_Con == FOREWORD)
				Dio_write(LED1_PORT,LED1_PIN,Dio_HIGH);
#elif(LED1_Con == REVERSE)
				Dio_write(LED1_PORT,LED1_PIN,Dio_LOW);
#endif
			break;
		case Led2:
#if(LED2_Con == FOREWORD)
				Dio_write(LED2_PORT,LED2_PIN,Dio_HIGH);
#elif(LED2_Con == REVERSE)
				Dio_write(LED2_PORT,LED2_PIN,Dio_LOW);
#endif
			break;

		}
}

void Led_off(led_t led){
	switch (led){
	case Led0:
#if(LED0_Con == FOREWORD)
			Dio_write(LED0_PORT,LED0_PIN,Dio_LOW);
#elif(LED0_Con == REVERSE)
			Dio_write(LED0_PORT,LED0_PIN,Dio_HIGH);
#endif
		break;
	case Led1:
#if(LED1_Con == FOREWORD)
			Dio_write(LED1_PORT,LED1_PIN,Dio_LOW);
#elif(LED1_Con == REVERSE)
			Dio_write(LED1_PORT,LED1_PIN,Dio_HIGH);
#endif
		break;
	case Led2:
#if(LED2_Con == FOREWORD)
			Dio_write(LED2_PORT,LED2_PIN,Dio_LOW);
#elif(LED2_Con == REVERSE)
			Dio_write(LED2_PORT,LED2_PIN,Dio_HIGH);
#endif
		break;

	}
}


void Led_Toggle(led_t led)
{
	switch (led)
	{
	case Led0:
		Dio_ToggleChannel(LED0_PORT, LED0_PIN);
		break;

	case Led1:
		Dio_ToggleChannel(LED1_PORT, LED1_PIN);
		break;

	case Led2:
		Dio_ToggleChannel(LED2_PORT, LED2_PIN);
		break;
	}
}



void Led0_Toggle(void)
{
		Dio_ToggleChannel(LED0_PORT, LED0_PIN);

}
