/*
 * Excercise3.c
 *
 *  Created on: Sep 5, 2024
 *      Author: ASUS
 */
#include "Excercise3.h"

//RED_1 -> GREEN_1 : PA0 -> PA2
//RED_2 -> GREEN_2 : PA3 -> PA5
void controllerInit (void) {
	lightController.isLight1 = 1;
	lightController.currentState = Green;
}

void fetchNextState (void) {
	switch (lightController.currentState) {
		case Green:
			lightController.currentState = Yellow;
			return;
		case Yellow:
			lightController.currentState = Green;
			lightController.isLight1 = !lightController.isLight1;
			return;
		default:
			return;
	}
}

void lightOn (void) {
	if (lightController.isLight1) {
		switch (lightController.currentState) {
			case Green:
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_SET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_SET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, GPIO_PIN_RESET);
				break;
			case Yellow:
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_SET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, GPIO_PIN_SET);
				break;
			default:
				break;
		}
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
	}
	if (!lightController.isLight1) {
		switch (lightController.currentState) {
			case Green:
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, GPIO_PIN_SET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_SET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);
				break;
			case Yellow:
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, GPIO_PIN_SET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
				break;
			default:
				break;
		}
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, GPIO_PIN_SET);
	}
}

void Excercise3 (void) {
	if (!startup){
		controllerInit();
		startup = 1;
	}

	if (second <= 0) {
	  fetchNextState();
	  second = lightController.currentState;
	}

	lightOn();
	second--;
	HAL_Delay(1000);
}
