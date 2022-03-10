################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../01-Source/02-HAL/02-Relay/source/Relay.c 

OBJS += \
./01-Source/02-HAL/02-Relay/source/Relay.o 

C_DEPS += \
./01-Source/02-HAL/02-Relay/source/Relay.d 


# Each subdirectory must supply rules for building sources it contributes
01-Source/02-HAL/02-Relay/source/%.o: ../01-Source/02-HAL/02-Relay/source/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"F:\Eclipse2\Embedded_project\01-Source\01-MCAL\10-TIMER2\include" -I"F:\Eclipse2\Embedded_project\01-Source\02-HAL\11-Ultrasonic\include" -I"F:\Eclipse2\Embedded_project\01-Source\03-Services\SCM\include" -I"F:\Eclipse2\Embedded_project\01-Source\02-HAL\11-Ultrasonic\include" -I"F:\Eclipse2\Embedded_project\01-Source\02-HAL\10-Servo\include" -I"F:\Eclipse2\Embedded_project\01-Source\02-HAL\09-HC-05\include" -I"F:\Eclipse2\Embedded_project\01-Source\01-MCAL\01 DIO\include" -I"F:\Eclipse2\Embedded_project\01-Source\01-MCAL\05-PWM1\include" -I"F:\Eclipse2\Embedded_project\01-Source\01-MCAL\09-EEPROM\include" -I"F:\Eclipse2\Embedded_project\01-Source\01-MCAL\08-I2C\include" -I"F:\Eclipse2\Embedded_project\01-Source\01-MCAL\07-SPI\include" -I"F:\Eclipse2\Embedded_project\01-Source\01-MCAL\06-UART\include" -I"F:\Eclipse2\Embedded_project\01-Source\01-MCAL\04-TIMER0\include" -I"F:\Eclipse2\Embedded_project\01-Source\02-HAL\08-Motor_driver\include" -I"F:\Eclipse2\Embedded_project\01-Source\00-lib" -I"F:\Eclipse2\Embedded_project\01-Source\02-HAL\07-SSD_3bits\include" -I"F:\Eclipse2\Embedded_project\01-Source\02-HAL\06-LM35\include" -I"F:\Eclipse2\Embedded_project\01-Source\01-MCAL\03-ADC\include" -I"F:\Eclipse2\Embedded_project\01-Source\01-MCAL\03-ADC\include" -I"F:\Eclipse2\Embedded_project\01-Source\01-MCAL\02-GINT\include" -I"F:\Eclipse2\Embedded_project\01-Source\02-HAL\05-LCD\include" -I"F:\Eclipse2\Embedded_project\01-Source\02-HAL\04-SSD\include" -I"F:\Eclipse2\Embedded_project\01-Source\02-HAL\01-Button\include" -I"F:\Eclipse2\Embedded_project\01-Source\02-HAL\00-LED\include" -I"F:\Eclipse2\Embedded_project\01-Source\02-HAL\02-Relay\include" -I"F:\Eclipse2\Embedded_project\01-Source\02-HAL\03-Buzzer\include" -Wall -g2 -gstabs -O2 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


