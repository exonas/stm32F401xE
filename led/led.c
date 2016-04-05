#include "led.h"

void main(void)
{
	RCC->AHB1ENR |= GPIOA_ENABLE;
	GPIOA->MODER |= GPIO_MODE_OUT_PIN5;
	GPIOA->ODR |= GPIO_ODR_PIN5;
}
