#ifndef __RCC_H
#define __RCC_H

#include <stdint.h>

typedef struct
{
	// 0x00: Clock control register (RCC_CR)
	union {
		uint32_t REG;
		struct {
			volatile uint32_t HSION    :1; // Bit 0
			volatile uint32_t HSIRDY   :1; // Bit 1
			volatile uint32_t RES1     :1; // Bit 2
			volatile uint32_t HSITRIM  :5; // Bit 3..7
			volatile uint32_t HSICAL   :8; // Bit 8..15
			volatile uint32_t HSEON    :1; // Bit 16
			volatile uint32_t HSERDY   :1; // Bit 17
			volatile uint32_t HSEBYP   :1; // Bit 18
			volatile uint32_t CSSON    :1; // Bit 19
			volatile uint32_t RES2     :4; // Bit 20..23
			volatile uint32_t PLLON    :1; // Bit 24
			volatile uint32_t PLLRDY   :1; // Bit 25
			volatile uint32_t RES3     :6; // Bit 26..31
		} BITS;
	} CR;

	// 0x04: Clock configuration register (RCC_CFGR)
	union {
		uint32_t REG;
		struct {
			volatile uint32_t SW       :2; // Bit 0..1
			volatile uint32_t SWS      :2; // Bit 2..3
			volatile uint32_t HPRE     :4; // Bit 4..7
			volatile uint32_t PPRE1    :3; // Bit 8..10
			volatile uint32_t PPRE2    :3; // Bit 11..13
			volatile uint32_t ADCPRE   :2; // Bit 14..15
			volatile uint32_t PLLSRC   :1; // Bit 16
			volatile uint32_t PLLXTPRE :1; // Bit 17
			volatile uint32_t PLLMUL   :4; // Bit 18..21
			volatile uint32_t USBPRE   :1; // Bit 22
			volatile uint32_t RES1     :1; // Bit 23
			volatile uint32_t MCO      :3; // Bit 24..26
			volatile uint32_t RES2     :5; // Bit 27..31
		} BITS;
	} CFGR;

	// 0x08: Clock interrupt register (RCC_CIR)
	union {
		uint32_t REG;
		struct {
			volatile uint32_t LSIRDYF  :1; // Bit 0
			volatile uint32_t LSERDYF  :1; // Bit 1
			volatile uint32_t HSIRDYF  :1; // Bit 2
			volatile uint32_t HSERDYF  :1; // Bit 3
			volatile uint32_t PLLRDYF  :1; // Bit 4
			volatile uint32_t RES1     :2; // Bit 5..6
			volatile uint32_t CSSF     :1; // Bit 7
			volatile uint32_t LSIRDYIE :1; // Bit 8
			volatile uint32_t LSERDYIE :1; // Bit 9
			volatile uint32_t HSIRDYIE :1; // Bit 10
			volatile uint32_t HSERDYIE :1; // Bit 11
			volatile uint32_t PLLRDYIE :1; // Bit 12
			volatile uint32_t RES2     :3; // Bit 13..15
			volatile uint32_t LSIRDYC  :1; // Bit 16
			volatile uint32_t LSERDYC  :1; // Bit 17
			volatile uint32_t HSIRDYC  :1; // Bit 18
			volatile uint32_t HSERDYC  :1; // Bit 19
			volatile uint32_t PLLRDYC  :1; // Bit 20
			volatile uint32_t RES3     :2; // Bit 21..22
			volatile uint32_t CSSC     :1; // Bit 23
			volatile uint32_t RES4     :8; // Bit 24..31
		} BITS;
	} CIR;

	// 0x0C: APB2 peripheral reset register (RCC_APB2RSTR)
	union {
		uint32_t REG;
		struct {
			volatile uint32_t AFIORST   :1; // Bit 0
			volatile uint32_t RES1      :1; // Bit 1
			volatile uint32_t IOPARST   :1; // Bit 2
			volatile uint32_t IOPBRST   :1; // Bit 3
			volatile uint32_t IOPCRST   :1; // Bit 4
			volatile uint32_t IOPDRST   :1; // Bit 5
			volatile uint32_t IOPERST   :1; // Bit 6
			volatile uint32_t IOPFRST   :1; // Bit 7
			volatile uint32_t IOPGRST   :1; // Bit 8
			volatile uint32_t ADC1RST   :1; // Bit 9
			volatile uint32_t ADC2RST   :1; // Bit 10
			volatile uint32_t TIM1RST   :1; // Bit 11
			volatile uint32_t SPI1RST   :1; // Bit 12
			volatile uint32_t TIM8RST   :1; // Bit 13
			volatile uint32_t USART1RST :1; // Bit 14
			volatile uint32_t ADC3RST   :1; // Bit 15
			volatile uint32_t RES2      :3; // Bit 16..18
			volatile uint32_t TIM9RST   :1; // Bit 19
			volatile uint32_t TIM10RST  :1; // Bit 20
			volatile uint32_t TIM11RST  :1; // Bit 21
			volatile uint32_t RES3      :10;// Bit 22..31
		} BITS;
	} APB2RSTR;

	// 0x10: APB1 peripheral reset register (RCC_APB1RSTR)
	union {
		uint32_t REG;
		struct {
			volatile uint32_t TIM2RST   :1; // Bit 0
			volatile uint32_t TIM3RST   :1; // Bit 1
			volatile uint32_t TIM4RST   :1; // Bit 2
			volatile uint32_t TIM5RST   :1; // Bit 3
			volatile uint32_t TIM6RST   :1; // Bit 4
			volatile uint32_t TIM7RST   :1; // Bit 5
			volatile uint32_t TIM12RST  :1; // Bit 6
			volatile uint32_t TIM13RST  :1; // Bit 7
			volatile uint32_t TIM14RST  :1; // Bit 8
			volatile uint32_t RES1      :2; // Bit 9..10
			volatile uint32_t WWDGRST   :1; // Bit 11
			volatile uint32_t RES2      :2; // Bit 12..13
			volatile uint32_t SPI2RST   :1; // Bit 14
			volatile uint32_t SPI3RST   :1; // Bit 15
			volatile uint32_t RES3      :1; // Bit 16
			volatile uint32_t USART2RST :1; // Bit 17
			volatile uint32_t USART3RST :1; // Bit 18
			volatile uint32_t UART4RST  :1; // Bit 19
			volatile uint32_t UART5RST  :1; // Bit 20
			volatile uint32_t I2C1RST   :1; // Bit 21
			volatile uint32_t I2C2RST   :1; // Bit 22
			volatile uint32_t USBRST    :1; // Bit 23
			volatile uint32_t RES4      :1; // Bit 24
			volatile uint32_t CANRST    :1; // Bit 25
			volatile uint32_t RES5      :1; // Bit 26
			volatile uint32_t BKPRST    :1; // Bit 27
			volatile uint32_t PWRRST    :1; // Bit 28
			volatile uint32_t DACRST    :1; // Bit 29
			volatile uint32_t RES6      :2; // Bit 30..31
		} BITS;
	} APB1RSTR;

	// 0x14: AHB peripheral clock enable register (RCC_AHBENR)
	union {
		uint32_t REG;
		struct {
			volatile uint32_t DMA1EN    :1; // Bit 0
			volatile uint32_t DMA2EN    :1; // Bit 1
			volatile uint32_t SRAMEN    :1; // Bit 2
			volatile uint32_t RES1      :1; // Bit 3
			volatile uint32_t FLITFEN   :1; // Bit 4
			volatile uint32_t RES2      :1; // Bit 5
			volatile uint32_t CRCEN     :1; // Bit 6
			volatile uint32_t RES3      :1; // Bit 7
			volatile uint32_t FSMCEN    :1; // Bit 8
			volatile uint32_t RES4      :1; // Bit 9
			volatile uint32_t SDIOEN    :1; // Bit 10
			volatile uint32_t RES5      :21;// Bit 11..31
		} BITS;
	} AHBENR;

	// 0x18: APB2 peripheral clock enable register (RCC_APB2ENR)
	union {
		uint32_t REG;
		struct {
			volatile uint32_t AFIOEN    :1; // Bit 0
			volatile uint32_t RES1      :1; // Bit 1
			volatile uint32_t IOPAEN    :1; // Bit 2
			volatile uint32_t IOPBEN    :1; // Bit 3
			volatile uint32_t IOPCEN    :1; // Bit 4
			volatile uint32_t IOPDEN    :1; // Bit 5
			volatile uint32_t IOPEEN    :1; // Bit 6
			volatile uint32_t IOPFEN    :1; // Bit 7
			volatile uint32_t IOPGEN    :1; // Bit 8
			volatile uint32_t ADC1EN    :1; // Bit 9
			volatile uint32_t ADC2EN    :1; // Bit 10
			volatile uint32_t TIM1EN    :1; // Bit 11
			volatile uint32_t SPI1EN    :1; // Bit 12
			volatile uint32_t TIM8EN    :1; // Bit 13
			volatile uint32_t USART1EN  :1; // Bit 14
			volatile uint32_t ADC3EN    :1; // Bit 15
			volatile uint32_t RES2      :3; // Bit 16..18
			volatile uint32_t TIM9EN    :1; // Bit 19
			volatile uint32_t TIM10EN   :1; // Bit 20
			volatile uint32_t TIM11EN   :1; // Bit 21
			volatile uint32_t RES3      :10;// Bit 22..31
		} BITS;
	} APB2ENR;

	// 0x1C: APB1 peripheral clock enable register (RCC_APB1ENR)
	union {
		uint32_t REG;
		struct {
			volatile uint32_t TIM2EN    :1; // Bit 0
			volatile uint32_t TIM3EN    :1; // Bit 1
			volatile uint32_t TIM4EN    :1; // Bit 2
			volatile uint32_t TIM5EN    :1; // Bit 3
			volatile uint32_t TIM6EN    :1; // Bit 4
			volatile uint32_t TIM7EN    :1; // Bit 5
			volatile uint32_t TIM12EN   :1; // Bit 6
			volatile uint32_t TIM13EN   :1; // Bit 7
			volatile uint32_t TIM14EN   :1; // Bit 8
			volatile uint32_t RES1      :2; // Bit 9..10
			volatile uint32_t WWDGEN    :1; // Bit 11
			volatile uint32_t RES2      :2; // Bit 12..13
			volatile uint32_t SPI2EN    :1; // Bit 14
			volatile uint32_t SPI3EN    :1; // Bit 15
			volatile uint32_t RES3      :1; // Bit 16
			volatile uint32_t USART2EN  :1; // Bit 17
			volatile uint32_t USART3EN  :1; // Bit 18
			volatile uint32_t UART4EN   :1; // Bit 19
			volatile uint32_t UART5EN   :1; // Bit 20
			volatile uint32_t I2C1EN    :1; // Bit 21
			volatile uint32_t I2C2EN    :1; // Bit 22
			volatile uint32_t USBEN     :1; // Bit 23
			volatile uint32_t RES4      :1; // Bit 24
			volatile uint32_t CANEN     :1; // Bit 25
			volatile uint32_t RES5      :1; // Bit 26
			volatile uint32_t BKPEN     :1; // Bit 27
			volatile uint32_t PWREN     :1; // Bit 28
			volatile uint32_t DACEN     :1; // Bit 29
			volatile uint32_t RES6      :2; // Bit 30..31
		} BITS;
	} APB1ENR;

	// 0x20: BDCR register (RCC_BDCR)
	union {
		uint32_t REG;
		struct {
			volatile uint32_t LSEON     :1; // Bit 0
			volatile uint32_t LSERDY    :1; // Bit 1
			volatile uint32_t LSEBYP    :1; // Bit 2
			volatile uint32_t RES1      :5; // Bit 3..7
			volatile uint32_t RTCSEL    :2; // Bit 8..9
			volatile uint32_t RES2      :5; // Bit 10..14
			volatile uint32_t RTCEN     :1; // Bit 15
			volatile uint32_t BDRST     :1; // Bit 16
			volatile uint32_t RES3      :14;// Bit 17..31
		} BITS;
	} BDCR;

	// 0x24: CSR register (RCC_CSR)
	union {
		uint32_t REG;
		struct {
			volatile uint32_t LSION     :1; // Bit 0
			volatile uint32_t LSIRDY    :1; // Bit 1
			volatile uint32_t RES1      :22;// Bit 2..23
			volatile uint32_t RMVF      :1; // Bit 24
			volatile uint32_t RES2      :1; // Bit 25
			volatile uint32_t PINRSTF   :1; // Bit 26
			volatile uint32_t PORRSTF   :1; // Bit 27
			volatile uint32_t SFTRSTF   :1; // Bit 28
			volatile uint32_t IWDGRSTF  :1; // Bit 29
			volatile uint32_t WWDGRSTF  :1; // Bit 30
			volatile uint32_t LPWRRSTF  :1; // Bit 31
		} BITS;
	} CSR;

} RCC_Typedef;
typedef struct
{
	// 0x00
	union
	{
		uint32_t REG;
		struct
		{
			volatile uint32_t LATENCY  :3; // Bit 0
			volatile uint32_t HLFCYA   :1; // Bit 3
			volatile uint32_t PRFTBE   :1; // Bit 4
			volatile uint32_t PRFTBS   :1; // Bit 5
			volatile uint32_t RES      :26; // Bit 6
		}BITS;
	}FLASH_ACR;
}FLASH_Typedef;
// Định nghĩa con trỏ địa chỉ RCC cơ sở
#define RCC_BASE_ADDR      (0x40021000UL)
#define FLASH_BASE_ADDR    (0x40022000UL)

#define RCC                  ((volatile RCC_Typedef *) RCC_BASE_ADDR)
#define FLASH                ((volatile FLASH_Typedef *) FLASH_BASE_ADDR)

void RCC_Enable_PortA(void);
void RCC_Enable_PortB(void);
void RCC_Enable_PortC(void);
void RCC_Config_72MHZ(void);
void RCC_Enable_AFIO(void);
#endif
