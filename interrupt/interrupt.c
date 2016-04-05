/*******************
author: Saber Sayeed
date: 5 april 2016
*******************/

#include "interrupt.h"

void main(void)
{
	RCC->AHB1ENR |= GPIOAC_ENABLE;
	RCC->APB2ENR |= SYSCFG_ENABLE;
	GPIOA->MODER |= GPIO_MODER_PIN5;
	SYSCFG->EXTICR[3] |= SYSCFG_EXTICR4_PIN13;
	EXTI->IMR |= EXTI_IMR_PIN13;
	EXTI->RTSR |= EXTI_RTSR_PIN1;
	NVIC->ISER[1] |= IRQ_40;
}

void exti_line13_handler(void)
{
	EXTI->PR |= EXTI_PR_PIN13;
	GPIOA->ODR ^= GPIO_ODR_PIN5;
}
