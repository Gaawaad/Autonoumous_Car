/*
 * TIMER0_Config.h
 *
 *  Created on: Feb 8, 2022
 *      Author: Ahmed abdel Gawad
 */

#ifndef INCLUDE_TIMER0_CONFIG_H_
#define INCLUDE_TIMER0_CONFIG_H_

#define Normal					 0
#define PWM   					 1
#define CTC   					 2
#define Fast_PWM				 3
#define CLK						 0
#define CLK_8					 1
#define CLK_64					 2
#define CLK_256				     3
#define CLK_1024		  		 4
#define EXT_CLK_FALLING_EDGE	 5
#define EXT_CLK_RISING_EDGE		 6
/****************************
 * Timer0 mode Options :
  	  Normal
  	  PWM
  	  CTC
  	  Fast_PWM
 *****************************/
#define TIMER0_MODE 		Normal

/****************************
 * Timer0 preScaler Options :
 	 CLK  = F_cpu
 	 CLK_8
 	 CLK_64
 	 CLK_256
 	 CLK_1024
 	 EXT_CLK_FALLING_EDGE
 	 EXT_CLK_RISING_EDGE
 *****************************/
#define TIMER0_PRESCALLER   CLK



#endif /* 01_SOURCE_01_MCAL_04_TIMER0_INCLUDE_TIMER0_CONFIG_H_ */
