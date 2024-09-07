/*
 * Excercise5.c
 *
 *  Created on: Sep 6, 2024
 *      Author: ASUS
 */
#include "Excercise5.h"

void display7SEG_Advanced (struct SevenSegmentsPin *pin, uint8_t number){
	switch (number) {
		case 0:
			HAL_GPIO_WritePin(pin->a_GPIO_Port, pin->a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->b_GPIO_Port, pin->b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->c_GPIO_Port, pin->c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->d_GPIO_Port, pin->d_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->e_GPIO_Port, pin->e_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->f_GPIO_Port, pin->f_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->g_GPIO_Port, pin->g_Pin, GPIO_PIN_SET);
			return;
		case 1:
			HAL_GPIO_WritePin(pin->a_GPIO_Port, pin->a_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(pin->b_GPIO_Port, pin->b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->c_GPIO_Port, pin->c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->d_GPIO_Port, pin->d_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(pin->e_GPIO_Port, pin->e_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(pin->f_GPIO_Port, pin->f_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(pin->g_GPIO_Port, pin->g_Pin, GPIO_PIN_SET);
			return;
		case 2:
			HAL_GPIO_WritePin(pin->a_GPIO_Port, pin->a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->b_GPIO_Port, pin->b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->c_GPIO_Port, pin->c_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(pin->d_GPIO_Port, pin->d_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->e_GPIO_Port, pin->e_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->f_GPIO_Port, pin->f_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(pin->g_GPIO_Port, pin->g_Pin, GPIO_PIN_RESET);
			return;
		case 3:
			HAL_GPIO_WritePin(pin->a_GPIO_Port, pin->a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->b_GPIO_Port, pin->b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->c_GPIO_Port, pin->c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->d_GPIO_Port, pin->d_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->e_GPIO_Port, pin->e_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(pin->f_GPIO_Port, pin->f_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(pin->g_GPIO_Port, pin->g_Pin, GPIO_PIN_RESET);
			return;
		case 4:
			HAL_GPIO_WritePin(pin->a_GPIO_Port, pin->a_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(pin->b_GPIO_Port, pin->b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->c_GPIO_Port, pin->c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->d_GPIO_Port, pin->d_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(pin->e_GPIO_Port, pin->e_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(pin->f_GPIO_Port, pin->f_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->g_GPIO_Port, pin->g_Pin, GPIO_PIN_RESET);
			return;
		case 5:
			HAL_GPIO_WritePin(pin->a_GPIO_Port, pin->a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->b_GPIO_Port, pin->b_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(pin->c_GPIO_Port, pin->c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->d_GPIO_Port, pin->d_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->e_GPIO_Port, pin->e_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(pin->f_GPIO_Port, pin->f_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->g_GPIO_Port, pin->g_Pin, GPIO_PIN_RESET);
			return;
		case 6:
			HAL_GPIO_WritePin(pin->a_GPIO_Port, pin->a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->b_GPIO_Port, pin->b_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(pin->c_GPIO_Port, pin->c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->d_GPIO_Port, pin->d_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->e_GPIO_Port, pin->e_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->f_GPIO_Port, pin->f_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->g_GPIO_Port, pin->g_Pin, GPIO_PIN_RESET);
			return;
		case 7:
			HAL_GPIO_WritePin(pin->a_GPIO_Port, pin->a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->b_GPIO_Port, pin->b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->c_GPIO_Port, pin->c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->d_GPIO_Port, pin->d_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(pin->e_GPIO_Port, pin->e_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(pin->f_GPIO_Port, pin->f_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(pin->g_GPIO_Port, pin->g_Pin, GPIO_PIN_SET);
			return;
		case 8:
			HAL_GPIO_WritePin(pin->a_GPIO_Port, pin->a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->b_GPIO_Port, pin->b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->c_GPIO_Port, pin->c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->d_GPIO_Port, pin->d_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->e_GPIO_Port, pin->e_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->f_GPIO_Port, pin->f_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->g_GPIO_Port, pin->g_Pin, GPIO_PIN_RESET);
			return;
		case 9:
			HAL_GPIO_WritePin(pin->a_GPIO_Port, pin->a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->b_GPIO_Port, pin->b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->c_GPIO_Port, pin->c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->d_GPIO_Port, pin->d_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->e_GPIO_Port, pin->e_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(pin->f_GPIO_Port, pin->f_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(pin->g_GPIO_Port, pin->g_Pin, GPIO_PIN_RESET);
			return;
		default:
			return;
	}
}

void Init(struct SevenSegmentsPin *SevenSegment,
		  GPIO_TypeDef * Po_a, int Pi_a,
		  GPIO_TypeDef * Po_b, int Pi_b,
		  GPIO_TypeDef * Po_c, int Pi_c,
		  GPIO_TypeDef * Po_d, int Pi_d,
		  GPIO_TypeDef * Po_e, int Pi_e,
		  GPIO_TypeDef * Po_f, int Pi_f,
		  GPIO_TypeDef * Po_g, int Pi_g) {
	SevenSegment->a_GPIO_Port = Po_a;		SevenSegment->a_Pin = Pi_a;
	SevenSegment->b_GPIO_Port = Po_b;		SevenSegment->b_Pin = Pi_b;
	SevenSegment->c_GPIO_Port = Po_c;		SevenSegment->c_Pin = Pi_c;
	SevenSegment->d_GPIO_Port = Po_d;		SevenSegment->d_Pin = Pi_d;
	SevenSegment->e_GPIO_Port = Po_e;		SevenSegment->e_Pin = Pi_e;
	SevenSegment->f_GPIO_Port = Po_f;		SevenSegment->f_Pin = Pi_f;
	SevenSegment->g_GPIO_Port = Po_g;		SevenSegment->g_Pin = Pi_g;
}


void Excercise5 (void) {
	if (!startup){
		controllerInit();
		Init(&SevenSegments_1,
		   GPIOA, GPIO_PIN_6,
		   GPIOA, GPIO_PIN_7,
		   GPIOB, GPIO_PIN_0,
		   GPIOB, GPIO_PIN_1,
		   GPIOB, GPIO_PIN_2,
		   GPIOB, GPIO_PIN_10,
		   GPIOB, GPIO_PIN_11);
		Init(&SevenSegments_2,
		   GPIOB, GPIO_PIN_12,
		   GPIOB, GPIO_PIN_13,
		   GPIOB, GPIO_PIN_14,
		   GPIOB, GPIO_PIN_15,
		   GPIOA, GPIO_PIN_8,
		   GPIOA, GPIO_PIN_9,
		   GPIOA, GPIO_PIN_10);

		startup = 1;
	}

	if (second <= 0) {
	  fetchNextState();
	  second = lightController.currentState;
	  switch (lightController.currentState) {
		  case Green:
			  redLightTimer = Red;
			  break;
		  default:
			  break;
	  }
	}

	lightOn();
	if (lightController.isLight1){
	  display7SEG_Advanced (&SevenSegments_1, second);
	  display7SEG_Advanced (&SevenSegments_2, redLightTimer);
	}
	if (!lightController.isLight1){
	  display7SEG_Advanced (&SevenSegments_2, second);
	  display7SEG_Advanced (&SevenSegments_1, redLightTimer);
	}
	second--;
	redLightTimer--;
	HAL_Delay(1000);
}
