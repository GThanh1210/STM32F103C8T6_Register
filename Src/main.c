#include <stdio.h>
#include <stdint.h>
#include "RCC.h"
#include "GPIO.h"


void mDelay(volatile uint32_t time){
    while(time--);
}

int main(void){
    // 1. Bật Clock cho Port C
    RCC_Enable_PortC();
    RCC_Enable_PortA();
    GPIO_Config(GPIOC,GPIO_PIN_13, GPIO_MODE_OUTPUT_PushPull);

    // 3. Vòng lặp vô hạn chớp tắt LED
    while(1){
    	GPIO_Write_Pin(GPIOC, GPIO_PIN_13 ,1);
        mDelay(500000);

    	GPIO_Write_Pin(GPIOC, GPIO_PIN_13 ,0);
        mDelay(500000);
    }
}
