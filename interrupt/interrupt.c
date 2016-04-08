/*******************
author: Saber Sayeed
email: saber@exonas.org
date: 9 april 2016
*******************/

#include "interrupt.h"

void main(void)
{
	*RCC_AHB1ENR |= GPIOA_ENABLE | GPIOC_ENABLE;
	*RCC_APB2ENR |= SYSCFG_ENABLE;
	*GPIOA_MODER |= GPIOx_MODER_PIN5;
	*SYSCFG_EXTICR4 |= SYSCFG_EXTICR4_PIN13;
	*EXTI_IMR |= EXTI_IMR_PIN13;
	*EXTI_RTSR |= EXTI_RTSR_PIN1;
	*NVIC_ISER2 |= IRQ_40;
}

void exti_line13_handler(void)
{
	*EXTI_PR |= EXTI_PR_PIN13;
	*GPIOA_ODR ^= GPIOx_ODR_PIN5;
}
