/*******************
author: Saber Sayeed
date: 5 april 2016
*******************/

#include "systick.h"

void main(void)
{
	RCC->AHB1ENR |= GPIOA_ENABLE;
	GPIOA->MODER |= GPIO_MODE_OUT_PIN5;
	SYSTICK->CTRL = SYSTICK_CTRL_ENABLE;
	SYSTICK->LOAD = SYSTICK_LOAD_ENABLE;
}

void systick_handler(void)
{
	GPIOA->ODR ^= GPIO_ODR_PIN5;
}
