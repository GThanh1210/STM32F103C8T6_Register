#ifndef  __EXTI_H
#define  __EXTI_H
#include "TYPE.h"
#include "AFIO.h"
typedef struct
{
	_32BIT	IMR; // offset 0x00 Interrupt mark register
	_32BIT	EMR; // offset 0x04 Event mask register
	_32BIT  RTSR; // offset 0x08 Rising trigger selection register
	_32BIT	FTSR; // offset 0x0C Falling trigger selection register
	_32BIT	SWIER; // offset 0x10 Software interrupt event register
	_32BIT  PR;   // offset 0x14 Pending register
}EXTI_Typedef;


void EXTI0_INIT(void);
void EXTI0_IRQHandler(void);
#define EXTI_BASE_ADDR  (0x40010400UL)
#define EXTI            ((volatile EXTI_Typedef *) EXTI_BASE_ADDR)
#endif
