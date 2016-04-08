/*******************
author: Saber Sayeed
email: saber@exonas.org
date: 9 april 2016
*******************/

#include "systick.h"

void main(void)
{
	*RCC_AHB1ENR |= GPIOA_ENABLE;
	*GPIOA_MODER |= GPIOx_MODE_OUT_PIN5;
	*SYSTICK_CTRL = SYSTICK_CTRL_ENABLE;
	*SYSTICK_LOAD = SYSTICK_LOAD_ENABLE;
}

void systick_handler(void)
{
	*GPIOA_ODR ^= GPIOx_ODR_PIN5;
}
