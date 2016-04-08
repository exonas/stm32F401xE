/*******************
author: Saber Sayeed
email: saber@exonas.org
date: 9 april 2016
*******************/

#include <stdint.h>

#define RCC 0x40023800
#define RCC_AHB1ENR ((uint32_t *) (RCC + 0x30))
#define RCC_APB2ENR ((uint32_t *) (RCC + 0x44))
#define GPIOA 0x40020000
#define GPIOA_MODER ((uint32_t *) GPIOA)
#define GPIOA_ODR ((uint32_t *) (GPIOA + 0x14))
#define SYSCFG 0x40013800
#define SYSCFG_EXTICR4 ((uint32_t *) (SYSCFG + 0x14))
#define EXTI 0x40013C00
#define EXTI_IMR ((uint32_t *) EXTI)
#define EXTI_RTSR ((uint32_t *) (EXTI +0x8))
#define EXTI_PR ((uint32_t *) (EXTI + 0x14))
#define NVIC 0xE000E100
#define NVIC_ISER2 ((uint32_t *) (NVIC + 0x4))

#define GPIOA_ENABLE ((uint32_t) 0x1)
#define GPIOC_ENABLE ((uint32_t) 0x4)
#define SYSCFG_ENABLE ((uint32_t) 0x4000)
#define GPIOx_MODER_PIN5 ((uint32_t) 0x400)
#define GPIOx_ODR_PIN5 ((uint32_t) 0x20)
#define SYSCFG_EXTICR4_PIN13 ((uint32_t) 0x20)
#define EXTI_IMR_PIN13 ((uint32_t) 0x2000)
#define EXTI_RTSR_PIN1 ((uint32_t) 0x2000)
#define IRQ_40 ((uint32_t) 0x100)
#define EXTI_PR_PIN13 ((uint32_t) 0x0)

void main(void);
void exti_line13_handler(void);
