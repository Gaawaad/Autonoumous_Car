/*
 * UART.c
 *
 *  Created on: Feb 5, 2022
 *      Author: Ahmed abdel Gawad
 */

#include "UART.h"
U8 RxValue=0;

void UART_Init(U32 Boud_rate) {
	GINT_Global_Enable();
	SET_BIT(UCSRB_REG,7);					//RX Complete Interrupt Enable
	CLR_BIT(UBRRH_REG, 7);					//Select UBRRH_REG
	UBRRL_REG = (U8) (Boud_rate);
	UBRRH_REG = (U8) (Boud_rate) >> 8;

	//SET_BIT(UCSRC_REG, 7); 					//Select UCSRC_reg
	CLR_BIT(UCSRC_REG, 6);					//Asynchronous Operation

	//UCSRC_REG = (UCSRC_REG & 0xCF) | 0x20;  //Enabled, Even Parity
	//CLR_BIT(UCSRC_REG, 3); 					//Stop Bit = 1 bit

	CLR_BIT(UCSRB_REG, 2);
	//UCSRC_REG = (UCSRC_REG & 0xF9) | 0x06; //Character Size = 8 bit
	UCSRC_REG |= (1 << 7) | (3 << 1) | (2 << 4);
	;
	SET_BIT(UCSRB_REG, 3); 					//Transmitter Enable
	SET_BIT(UCSRB_REG, 4); 					//Receiver Enable

	SET_BIT(UCSRB_REG, 7); 					//Complete Interrupt Enable

}

void UART_sendChar(U8 chr) {

	while (!CHK_BIT(UCSRA_REG, 5)) { //Transmit Complete
		;
	}
	UDR_REG = chr;
}
/*
U8 UART_receiveChar(void) {

	if (CHK_BIT(UCSRA_REG, 7)) { //Receive Complete
		return UDR_REG;
	} else {
		return 0;
	}
}
*/
U8 UART_receiveChar(void) {
	return RxValue;
}
void UART_sendString(U8 *str) {
	while (*str != '\0') {
		UART_sendChar(*str);
		str++;
	}
}

