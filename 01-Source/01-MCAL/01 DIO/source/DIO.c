/*
 * main.c
 *
 *  Created on: Dec 25, 2021
 *      Author: Ahmed abdel Gawad
 */


#include <dio.h>

void Dio_config(Dio_port_t port,Dio_pin_t pin,Dio_Dirction_t dirction){
switch(port){
case Dio_PORTA:
	if(dirction==OUTPUT){
		SET_BIT(DDRA_REG,pin);
	}else{
		CLR_BIT(DDRA_REG,pin);
	}
	break;
case Dio_PORTB:
	if(dirction==OUTPUT){
			SET_BIT(DDRB_REG,pin);
		}else{
			CLR_BIT(DDRB_REG,pin);
		}
	break;
case Dio_PORTC:
	if(dirction==OUTPUT){
			SET_BIT(DDRC_REG,pin);
		}else{
			CLR_BIT(DDRC_REG,pin);
		}
	break;
case Dio_PORTD:
	if(dirction==OUTPUT){
			SET_BIT(DDRD_REG,pin);
		}else{
			CLR_BIT(DDRD_REG,pin);
		}
	break;

}
}
void Dio_write(Dio_port_t port,Dio_pin_t pin,Dio_level_t level){
	switch(port){
	case Dio_PORTA:
		if(level==Dio_LOW){
					CLR_BIT(PORTA_REG,pin);
				}else{
					SET_BIT(PORTA_REG,pin);
				}
		break;
	case Dio_PORTB:
		if(level==Dio_LOW){
					CLR_BIT(PORTB_REG,pin);
				}else{
					SET_BIT(PORTB_REG,pin);
				}
		break;
	case Dio_PORTC:
		if(level==Dio_LOW){
					CLR_BIT(PORTC_REG,pin);
				}else{
					SET_BIT(PORTC_REG,pin);
				}

		break;
	case Dio_PORTD:
		if(level==Dio_LOW){
					CLR_BIT(PORTD_REG,pin);
				}else{
					SET_BIT(PORTD_REG,pin);
				}
		break;
	}
}
Dio_level_t Dio_read(Dio_port_t port,Dio_pin_t pin){
	Dio_level_t read=Dio_LOW;
	switch(port){
	case Dio_PORTA:
		read=CHK_BIT(PINA_REG,pin);
	break;
	case Dio_PORTB:
		read=CHK_BIT(PINB_REG,pin);
	break;
	case Dio_PORTC:
		read=CHK_BIT(PINC_REG,pin);
	break;
	case Dio_PORTD:
		read=CHK_BIT(PIND_REG,pin);
	break;
	}

	return read;
}
void Dio_writeChannelGroup(Dio_port_t port,U8 value,U8 mask){
	switch(port){
	case Dio_PORTA :
		PORTA_REG  = (PORTA_REG&~mask)|(value & mask);
			break;
	case Dio_PORTB:
		PORTB_REG  = (PORTB_REG&~mask)|(value & mask);
			break;
	case Dio_PORTC:
		PORTC_REG  = (PORTC_REG&~mask)|(value & mask);
			break;
	case Dio_PORTD:
		PORTD_REG  = (PORTD_REG&~mask)|(value & mask);
			break;
	}
}



void Dio_ToggleChannel(Dio_port_t port, Dio_pin_t pin)
{
	switch (port)
	{
	case Dio_PORTA:
		TOGGLE_BIT(PORTA_REG,pin);
		break;

	case Dio_PORTB:
		TOGGLE_BIT(PORTB_REG,pin);
		break;

	case Dio_PORTC:
		TOGGLE_BIT(PORTC_REG,pin);
		break;

	case Dio_PORTD:
		TOGGLE_BIT(PORTD_REG,pin);
		break;
	}
}
