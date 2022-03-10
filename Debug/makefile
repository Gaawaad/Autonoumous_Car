################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include 01-Source/04-Application/subdir.mk
-include 01-Source/03-Services/SCM/source/subdir.mk
-include 01-Source/02-HAL/11-Ultrasonic/source/subdir.mk
-include 01-Source/02-HAL/10-Servo/source/subdir.mk
-include 01-Source/02-HAL/09-HC-05/source/subdir.mk
-include 01-Source/02-HAL/08-Motor_driver/source/subdir.mk
-include 01-Source/02-HAL/07-SSD_3bits/source/subdir.mk
-include 01-Source/02-HAL/06-LM35/source/subdir.mk
-include 01-Source/02-HAL/05-LCD/source/subdir.mk
-include 01-Source/02-HAL/04-SSD/source/subdir.mk
-include 01-Source/02-HAL/03-Buzzer/source/subdir.mk
-include 01-Source/02-HAL/02-Relay/source/subdir.mk
-include 01-Source/02-HAL/01-Button/source/subdir.mk
-include 01-Source/02-HAL/00-LED/source/subdir.mk
-include 01-Source/01-MCAL/10-TIMER2/source/subdir.mk
-include 01-Source/01-MCAL/09-EEPROM/source/subdir.mk
-include 01-Source/01-MCAL/08-I2C/source/subdir.mk
-include 01-Source/01-MCAL/07-SPI/source/subdir.mk
-include 01-Source/01-MCAL/06-UART/source/subdir.mk
-include 01-Source/01-MCAL/05-PWM1/source/subdir.mk
-include 01-Source/01-MCAL/04-TIMER0/source/subdir.mk
-include 01-Source/01-MCAL/03-ADC/source/subdir.mk
-include 01-Source/01-MCAL/02-GINT/socure/subdir.mk
-include 01-Source/01-MCAL/01\ DIO/source/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Embedded_project.lss \

FLASH_IMAGE += \
Embedded_project.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: Embedded_project.elf secondary-outputs

# Tool invocations
Embedded_project.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Embedded_project.map -mmcu=atmega32 -o "Embedded_project.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Embedded_project.lss: Embedded_project.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Embedded_project.elf  >"Embedded_project.lss"
	@echo 'Finished building: $@'
	@echo ' '

Embedded_project.hex: Embedded_project.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Embedded_project.elf  "Embedded_project.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Embedded_project.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 Embedded_project.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Embedded_project.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
