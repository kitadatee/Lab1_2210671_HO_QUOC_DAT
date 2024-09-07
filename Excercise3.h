/*
 * Excercise3.h
 *
 *  Created on: Sep 5, 2024
 *      Author: ASUS
 */

#ifndef INC_EXCERCISE3_H_
#define INC_EXCERCISE3_H_
#include "stm32f1xx_hal.h"

static enum lightState {Red = 5, Yellow = 2, Green = 3};
static int second = Green, startup = 0;

struct lightStatus {
	uint8_t 			isLight1;
	enum lightState 	currentState;
} lightController;

void controllerInit (void);
void fetchNextState (void);
void lightOn (void);

void Excercise3 (void);
#endif /* INC_EXCERCISE3_H_ */
