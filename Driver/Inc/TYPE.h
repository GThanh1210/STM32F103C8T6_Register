#ifndef  __TYPE_H
#define  __TYPE_H
#include "stdint.h"

typedef union
{
	volatile uint32_t REG;
	struct
	{
		volatile uint32_t BIT0  :1;
		volatile uint32_t BIT1  :1;
		volatile uint32_t BIT2  :1;
		volatile uint32_t BIT3  :1;
		volatile uint32_t BIT4  :1;
		volatile uint32_t BIT5  :1;
		volatile uint32_t BIT6  :1;
		volatile uint32_t BIT7  :1;
		volatile uint32_t BIT8  :1;
		volatile uint32_t BIT9  :1;
		volatile uint32_t BIT10 :1;
		volatile uint32_t BIT11 :1;
		volatile uint32_t BIT12 :1;
		volatile uint32_t BIT13 :1;
		volatile uint32_t BIT14 :1;
		volatile uint32_t BIT15 :1;
		volatile uint32_t BIT16 :1;
		volatile uint32_t BIT17 :1;
		volatile uint32_t BIT18 :1;
		volatile uint32_t BIT19 :1;
		volatile uint32_t BIT20 :1;
		volatile uint32_t BIT21 :1;
		volatile uint32_t BIT22 :1;
		volatile uint32_t BIT23 :1;
		volatile uint32_t BIT24 :1;
		volatile uint32_t BIT25 :1;
		volatile uint32_t BIT26 :1;
		volatile uint32_t BIT27 :1;
		volatile uint32_t BIT28 :1;
		volatile uint32_t BIT29 :1;
		volatile uint32_t BIT30 :1;
		volatile uint32_t BIT31 :1;
	}BITS;
}_32BIT;


#endif
