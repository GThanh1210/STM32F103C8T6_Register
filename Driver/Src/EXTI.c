#include  "EXTI.h"
#define __weak __attribute__((weak))


#define EXTI_ISER0  (uint32_t *)(0xE000E100)


void EXTI0_INIT()
{
	AFIO->EXTICR1.REG &= ~(0xF << 0);  // set GPIO PA0 su dung EXTI0
	EXTI->IMR.BITS.BIT0 = 1;      // bat mask cho line EXTI0
	EXTI->RTSR.BITS.BIT0 = 1;     // config thanh che do nhan canh len cho chan PA0
	EXTI->FTSR.BITS.BIT0 = 0;     // config khong su dung canh xuong
	// bat ngat o line 0 trong NIVIC
	*EXTI_ISER0 |= (1 << 6);

}
__weak void EXTI0_IRQHandler()
{
	EXTI->PR.BITS.BIT0 = 1;
}
