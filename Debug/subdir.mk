################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../appState.cpp \
../appStateManager.cpp \
../game.cpp \
../gameEntity.cpp \
../gameEntityManager.cpp \
../gameStateGame.cpp \
../gameStateIntro.cpp \
../gameStateMenu.cpp \
../onCleanup.cpp \
../onEvent.cpp \
../onInit.cpp \
../onLoop.cpp \
../onRender.cpp 

OBJS += \
./appState.o \
./appStateManager.o \
./game.o \
./gameEntity.o \
./gameEntityManager.o \
./gameStateGame.o \
./gameStateIntro.o \
./gameStateMenu.o \
./onCleanup.o \
./onEvent.o \
./onInit.o \
./onLoop.o \
./onRender.o 

CPP_DEPS += \
./appState.d \
./appStateManager.d \
./game.d \
./gameEntity.d \
./gameEntityManager.d \
./gameStateGame.d \
./gameStateIntro.d \
./gameStateMenu.d \
./onCleanup.d \
./onEvent.d \
./onInit.d \
./onLoop.d \
./onRender.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/alexander/workspace/sfml_eclips/src -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


