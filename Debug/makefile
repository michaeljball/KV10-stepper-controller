################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Static_Code/System/subdir.mk
-include Sources/subdir.mk
-include SDK/platform/system/src/interrupt/subdir.mk
-include SDK/platform/system/src/clock/MKV10Z7/subdir.mk
-include SDK/platform/system/src/clock/subdir.mk
-include SDK/platform/osa/src/subdir.mk
-include SDK/platform/hal/src/sim/MKV10Z7/subdir.mk
-include SDK/platform/hal/src/port/subdir.mk
-include SDK/platform/hal/src/osc/subdir.mk
-include SDK/platform/hal/src/mcg/subdir.mk
-include SDK/platform/hal/src/gpio/subdir.mk
-include SDK/platform/drivers/src/gpio/subdir.mk
-include SDK/platform/devices/MKV10Z7/startup/gcc/subdir.mk
-include SDK/platform/devices/MKV10Z7/startup/subdir.mk
-include SDK/platform/devices/subdir.mk
-include Generated_Code/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: KV10-Blink.elf secondary-outputs

# Tool invocations
KV10-Blink.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Cross ARM C++ Linker'
	arm-none-eabi-g++ -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -T "/home/ballmik/workspace.kds/KV10-Blink-Step-Bipolar2/Project_Settings/Linker_Files/ProcessorExpert.ld" -Xlinker --gc-sections -L"/home/ballmik/workspace.kds/KV10-Blink-Step-Bipolar2/Project_Settings/Linker_Files" -Wl,-Map,"KV10-Blink.map" -specs=nosys.specs -specs=nano.specs -o "KV10-Blink.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(C++_DEPS)$(OBJS)$(C_DEPS)$(ASM_DEPS)$(CC_DEPS)$(CPP_DEPS)$(CXX_DEPS)$(C_UPPER_DEPS)$(S_UPPER_DEPS) KV10-Blink.elf
	-@echo ' '

secondary-outputs:

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
