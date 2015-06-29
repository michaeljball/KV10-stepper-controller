################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../SDK/platform/drivers/src/gpio/fsl_gpio_common.c \
../SDK/platform/drivers/src/gpio/fsl_gpio_driver.c 

OBJS += \
./SDK/platform/drivers/src/gpio/fsl_gpio_common.o \
./SDK/platform/drivers/src/gpio/fsl_gpio_driver.o 

C_DEPS += \
./SDK/platform/drivers/src/gpio/fsl_gpio_common.d \
./SDK/platform/drivers/src/gpio/fsl_gpio_driver.d 


# Each subdirectory must supply rules for building sources it contributes
SDK/platform/drivers/src/gpio/%.o: ../SDK/platform/drivers/src/gpio/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -D"FSL_OSA_BM_TIMER_CONFIG=2" -D"CPU_MKV10Z32VLF7" -I"/home/ballmik/workspace.kds/KV10-Blink-Step-Bipolar2/SDK/platform/hal/inc" -I"/home/ballmik/workspace.kds/KV10-Blink-Step-Bipolar2/SDK/platform/hal/src/sim/MKV10Z7" -I"/home/ballmik/workspace.kds/KV10-Blink-Step-Bipolar2/SDK/platform/system/src/clock/MKV10Z7" -I"/home/ballmik/workspace.kds/KV10-Blink-Step-Bipolar2/SDK/platform/system/inc" -I"/home/ballmik/workspace.kds/KV10-Blink-Step-Bipolar2/SDK/platform/osa/inc" -I"/home/ballmik/workspace.kds/KV10-Blink-Step-Bipolar2/SDK/platform/CMSIS/Include" -I"/home/ballmik/workspace.kds/KV10-Blink-Step-Bipolar2/SDK/platform/devices" -I"/home/ballmik/workspace.kds/KV10-Blink-Step-Bipolar2/SDK/platform/devices/MKV10Z7/include" -I"/home/ballmik/workspace.kds/KV10-Blink-Step-Bipolar2/SDK/platform/devices/MKV10Z7/startup" -I"/home/ballmik/workspace.kds/KV10-Blink-Step-Bipolar2/Generated_Code/SDK/platform/devices/MKV10Z7/startup" -I"/home/ballmik/workspace.kds/KV10-Blink-Step-Bipolar2/Sources" -I"/home/ballmik/workspace.kds/KV10-Blink-Step-Bipolar2/Generated_Code" -I"/home/ballmik/workspace.kds/KV10-Blink-Step-Bipolar2/SDK/platform/drivers/inc" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


