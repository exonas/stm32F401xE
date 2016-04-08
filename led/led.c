/*******************
author: Saber Sayeed
email: saber@exonas.org
date: 9 april 2016
*******************/

#include "led.h"

void main(void)
{
	*RCC_AHB1ENR |= GPIOA_ENABLE;
	*GPIOA_MODER |= GPIOx_MODE_OUT_PIN5;
	*GPIOA_ODR |= GPIOx_ODR_PIN5;
}
