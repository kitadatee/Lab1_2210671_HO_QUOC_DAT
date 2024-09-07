/*
 * Excercise5.h
 *
 *  Created on: Sep 6, 2024
 *      Author: ASUS
 */

#ifndef INC_EXCERCISE5_H_
#define INC_EXCERCISE5_H_
#include "stm32f1xx_hal.h"
#include "Excercise3.h"

static int redLightTimer = Red;

struct SevenSegmentsPin {
	GPIO_TypeDef * a_GPIO_Port,
				 * b_GPIO_Port,
				 * c_GPIO_Port,
				 * d_GPIO_Port,
				 * e_GPIO_Port,
				 * f_GPIO_Port,
				 * g_GPIO_Port;
	int a_Pin,
		b_Pin,
		c_Pin,
		d_Pin,
		e_Pin,
		f_Pin,
		g_Pin;
} SevenSegments_1, SevenSegments_2;

void Excercise5 (void);
#endif /* INC_EXCERCISE5_H_ */
