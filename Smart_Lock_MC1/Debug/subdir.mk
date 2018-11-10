################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../adc.c \
../keypad.c \
../lcd-.c \
../lcd.c \
../smart_lock_MC1.c \
../uart.c 

OBJS += \
./adc.o \
./keypad.o \
./lcd-.o \
./lcd.o \
./smart_lock_MC1.o \
./uart.o 

C_DEPS += \
./adc.d \
./keypad.d \
./lcd-.d \
./lcd.d \
./smart_lock_MC1.d \
./uart.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


