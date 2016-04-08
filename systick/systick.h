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
#define SYSTICK 0xE000E010
#define SYSTICK_CTRL ((uint32_t *) SYSTICK)
#define SYSTICK_LOAD ((uint32_t *) (SYSTICK + 0x4))

#define GPIOA_ENABLE ((uint32_t) 0x1)
#define GPIOx_MODE_OUT_PIN5 ((uint32_t) 0x400)
#define GPIOx_ODR_PIN5 ((uint32_t) 0x20)
#define SYSTICK_CTRL_ENABLE ((uint32_t) 0x7)
#define SYSTICK_LOAD_ENABLE ((uint32_t) 0xFFFFF)

void main(void);
void systick_handler(void);
