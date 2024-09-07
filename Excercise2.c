/*
 * Excercise2.c
 *
 *  Created on: Sep 5, 2024
 *      Author: ASUS
 */
#include "Excercise2.h"

void Excercise2(void) {
	for (int timeIdx = 0; timeIdx < 20; timeIdx++){
		switch(currentState){
			case green:
				if (second_ex2 > green) {
					second_ex2 = 1;
					currentState = yellow;
					HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_SET);
					break;
				}
				//If the timer is not surpass the green time then keep turn the green light on
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_SET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_RESET);
				break;
			case yellow:
				if (second_ex2 > yellow) {
					second_ex2 = 1;
					currentState = red;
					HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_SET);
					break;
				}
				//If the timer is not surpass the yellow time then keep turn the yellow light on
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_SET);
				break;
			case red:
				if (second_ex2 > red) {
					second_ex2 = 1;
					currentState = green;
					HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_RESET);
					break;
				}
				//If the timer is not surpass the red time then keep turn the red light on
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_SET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_SET);
				break;
		}
		second_ex2++;
		HAL_Delay(1000);
	}
}
