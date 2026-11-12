################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/BitReader.cpp \
../src/BitWriter.cpp \
../src/HNode.cpp \
../src/HTree.cpp \
../src/Program.cpp \
../src/main.cpp 

CPP_DEPS += \
./src/BitReader.d \
./src/BitWriter.d \
./src/HNode.d \
./src/HTree.d \
./src/Program.d \
./src/main.d 

OBJS += \
./src/BitReader.o \
./src/BitWriter.o \
./src/HNode.o \
./src/HTree.o \
./src/Program.o \
./src/main.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/BitReader.d ./src/BitReader.o ./src/BitWriter.d ./src/BitWriter.o ./src/HNode.d ./src/HNode.o ./src/HTree.d ./src/HTree.o ./src/Program.d ./src/Program.o ./src/main.d ./src/main.o

.PHONY: clean-src

