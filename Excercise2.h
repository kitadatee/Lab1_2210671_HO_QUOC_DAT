/*
 * Excercise2.h
 *
 *  Created on: Sep 5, 2024
 *      Author: ASUS
 */

#ifndef INC_EXCERCISE2_H_
#define INC_EXCERCISE2_H_
#include "stm32f1xx_hal.h"

static enum state {red = 5, green = 3, yellow = 2};
static enum state currentState = green;
static uint8_t second_ex2 = 1;

void Excercise2(void);

#endif /* INC_EXCERCISE2_H_ */
