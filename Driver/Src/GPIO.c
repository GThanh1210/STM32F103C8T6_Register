#include "GPIO.h"


// mac dinh max speed 50MHZ
void GPIO_Config(volatile GPIO_Typedef* GPIOx, uint16_t PIN, uint32_t mode)
{
	uint32_t position = 0;
	uint32_t config = 0;
	for(position =0 ; position < 16 ; position++)
	{
		if (PIN & (1 << position))
		{

			if(position < 8)
			{
				// clear 4 bit config
				GPIOx->CRL.REG &= ~ (uint32_t)(0xF << position * 4);
			}
			else
			{
				GPIOx->CRH.REG &= ~ (uint32_t)(0xF << (position - 8) * 4);
			}

			// config mode chan GPIO
			switch (mode) {
			case GPIO_MODE_OUTPUT_PushPull:
				config = (0x03 << 0) | (0x00 << 2);
				break;
			case GPIO_MODE_OUTPUT_OpenDrain:
				config = (0x03 << 0) | (0x01 << 2);
				break;
			case GPIO_MODE_ALERNATE_FUNC_PP:
				config = (0x03 << 0) | (0x02 << 2);
				break;
			case GPIO_MODE_ALERNATE_FUNC_OPD:
				config = (0x03 << 0) | (0x03 << 2);
				break;
			case GPIO_MODE_INPUT_ANALOG:
				config = (0x00 << 0) | (0x00 << 2);
				break;
			case GPIO_MODE_INPUT_FLOATING:
				config = (0x00 << 0) | (0x01 << 2);
				break;
			case GPIO_MODE_INPUT_PULLUP:
				config = (0x00 << 0) | (0x02 << 2);
				GPIOx->ODR.REG |= (1 << position);
				break;
			case GPIO_MODE_INPUT_PULLDOWN:
				config = (0x00 << 0) | (0x02 << 2);
				GPIOx->ODR.REG &= ~(1 << position);
				break;
			}
			if (position < 8)
			{
				GPIOx-> CRL.REG |= (config << (position * 4));
			}
			else
			{
				GPIOx-> CRH.REG |= (config << ((position-8) * 4));
			}
		}
	}
}
void GPIO_Write_Pin(volatile GPIO_Typedef* GPIOx, uint16_t PIN, uint8_t state)
{
	if (state == 1)
	{
		GPIOx->BSRR.REG = PIN;
	}else
	{
		GPIOx->BRR.REG = PIN;
	}

}
uint8_t GPIO_Read_Pin(volatile GPIO_Typedef* GPIOx, uint16_t PIN)
{
	return ((GPIOx->IDR.REG & PIN)?1:0);
}
