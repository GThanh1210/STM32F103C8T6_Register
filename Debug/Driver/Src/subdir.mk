################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Driver/Src/GPIO.c \
../Driver/Src/RCC.c 

OBJS += \
./Driver/Src/GPIO.o \
./Driver/Src/RCC.o 

C_DEPS += \
./Driver/Src/GPIO.d \
./Driver/Src/RCC.d 


# Each subdirectory must supply rules for building sources it contributes
Driver/Src/%.o Driver/Src/%.su Driver/Src/%.cyclo: ../Driver/Src/%.c Driver/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -c -I"D:/LapTrinhNhung/STM32F103C8/Stm32F103_Driver/Driver/Inc" -I"D:/LapTrinhNhung/STM32F103C8/Stm32F103_Driver/Driver/Src" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Driver-2f-Src

clean-Driver-2f-Src:
	-$(RM) ./Driver/Src/GPIO.cyclo ./Driver/Src/GPIO.d ./Driver/Src/GPIO.o ./Driver/Src/GPIO.su ./Driver/Src/RCC.cyclo ./Driver/Src/RCC.d ./Driver/Src/RCC.o ./Driver/Src/RCC.su

.PHONY: clean-Driver-2f-Src

