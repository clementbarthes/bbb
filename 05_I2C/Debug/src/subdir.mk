################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/05_I2C.cpp \
../src/Adxl345I2C.cpp \
../src/I2c.cpp \
../src/Lsm303d.cpp 

OBJS += \
./src/05_I2C.o \
./src/Adxl345I2C.o \
./src/I2c.o \
./src/Lsm303d.o 

CPP_DEPS += \
./src/05_I2C.d \
./src/Adxl345I2C.d \
./src/I2c.d \
./src/Lsm303d.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	arm-linux-gnueabihf-g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


