################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Containers/Config.cpp \
../src/Containers/Tilemap.cpp 

OBJS += \
./src/Containers/Config.o \
./src/Containers/Tilemap.o 

CPP_DEPS += \
./src/Containers/Config.d \
./src/Containers/Tilemap.d 


# Each subdirectory must supply rules for building sources it contributes
src/Containers/%.o: ../src/Containers/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	LC_ALL=C g++ -I"/home/romanko/c-workspace/story-of-a-dolly/src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


