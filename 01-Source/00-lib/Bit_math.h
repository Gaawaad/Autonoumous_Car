/*
 * Bit_math.h
 *
 *  Created on: Dec 24, 2021
 *      Author: Ahmed abdel Gawad
 */

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(REG,BIT_NUM)				REG|=(1<<BIT_NUM)
#define CLR_BIT(REG,BIT_NUM)				REG&=~(1<<BIT_NUM)
#define CHK_BIT(REG,BIT_NUM)				((REG>>BIT_NUM)&0x01)
#define TOGGLE_BIT(REG,BIT_NUM)				REG^=(1<<BIT_NUM)

#endif /* BIT_MATH_H_ */
