################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
/home/sfleury/sketchbook/libraries/IMU_10DOF-master/BMP180.cpp \
/home/sfleury/sketchbook/libraries/IMU_10DOF-master/I2Cdev.cpp \
/home/sfleury/sketchbook/libraries/IMU_10DOF-master/MPU9250.cpp 

LINK_OBJ += \
./libraries/IMU_10DOF-master/BMP180.cpp.o \
./libraries/IMU_10DOF-master/I2Cdev.cpp.o \
./libraries/IMU_10DOF-master/MPU9250.cpp.o 

CPP_DEPS += \
./libraries/IMU_10DOF-master/BMP180.cpp.d \
./libraries/IMU_10DOF-master/I2Cdev.cpp.d \
./libraries/IMU_10DOF-master/MPU9250.cpp.d 


# Each subdirectory must supply rules for building sources it contributes
libraries/IMU_10DOF-master/BMP180.cpp.o: /home/sfleury/sketchbook/libraries/IMU_10DOF-master/BMP180.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/home/sfleury/Application/sloeber//arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_ADK -DARDUINO_ARCH_AVR   -I"/home/sfleury/Application/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.21/cores/arduino" -I"/home/sfleury/Application/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.21/variants/mega" -I"/home/sfleury/Application/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.21/libraries/Wire" -I"/home/sfleury/Application/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.21/libraries/Wire/src" -I"/home/sfleury/Application/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.21/libraries/SPI" -I"/home/sfleury/Application/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.21/libraries/SPI/src" -I"/home/sfleury/sketchbook/libraries/TimerOne-r11" -I"/home/sfleury/sketchbook/libraries/IMU_10DOF-master" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

libraries/IMU_10DOF-master/I2Cdev.cpp.o: /home/sfleury/sketchbook/libraries/IMU_10DOF-master/I2Cdev.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/home/sfleury/Application/sloeber//arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_ADK -DARDUINO_ARCH_AVR   -I"/home/sfleury/Application/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.21/cores/arduino" -I"/home/sfleury/Application/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.21/variants/mega" -I"/home/sfleury/Application/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.21/libraries/Wire" -I"/home/sfleury/Application/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.21/libraries/Wire/src" -I"/home/sfleury/Application/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.21/libraries/SPI" -I"/home/sfleury/Application/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.21/libraries/SPI/src" -I"/home/sfleury/sketchbook/libraries/TimerOne-r11" -I"/home/sfleury/sketchbook/libraries/IMU_10DOF-master" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

libraries/IMU_10DOF-master/MPU9250.cpp.o: /home/sfleury/sketchbook/libraries/IMU_10DOF-master/MPU9250.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/home/sfleury/Application/sloeber//arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_ADK -DARDUINO_ARCH_AVR   -I"/home/sfleury/Application/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.21/cores/arduino" -I"/home/sfleury/Application/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.21/variants/mega" -I"/home/sfleury/Application/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.21/libraries/Wire" -I"/home/sfleury/Application/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.21/libraries/Wire/src" -I"/home/sfleury/Application/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.21/libraries/SPI" -I"/home/sfleury/Application/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.21/libraries/SPI/src" -I"/home/sfleury/sketchbook/libraries/TimerOne-r11" -I"/home/sfleury/sketchbook/libraries/IMU_10DOF-master" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '


