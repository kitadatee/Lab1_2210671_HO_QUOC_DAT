/*
 * Excercise10.c
 *
 *  Created on: Sep 7, 2024
 *      Author: ASUS
 */
#include "Excercise10.h"

void displayClock (void) {
	if (milli_sec % 5000 == 0) {
		HAL_GPIO_WritePin(GPIOA, PinArr[prev_milli_sec], GPIO_PIN_RESET);
		prev_milli_sec = milli_sec / 5000;
	}
	if (min_changed && (min % 5) == 0) {
		HAL_GPIO_WritePin(GPIOA, PinArr[prev_min], GPIO_PIN_RESET);
		prev_min = min/5;
		min_changed = 0;
	}
	if (hr_changed) {
		HAL_GPIO_WritePin(GPIOA, PinArr[prev_hr], GPIO_PIN_RESET);
		prev_hr = hr;
		hr_changed = 0;
	}
	HAL_GPIO_WritePin(GPIOA, PinArr[(int)(milli_sec / 5000)], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, PinArr[(int)(min / 5)], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, PinArr[hr], GPIO_PIN_SET);
}

void Excercise10 (void) {
	if (!clockStartUp) {
		clearAllClock();
		clockStartUp = 1;
	}
	if (milli_sec >= 60000) {
		min++;
		milli_sec = 0;
		min_changed = 1;
	}
	if (min >= 60) {
		hr++;
		min = 0;
		hr_changed = 1;
	}
	if (hr >= 12)	hr = 0;

	displayClock ();

	milli_sec += 100;
	HAL_Delay(100);
}
