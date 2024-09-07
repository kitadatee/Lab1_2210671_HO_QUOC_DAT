/*
 * Excercise6.h
 *
 *  Created on: Sep 6, 2024
 *      Author: ASUS
 */

#ifndef INC_EXCERCISE6_H_
#define INC_EXCERCISE6_H_
#include "stm32f1xx_hal.h"

static int PinArr[] = {GPIO_PIN_4,
					   GPIO_PIN_5,
					   GPIO_PIN_6,
					   GPIO_PIN_7,
					   GPIO_PIN_8,
					   GPIO_PIN_9,
					   GPIO_PIN_10,
					   GPIO_PIN_11,
					   GPIO_PIN_12,
					   GPIO_PIN_13,
					   GPIO_PIN_14,
					   GPIO_PIN_15},
					   pinIdx = 0,
					   startup_flag = 0;

void turnOff(void);

void Excercise6(void);
#endif /* INC_EXCERCISE6_H_ */
