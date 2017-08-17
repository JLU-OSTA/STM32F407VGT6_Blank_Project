#include "Bsp.h"  
void Bsp_init(void)  
{
	Bsp_gpioInit();  
}
static Bsp_gpioInit(void)  
{
	GPIO_InitTypeDef gpioInitStructure;  
    RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD, ENABLE);  
    gpioInitStructure.GPIO_Mode = GPIO_Mode_OUT;  
    gpioInitStructure.GPIO_OType = GPIO_OType_PP;  
    gpioInitStructure.GPIO_Speed = GPIO_Speed_2MHz;  
    gpioInitStructure.GPIO_Pin = GPIO_Pin_12 | GPIO_Pin_13 | GPIO_Pin_14 | GPIO_Pin_15;  
    GPIO_Init(GPIOD, &gpioInitStructure);  
}
