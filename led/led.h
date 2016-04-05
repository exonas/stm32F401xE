/*******************
author: Saber Sayeed
date: 5 april 2016
*******************/

#include <stdint.h>

typedef struct
{
	uint32_t MODER;
	uint32_t PAD[4];
	uint32_t ODR;
} GPIO_Struct;

typedef struct
{
	uint32_t PAD[12];
	uint32_t AHB1ENR;
	
} RCC_Struct;

#define RCC ((RCC_Struct *) 0x40023800)
#define GPIOA ((GPIO_Struct *) 0x40020000)

#define GPIOA_ENABLE ((uint32_t) 0x1)
#define	GPIO_MODE_OUT_PIN5 ((uint32_t) 0x400)
#define GPIO_ODR_PIN5 ((uint32_t) 0x20)

void main(void);
