/*
 * Excercise9.c
 *
 *  Created on: Sep 7, 2024
 *      Author: ASUS
 */
#include "Excercise9.h"

void clearNumberOnClock(int num) {
	if (num < 0)	return;
	if (num > 11)	return;
	HAL_GPIO_WritePin(GPIOA, PinArr[num], GPIO_PIN_RESET);
}
void Excercise9 (int num) {
	clearNumberOnClock (num);
}
