#include "main.h"

int main(void)
{
	Bsp_init();  	//GPIO change with Bsp.c
    GPIO_WriteBit(GPIOD, GPIO_Pin_12, Bit_SET);
    GPIO_WriteBit(GPIOD, GPIO_Pin_13, Bit_SET);
    GPIO_WriteBit(GPIOD, GPIO_Pin_14, Bit_RESET);
    GPIO_WriteBit(GPIOD, GPIO_Pin_15, Bit_RESET);
}
