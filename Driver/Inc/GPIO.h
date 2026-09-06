#ifndef __GPIO_H
#define __GPIO_H

#include <stdint.h>

// GPIO PIN
#define   GPIO_PIN_0      ((uint16_t)0x0001)
#define   GPIO_PIN_1      ((uint16_t)0x0002)
#define   GPIO_PIN_2      ((uint16_t)0x0004)
#define   GPIO_PIN_3      ((uint16_t)0x0008)
#define   GPIO_PIN_4      ((uint16_t)0x0010)
#define   GPIO_PIN_5      ((uint16_t)0x0020)
#define   GPIO_PIN_6      ((uint16_t)0x0040)
#define   GPIO_PIN_7      ((uint16_t)0x0080)
#define   GPIO_PIN_8      ((uint16_t)0x0100)
#define   GPIO_PIN_9      ((uint16_t)0x0200)
#define   GPIO_PIN_10     ((uint16_t)0x0400)
#define   GPIO_PIN_11     ((uint16_t)0x0800)
#define   GPIO_PIN_12     ((uint16_t)0x1000)
#define   GPIO_PIN_13     ((uint16_t)0x2000)
#define   GPIO_PIN_14     ((uint16_t)0x4000)
#define   GPIO_PIN_15     ((uint16_t)0x8000)

// GPIO MODE
#define GPIO_MODE_INPUT_FLOATING           0x00
#define GPIO_MODE_OUTPUT_PushPull          0x01
#define GPIO_MODE_OUTPUT_OpenDrain         0x02
#define GPIO_MODE_ALERNATE_FUNC_PP         0x03
#define GPIO_MODE_ALERNATE_FUNC_OPD        0x04
#define GPIO_MODE_INPUT_ANALOG             0x05
#define GPIO_MODE_INPUT_PULLUP             0x06
#define GPIO_MODE_INPUT_PULLDOWN           0x07


typedef struct
{
	// offset: 0x00 Port configuration register low (GPIOx_CRL)
	union
	{
		volatile uint32_t REG;
		struct
		{
			volatile uint32_t MODE0 :2;
			volatile uint32_t CNF0  :2;
			volatile uint32_t MODE1 :2;
			volatile uint32_t CNF1  :2;
			volatile uint32_t MODE2 :2;
			volatile uint32_t CNF2  :2;
			volatile uint32_t MODE3 :2;
			volatile uint32_t CNF3  :2;
			volatile uint32_t MODE4 :2;
			volatile uint32_t CNF4  :2;
			volatile uint32_t MODE5 :2;
			volatile uint32_t CNF5  :2;
			volatile uint32_t MODE6 :2;
			volatile uint32_t CNF6  :2;
			volatile uint32_t MODE7 :2;
			volatile uint32_t CNF7  :2;
		}BITS;
	}CRL;
	// offset: 0x04 Port configuration register high (GPIOx_CRH)
	union {
		volatile uint32_t REG;
		struct {
			volatile uint32_t MODE8  :2;
			volatile uint32_t CNF8   :2;
			volatile uint32_t MODE9  :2;
			volatile uint32_t CNF9   :2;
			volatile uint32_t MODE10 :2;
			volatile uint32_t CNF10  :2;
			volatile uint32_t MODE11 :2;
			volatile uint32_t CNF11  :2;
			volatile uint32_t MODE12 :2;
			volatile uint32_t CNF12  :2;
			volatile uint32_t MODE13 :2;
			volatile uint32_t CNF13  :2;
			volatile uint32_t MODE14 :2;
			volatile uint32_t CNF14  :2;
			volatile uint32_t MODE15 :2;
			volatile uint32_t CNF15  :2;
		} BITS;
	}CRH;
	// offset: 0x08 Port input data register (GPIOx_IDR)
	union {
		volatile uint32_t REG;
		struct {
			volatile uint32_t IDR0  :1;
			volatile uint32_t IDR1  :1;
			volatile uint32_t IDR2  :1;
			volatile uint32_t IDR3  :1;
			volatile uint32_t IDR4  :1;
			volatile uint32_t IDR5  :1;
			volatile uint32_t IDR6  :1;
			volatile uint32_t IDR7  :1;
			volatile uint32_t IDR8  :1;
			volatile uint32_t IDR9  :1;
			volatile uint32_t IDR10 :1;
			volatile uint32_t IDR11 :1;
			volatile uint32_t IDR12 :1;
			volatile uint32_t IDR13 :1;
			volatile uint32_t IDR14 :1;
			volatile uint32_t IDR15 :1;
			volatile uint32_t RES   :16;
		} BITS;
	}IDR;
	// offset: 0x0C Port output data register (GPIOx_ODR)
	union {
		volatile uint32_t REG;
		struct {
			volatile uint32_t ODR0  :1;
			volatile uint32_t ODR1  :1;
			volatile uint32_t ODR2  :1;
			volatile uint32_t ODR3  :1;
			volatile uint32_t ODR4  :1;
			volatile uint32_t ODR5  :1;
			volatile uint32_t ODR6  :1;
			volatile uint32_t ODR7  :1;
			volatile uint32_t ODR8  :1;
			volatile uint32_t ODR9  :1;
			volatile uint32_t ODR10 :1;
			volatile uint32_t ODR11 :1;
			volatile uint32_t ODR12 :1;
			volatile uint32_t ODR13 :1;
			volatile uint32_t ODR14 :1;
			volatile uint32_t ODR15 :1;
			volatile uint32_t RES :16;
		} BITS;
	} ODR;
	// offset: 0x10 Port bit set/reset register (GPIOx_BSRR)
	union {
		volatile uint32_t REG;
		struct {
			volatile uint32_t BS0  :1;
			volatile uint32_t BS1  :1;
			volatile uint32_t BS2  :1;
			volatile uint32_t BS3  :1;
			volatile uint32_t BS4  :1;
			volatile uint32_t BS5  :1;
			volatile uint32_t BS6  :1;
			volatile uint32_t BS7  :1;
			volatile uint32_t BS8  :1;
			volatile uint32_t BS9  :1;
			volatile uint32_t BS10 :1;
			volatile uint32_t BS11 :1;
			volatile uint32_t BS12 :1;
			volatile uint32_t BS13 :1;
			volatile uint32_t BS14 :1;
			volatile uint32_t BS15 :1;
			volatile uint32_t BR0  :1;
			volatile uint32_t BR1  :1;
			volatile uint32_t BR2  :1;
			volatile uint32_t BR3  :1;
			volatile uint32_t BR4  :1;
			volatile uint32_t BR5  :1;
			volatile uint32_t BR6  :1;
			volatile uint32_t BR7  :1;
			volatile uint32_t BR8  :1;
			volatile uint32_t BR9  :1;
			volatile uint32_t BR10 :1;
			volatile uint32_t BR11 :1;
			volatile uint32_t BR12 :1;
			volatile uint32_t BR13 :1;
			volatile uint32_t BR14 :1;
			volatile uint32_t BR15 :1;
		} BITS;
	}BSRR;
	// offset: 0x14 Port bit reset register (GPIOx_BRR)
	union {
		volatile uint32_t REG;
		struct {
			volatile uint32_t BR0  :1;
			volatile uint32_t BR1  :1;
			volatile uint32_t BR2  :1;
			volatile uint32_t BR3  :1;
			volatile uint32_t BR4  :1;
			volatile uint32_t BR5  :1;
			volatile uint32_t BR6  :1;
			volatile uint32_t BR7  :1;
			volatile uint32_t BR8  :1;
			volatile uint32_t BR9  :1;
			volatile uint32_t BR10 :1;
			volatile uint32_t BR11 :1;
			volatile uint32_t BR12 :1;
			volatile uint32_t BR13 :1;
			volatile uint32_t BR14 :1;
			volatile uint32_t BR15 :1;
			volatile uint32_t RES :16;
		} BITS;
	} BRR;
	// offset: 0x18 Port configuration lock register (GPIOx_LCKR)
	union {
		volatile uint32_t REG;
		struct {
			volatile uint32_t LCK0 :1;
			volatile uint32_t LCK1 :1;
			volatile uint32_t LCK2 :1;
			volatile uint32_t LCK3 :1;
			volatile uint32_t LCK4 :1;
			volatile uint32_t LCK5 :1;
			volatile uint32_t LCK6 :1;
			volatile uint32_t LCK7 :1;
			volatile uint32_t LCK8 :1;
			volatile uint32_t LCK9 :1;
			volatile uint32_t LCK10 :1;
			volatile uint32_t LCK11 :1;
			volatile uint32_t LCK12 :1;
			volatile uint32_t LCK13 :1;
			volatile uint32_t LCK14 :1;
			volatile uint32_t LCK15 :1;
			volatile uint32_t LCKK :1;
			volatile uint32_t RES :15;
		} BITS;
	}LCKR;
}GPIO_Typedef;

#define GPIOA_BASE_ADDR (0x40010800UL)
#define GPIOB_BASE_ADDR (0x40010C00UL)
#define GPIOC_BASE_ADDR (0x40011000UL)


#define GPIOA      (volatile GPIO_Typedef*)(GPIOA_BASE_ADDR)
#define GPIOB      (volatile GPIO_Typedef*)(GPIOB_BASE_ADDR)
#define GPIOC      (volatile GPIO_Typedef*)(GPIOC_BASE_ADDR)

void GPIO_Config(volatile GPIO_Typedef* GPIOx, uint16_t PIN, uint32_t mode);
void GPIO_Write_Pin(volatile GPIO_Typedef* GPIOx, uint16_t PIN, uint8_t state);
uint8_t GPIO_Read_Pin(volatile GPIO_Typedef* GPIOx, uint16_t PIN);

#endif
