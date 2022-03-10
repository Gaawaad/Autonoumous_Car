/*
 * lcd.h
 *
 *  Created on: Jan 14, 2022
 *      Author: Ahmed abdel Gawad
 */

#ifndef _LCD_INCLUDE_LCD_H_
#define _LCD_INCLUDE_LCD_H_
#include "Std_types.h"
#include "lcd_types.h"
#include "DIO.h"
#include <util/delay.h>
void lcd_Init(void);
void lcd_vidSendData(U8 data);
void lcd_vidSendCmd(lcd_Cmd_Type cmd);
void lcd_vidDisplayChar(U8 chr);
void lcd_vidDisplayNum(U32 num);
void lcd_vidDisplauFloatNum(F32 num);
void lcd_vidDisplayString(U8* str);
void lcd_GotoRowColum(U8 Row ,U8 Colum );

#endif /* 01_SOURCE_02_HAL_05_LCD_INCLUDE_LCD_H_ */
