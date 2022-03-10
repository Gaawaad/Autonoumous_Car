/*
 * GINT.c
 *
 *  Created on: Jan 15, 2022
 *      Author: Ahmed abdel Gawad
 */

#include "GINT.h"

void GINT_Global_Enable(void) {
	SET_BIT(GINT_SREG_REG, 7);
}
void GINT_Global_Disable(void) {
	CLR_BIT(GINT_SREG_REG, 7);
}

void GINT_DisaleExtINT(Ext_INT_t INT) {
	switch (INT) {
	case INTR0:
		CLR_BIT(GINT_GICR_REG, 6);
		break;
	case INTR1:
		CLR_BIT(GINT_GICR_REG, 7);
		break;
	case INTR2:
		CLR_BIT(GINT_GICR_REG, 5);
		break;
	}
}

void GINT_EnaleExtINT(Ext_INT_t INT) {
	switch (INT) {
	case INTR0:
		SET_BIT(GINT_GICR_REG, 6);
		break;
	case INTR1:
		SET_BIT(GINT_GICR_REG, 7);
		break;
	case INTR2:
		SET_BIT(GINT_GICR_REG, 5);
		break;
	}

}

void GINT_Ext_Interrupt_Mode(Ext_INT_t ID, Ext_Mode mode) {
	switch (ID) {
	case INTR0:
		switch (mode) {
		case Low_level:
			CLR_BIT(GINT_MCUCR_REG, 0);
			CLR_BIT(GINT_MCUCR_REG, 1);
			break;
		case AnyLogic:
			SET_BIT(GINT_MCUCR_REG, 0);
			CLR_BIT(GINT_MCUCR_REG, 1);
			break;
		case Falling_Edge:
			CLR_BIT(GINT_MCUCR_REG, 0);
			SET_BIT(GINT_MCUCR_REG, 1);
			break;
		case Rising_Edge:
			SET_BIT(GINT_MCUCR_REG, 0);
			SET_BIT(GINT_MCUCR_REG, 1);
			break;
		}
		break;
	case INTR1:
		switch (mode) {
		case Low_level:
			CLR_BIT(GINT_MCUCR_REG, 2);
			CLR_BIT(GINT_MCUCR_REG, 3);
			break;
		case AnyLogic:
			SET_BIT(GINT_MCUCR_REG, 2);
			CLR_BIT(GINT_MCUCR_REG, 3);
			break;
		case Falling_Edge:
			CLR_BIT(GINT_MCUCR_REG, 2);
			SET_BIT(GINT_MCUCR_REG, 3);
			break;
		case Rising_Edge:
			SET_BIT(GINT_MCUCR_REG, 2);
			SET_BIT(GINT_MCUCR_REG, 3);
			break;
		}
		break;
	case INTR2:
		switch (mode) {
		case Falling_Edge:
			CLR_BIT(GINT_MCUCSR_REG, 6);
			break;
		case Rising_Edge:
			SET_BIT(GINT_MCUCSR_REG, 6);
			break;
		default:
			CLR_BIT(GINT_MCUCSR_REG, 6);
			break;
		}
		break;
	}
}

void GINT_Enable_InternalInt(Internal_INT ID) {
	switch (ID) {
	case TMIR0:
		SET_BIT(TIMSK_REG, 0);
		break;
	case TMER2:
		SET_BIT(TIMSK_REG, 6);
		break;
	}
}

void GINT_Disable_InternalInt(Internal_INT ID) {
	switch (ID) {
	case TMIR0:
		CLR_BIT(TIMSK_REG, 0);
		break;
	}
}
