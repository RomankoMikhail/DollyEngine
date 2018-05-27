################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Adapters/IniAdapter.cpp 

OBJS += \
./src/Adapters/IniAdapter.o 

CPP_DEPS += \
./src/Adapters/IniAdapter.d 


# Each subdirectory must supply rules for building sources it contributes
src/Adapters/%.o: ../src/Adapters/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	LC_ALL=C g++ -I"/home/romanko/c-workspace/story-of-a-dolly/src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


