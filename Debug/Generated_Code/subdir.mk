################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Generated_Code/Cpu.c \
../Generated_Code/WAIT1.c \
../Generated_Code/clockMan1.c \
../Generated_Code/gpio1.c \
../Generated_Code/hardware_init.c \
../Generated_Code/osa1.c \
../Generated_Code/pin_mux.c 

OBJS += \
./Generated_Code/Cpu.o \
./Generated_Code/WAIT1.o \
./Generated_Code/clockMan1.o \
./Generated_Code/gpio1.o \
./Generated_Code/hardware_init.o \
./Generated_Code/osa1.o \
./Generated_Code/pin_mux.o 

C_DEPS += \
./Generated_Code/Cpu.d \
./Generated_Code/WAIT1.d \
./Generated_Code/clockMan1.d \
./Generated_Code/gpio1.d \
./Generated_Code/hardware_init.d \
./Generated_Code/osa1.d \
./Generated_Code/pin_mux.d 


# Each subdirectory must supply rules for building sources it contributes
Generated_Code/%.o: ../Generated_Code/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -D"FSL_OSA_BM_TIMER_CONFIG=2" -D"CPU_MKV10Z32VLF7" -I"/home/ballmik/workspace.kds/KV10-Blink-Step-Bipolar2/SDK/platform/hal/inc" -I"/home/ballmik/workspace.kds/KV10-Blink-Step-Bipolar2/SDK/platform/hal/src/sim/MKV10Z7" -I"/home/ballmik/workspace.kds/KV10-Blink-Step-Bipolar2/SDK/platform/system/src/clock/MKV10Z7" -I"/home/ballmik/workspace.kds/KV10-Blink-Step-Bipolar2/SDK/platform/system/inc" -I"/home/ballmik/workspace.kds/KV10-Blink-Step-Bipolar2/SDK/platform/osa/inc" -I"/home/ballmik/workspace.kds/KV10-Blink-Step-Bipolar2/SDK/platform/CMSIS/Include" -I"/home/ballmik/workspace.kds/KV10-Blink-Step-Bipolar2/SDK/platform/devices" -I"/home/ballmik/workspace.kds/KV10-Blink-Step-Bipolar2/SDK/platform/devices/MKV10Z7/include" -I"/home/ballmik/workspace.kds/KV10-Blink-Step-Bipolar2/SDK/platform/devices/MKV10Z7/startup" -I"/home/ballmik/workspace.kds/KV10-Blink-Step-Bipolar2/Generated_Code/SDK/platform/devices/MKV10Z7/startup" -I"/home/ballmik/workspace.kds/KV10-Blink-Step-Bipolar2/Sources" -I"/home/ballmik/workspace.kds/KV10-Blink-Step-Bipolar2/Generated_Code" -I"/home/ballmik/workspace.kds/KV10-Blink-Step-Bipolar2/SDK/platform/drivers/inc" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


