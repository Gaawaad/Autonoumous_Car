/*
 * Button.h
 *
 *  Created on: Dec 25, 2021
 *      Author: Ahmed abdel Gawad
 */

#ifndef BUTTON_H_
#define BUTTON_H_
#include <dio.h>
#include "Button_types.h"
#include "Button_config.h"
void Button_Init();
Button_state Button_Read(Button_t BT);

#endif /* BUTTON_H_ */
