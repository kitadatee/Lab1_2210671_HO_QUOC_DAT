/*
 * Excercise8.c
 *
 *  Created on: Sep 7, 2024
 *      Author: ASUS
 */
#include "Excercise8.h"

void setNumberOnClock(int num) {
	if (num < 0)	return;
	if (num > 11)	return;
	HAL_GPIO_WritePin(GPIOA, PinArr[num], GPIO_PIN_SET);
}

void Excercise8 (int num) {
	setNumberOnClock (num);
}
