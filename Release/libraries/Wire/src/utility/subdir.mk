################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
/home/sfleury/Application/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.21/libraries/Wire/src/utility/twi.c 

C_DEPS += \
./libraries/Wire/src/utility/twi.c.d 

LINK_OBJ += \
./libraries/Wire/src/utility/twi.c.o 


# Each subdirectory must supply rules for building sources it contributes
libraries/Wire/src/utility/twi.c.o: /home/sfleury/Application/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.21/libraries/Wire/src/utility/twi.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"/home/sfleury/Application/sloeber//arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-gcc" -c -g -Os -Wall -Wextra -std=gnu11 -ffunction-sections -fdata-sections -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_ADK -DARDUINO_ARCH_AVR   -I"/home/sfleury/Application/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.21/cores/arduino" -I"/home/sfleury/Application/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.21/variants/mega" -I"/home/sfleury/Application/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.21/libraries/Wire" -I"/home/sfleury/Application/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.21/libraries/Wire/src" -I"/home/sfleury/Application/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.21/libraries/SPI" -I"/home/sfleury/Application/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.21/libraries/SPI/src" -I"/home/sfleury/sketchbook/libraries/TimerOne-r11" -I"/home/sfleury/sketchbook/libraries/MPU9250" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '


