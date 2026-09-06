#ifndef __AFIO_H
#define __AFIO_H

#include "stdint.h"


typedef struct
{
    // Offset 0x00 - Event control register (AFIO_EVCR)
    union
    {
        volatile uint32_t REG;
        struct
        {
            volatile uint32_t PIN  :4;
            volatile uint32_t PORT :3;
            volatile uint32_t EVOE :1;
            volatile uint32_t RES  :24;
        } BITS;

    } EVCR;

    // Offset 0x04 - AF remap and debug I/O configuration register (AFIO_MAPR)
    union
    {
        volatile uint32_t REG;
        struct
        {
            volatile uint32_t SPI1_REMAP         :1;
            volatile uint32_t I2C1_REMAP         :1;
            volatile uint32_t USART1_REMAP       :1;
            volatile uint32_t USART2_REMAP       :1;
            volatile uint32_t USART3_REMAP       :2;
            volatile uint32_t TIM1_REMAP         :2;
            volatile uint32_t TIM2_REMAP         :2;
            volatile uint32_t TIM3_REMAP         :2;
            volatile uint32_t TIM4_REMAP         :1;
            volatile uint32_t CAN1_REMAP         :2;
            volatile uint32_t PD01_REMAP         :1;
            volatile uint32_t TIM5CH4_IREMAP     :1;
            volatile uint32_t ADC1_ETRGINJ_REMAP :1;
            volatile uint32_t ADC1_ETRGREG_REMAP :1;
            volatile uint32_t ADC2_ETRGINJ_REMAP :1;
            volatile uint32_t ADC2_ETRGREG_REMAP :1;
            volatile uint32_t RES                :3;
            volatile uint32_t SWJ_CFG            :3;
            volatile uint32_t RES1               :5;
        } BITS;
    } MAPR;

    // Offset 0x08 - External interrupt configuration register 1
    union
    {
        volatile uint32_t REG;
        struct
        {
            volatile uint32_t EXTI0 :4;
            volatile uint32_t EXTI1 :4;
            volatile uint32_t EXTI2 :4;
            volatile uint32_t EXTI3 :4;
            volatile uint32_t RES   :16;
        } BITS;
    } EXTICR1;

    // Offset 0x0C - External interrupt configuration register 2
    union
    {
        volatile uint32_t REG;
        struct
        {
            volatile uint32_t EXTI4 :4;
            volatile uint32_t EXTI5 :4;
            volatile uint32_t EXTI6 :4;
            volatile uint32_t EXTI7 :4;
            volatile uint32_t RES   :16;
        } BITS;
    } EXTICR2;

    // Offset 0x10 - External interrupt configuration register 3
    union
    {
        volatile uint32_t REG;
        struct
        {
            volatile uint32_t EXTI8  :4;
            volatile uint32_t EXTI9  :4;
            volatile uint32_t EXTI10 :4;
            volatile uint32_t EXTI11 :4;
            volatile uint32_t RES    :16;
        } BITS;
    } EXTICR3;

    // Offset 0x14 - External interrupt configuration register 4
    union
    {
        volatile uint32_t REG;
        struct
        {
            volatile uint32_t EXTI12 :4;
            volatile uint32_t EXTI13 :4;
            volatile uint32_t EXTI14 :4;
            volatile uint32_t EXTI15 :4;
            volatile uint32_t RES    :16;
        } BITS;
    } EXTICR4;

    // Offset 0x18 - Reserved
    volatile uint32_t RES;

    // Offset 0x1C - AF remap and debug I/O configuration register 2
    union
    {
        volatile uint32_t REG;
        struct
        {
            volatile uint32_t RES0         :5;
            volatile uint32_t TIM9_REMAP   :1;
            volatile uint32_t TIM10_REMAP  :1;
            volatile uint32_t TIM11_REMAP  :1;
            volatile uint32_t TIM13_REMAP  :1;
            volatile uint32_t TIM14_REMAP  :1;
            volatile uint32_t FSMC_NADV    :1;
            volatile uint32_t RES1         :21;
        } BITS;
    } MAPR2;

} AFIO_Typedef;


#define AFIO_BASE_ADDR      (0x40010000UL)
#define AFIO                ((volatile AFIO_Typedef *)AFIO_BASE_ADDR)


#endif
