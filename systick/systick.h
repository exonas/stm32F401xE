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

typedef struct
{
	uint32_t CTRL;
	uint32_t LOAD;
} SYSTICK_Struct;

#define RCC ((RCC_Struct *) 0x40023800)
#define GPIOA ((GPIO_Struct *) 0x40020000)
#define SYSTICK ((SYSTICK_Struct *) 0xE000E010)

#define GPIOA_ENABLE ((uint32_t) 0x1)
#define	GPIO_MODE_OUT_PIN5 ((uint32_t) 0x400)
#define GPIO_ODR_PIN5 ((uint32_t) 0x20)
#define	SYSTICK_CTRL_ENABLE ((uint32_t) 0x7)
#define	SYSTICK_LOAD_ENABLE ((uint32_t) 0xFFFFF)

void main(void);
void systick_handler(void);
