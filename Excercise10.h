/*
 * Excercise10.h
 *
 *  Created on: Sep 7, 2024
 *      Author: ASUS
 */

#ifndef INC_EXCERCISE10_H_
#define INC_EXCERCISE10_H_
#include "stm32f1xx_hal.h"
#include "Excercise9.h"
static int milli_sec = 0, prev_milli_sec = 11,
		   min = 0, prev_min = 11, min_changed = 0,
		   hr = 0, prev_hr = 11, hr_changed = 0,
		   clockStartUp = 0;

void displayClock (void);
void Excercise10 (void);
#endif /* INC_EXCERCISE10_H_ */
