#include <stdint.h>

typedef struct
{
	uint32_t PAD[12];
	uint32_t AHB1ENR; 
	uint32_t PAD2[4];
	uint32_t APB2ENR;
} RCC_Struct;

typedef struct
{
	uint32_t MODER;
	uint32_t PAD[4];
	uint32_t ODR;
} GPIO_Struct;

typedef struct
{
	uint32_t PAD[2];
	uint32_t EXTICR[4];
} SYSCFG_Struct;

typedef struct
{
	uint32_t IMR;
	uint32_t PAD;
	uint32_t RTSR;
	uint32_t PAD2[2];
	uint32_t PR;
} EXTI_Struct;

typedef struct
{
	uint32_t ISER[3];
} NVIC_Struct;

#define RCC ((RCC_Struct *) 0x40023800)
#define GPIOA ((GPIO_Struct *) 0x40020000)
#define SYSCFG ((SYSCFG_Struct *)0x40013800)
#define EXTI ((EXTI_Struct *) 0x40013C00)
#define NVIC ((NVIC_Struct *) 0xE000E100)

#define GPIOAC_ENABLE ((uint32_t) 0x5)
#define SYSCFG_ENABLE ((uint32_t) 0x4000)
#define GPIO_MODER_PIN5 ((uint32_t) 0x400)
#define SYSCFG_EXTICR4_PIN13 ((uint32_t) 0x20)
#define EXTI_IMR_PIN13 ((uint32_t) 0x2000)
#define EXTI_RTSR_PIN1 ((uint32_t) 0x2000)
#define IRQ_40 ((uint32_t) 0x100)
#define EXTI_PR_PIN13 ((uint32_t) 0x0)
#define GPIO_ODR_PIN5 ((uint32_t) 0x20)

void main(void);
void exti_line13_handler(void);
