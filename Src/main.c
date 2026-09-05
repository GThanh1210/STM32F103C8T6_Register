#include <stdio.h>
#include <stdint.h>
#include "RCC.h"

//----------GPIO GPIO----------------------------
#define GPIOA_ADD_BASE              0x40010800UL
#define GPIOC_ADD_BASE              0x40011000UL

#define GPIOA_ADD_CRH               (GPIOA_ADD_BASE + 0x04)
#define GPIOC_ADD_CRH               (GPIOC_ADD_BASE + 0x04)
#define GPIOC_ADD_ODR               (GPIOC_ADD_BASE + 0x0C)

#define GPIOA_CRH                    (*((volatile uint32_t*)GPIOA_ADD_CRH))
#define GPIOC_CRH                    (*((volatile uint32_t*)GPIOC_ADD_CRH))
#define GPIOC_ODR                    (*((volatile uint32_t*)GPIOC_ADD_ODR))

void mDelay(volatile uint32_t time){
    while(time--);
}
void MCO_PA8_INIT()
{
	GPIOA_CRH &= ~ (0b1111 << 0);
	GPIOA_CRH |=  (0b1011 << 0);
}
int main(void){
	RCC_Config_72MHZ();
	RCC->CFGR.BITS.MCO = 4;
    // 1. Bật Clock cho Port C
    RCC_Enable_PortC();
    RCC_Enable_PortA();
    //
    MCO_PA8_INIT();
    // 2. Cấu hình chân PC13 làm Output Push-Pull 2MHz
    // Xóa cả 4 bit cấu hình CNF13[1:0] và MODE13[1:0] của PC13 (từ bit 20 đến 23)
    GPIOC_CRH &= ~(0b1111 << 20);

    // Gán MODE13 = 1:0 (Output 2MHz), CNF13 = 0:0 (Push-Pull)
    GPIOC_CRH |= (0x0010 << 20);

    // 3. Vòng lặp vô hạn chớp tắt LED
    while(1){
        GPIOC_ODR |= (1 << 13);    // Bật PC13 (Mức cao)
        mDelay(500000);            // Delay khoảng 0.5s (với HSI 8MHz)

        GPIOC_ODR &= ~(1 << 13);   // Tắt PC13 (Mức thấp)
        mDelay(500000);
    }
}
