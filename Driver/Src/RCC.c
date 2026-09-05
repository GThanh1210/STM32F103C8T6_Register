#include "RCC.h"


void RCC_Enable_PortA(void)
{
	RCC->APB2ENR.BITS.IOPAEN = 1;
}
void RCC_Enable_PortB(void)
{
	RCC->APB2ENR.BITS.IOPBEN = 1;
}
void RCC_Enable_PortC(void)
{
	RCC->APB2ENR.BITS.IOPCEN = 1;
}
void RCC_Config_72MHZ(void)
{

	// Enable HSE
	RCC->CR.BITS.HSEON = 1;
	while (!RCC->CR.BITS.HSERDY);

	RCC->CFGR.BITS.PLLSRC = 1;
	RCC->CFGR.BITS.PLLMUL = 7;

	RCC->CR.BITS.PLLON = 1;
	while(!RCC->CR.BITS.PLLRDY);

	// system clock Switch
	RCC->CFGR.BITS.SW = 2;
	while (!(RCC->CFGR.BITS.SWS == 2));
	// AHB prescaler
	RCC->CFGR.BITS.HPRE = 0;
	// APB1 prescaler
	RCC->CFGR.BITS.PPRE1 = 4;
	// APB1 prescaler
	RCC->CFGR.BITS.PPRE2 = 0;
	// doi toc do doc cua FLASH
	FLASH->FLASH_ACR.BITS.LATENCY = 2;

}
