################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32F1xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
Project\ 01\ LED\ Test.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Project\ 01\ LED\ Test.list \

OBJCOPY_BIN += \
Project\ 01\ LED\ Test.bin \


# All Target
all: Project\ 01\ LED\ Test.elf secondary-outputs

# Tool invocations
Project\ 01\ LED\ Test.elf: $(OBJS) $(USER_OBJS) D:\Hobby\ projects\STM32F103C8-Projects\STM32Cube\ IDE\ Based\ Projects\STM32F103C8TX_FLASH.ld
	arm-none-eabi-gcc -o "Project 01 LED Test.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"D:\Hobby projects\STM32F103C8-Projects\STM32Cube IDE Based Projects\STM32F103C8TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="Project 01 LED Test.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Project\ 01\ LED\ Test.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Project 01 LED Test.list"
	@echo 'Finished building: $@'
	@echo ' '

Project\ 01\ LED\ Test.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "Project 01 LED Test.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
