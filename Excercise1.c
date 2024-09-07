/*
 * Excercise1.c
 *
 *  Created on: Sep 5, 2024
 *      Author: ASUS
 */
#include "Excercise1.h"

void Excercise1(void) {
	if (!light_mode){
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_SET);
	}
	if (light_mode){
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_RESET);
	}
	light_mode = !light_mode;
	HAL_Delay(2000);
}
