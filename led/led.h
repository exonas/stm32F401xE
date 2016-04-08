/*******************
author: Saber Sayeed
email: saber@exonas.org
date: 9 april 2016
*******************/

#include <stdint.h>

#define RCC 0x40023800
#define RCC_AHB1ENR ((uint32_t *) (RCC + 0x30))
#define GPIOA 0x40020000
#define GPIOA_MODER ((uint32_t *) GPIOA)
#define GPIOA_ODR ((uint32_t *) (GPIOA + 0x14))

#define GPIOA_ENABLE ((uint32_t) 0x1)
#define GPIOx_MODE_OUT_PIN5 ((uint32_t) 0x400)
#define GPIOx_ODR_PIN5 ((uint32_t) 0x20)

void main(void);
