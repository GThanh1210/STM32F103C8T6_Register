#include <stdio.h>
#include <stdint.h>
#include "RCC.h"
#include "GPIO.h"
#include "EXTI.h"

void mDelay(volatile uint32_t time){
    while(time--);
}
volatile uint8_t flag=0;
void EXTI0_IRQHandler()
{
	flag=1;
	for (int i=0; i<10000;i++);
	EXTI->PR.BITS.BIT0 = 1;
}
int main(void){
	RCC_Enable_PortA();
	RCC_Enable_PortC();
	EXTI0_INIT();
	GPIO_Config(GPIOA, GPIO_PIN_0, GPIO_MODE_INPUT_PULLDOWN);
	GPIO_Config(GPIOC, GPIO_PIN_13, GPIO_MODE_OUTPUT_PushPull);
    while(1){
    	if(flag==1)
    	{
    		GPIO_Toggle(GPIOC, GPIO_PIN_13);
    		flag=0;
    	}
    }
}
