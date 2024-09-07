/*
 * Excercise6.c
 *
 *  Created on: Sep 6, 2024
 *      Author: ASUS
 */
#include "Excercise6.h"

void turnOff(void){
	for (int idx = 0; idx < 12; idx++) {
		HAL_GPIO_WritePin(GPIOA, PinArr[idx], GPIO_PIN_RESET);
	}
}

void Excercise6(void) {
	if (!startup_flag) {
		turnOff();
		startup_flag = 1;
	}
	if (pinIdx > 11)		   pinIdx = 0;
	HAL_GPIO_WritePin(GPIOA, PinArr[pinIdx], GPIO_PIN_SET);
	HAL_Delay(1000);
	HAL_GPIO_WritePin(GPIOA, PinArr[pinIdx++], GPIO_PIN_RESET);
}
