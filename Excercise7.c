/*
 * Excercise7.c
 *
 *  Created on: Sep 7, 2024
 *      Author: ASUS
 */

#include "Excercise7.h"

void clearAllClock (void) {
	for (int pin = 0; pin < 12; pin++) {
		HAL_GPIO_WritePin(GPIOA, PinArr[pin], GPIO_PIN_RESET);
	}
}

void Excercise7 (void) {
	clearAllClock ();
}
