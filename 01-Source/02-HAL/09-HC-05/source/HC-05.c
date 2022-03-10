/*
 * HC-05.c
 *
 *  Created on: Mar 2, 2022
 *      Author: Ahmed abdel Gawad
 */

#include "HC-05.h"
void HC_05_Init(void) {
	UART_Init(BAUD_RATE_9600);
}
void HC_05_send_char(U8 byte) {
	UART_sendChar(byte);
}
void HC_05_send_str(U8 *STRING) {
	UART_sendString(STRING);
}
U8 HC_05_receive_char(void) {
	U8 received = UART_receiveChar();
	if (received != 0) {
		return received;
	} else {
		return 0;
	}
}
