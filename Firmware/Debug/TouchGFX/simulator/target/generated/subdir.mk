################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/simulator/target/generated/OSWrappers.cpp \
../TouchGFX/simulator/target/generated/STM32DMA.cpp \
../TouchGFX/simulator/target/generated/TouchGFXConfiguration.cpp \
../TouchGFX/simulator/target/generated/TouchGFXGeneratedDataReader.cpp \
../TouchGFX/simulator/target/generated/TouchGFXGeneratedHAL.cpp 

OBJS += \
./TouchGFX/simulator/target/generated/OSWrappers.o \
./TouchGFX/simulator/target/generated/STM32DMA.o \
./TouchGFX/simulator/target/generated/TouchGFXConfiguration.o \
./TouchGFX/simulator/target/generated/TouchGFXGeneratedDataReader.o \
./TouchGFX/simulator/target/generated/TouchGFXGeneratedHAL.o 

CPP_DEPS += \
./TouchGFX/simulator/target/generated/OSWrappers.d \
./TouchGFX/simulator/target/generated/STM32DMA.d \
./TouchGFX/simulator/target/generated/TouchGFXConfiguration.d \
./TouchGFX/simulator/target/generated/TouchGFXGeneratedDataReader.d \
./TouchGFX/simulator/target/generated/TouchGFXGeneratedHAL.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/simulator/target/generated/%.o TouchGFX/simulator/target/generated/%.su TouchGFX/simulator/target/generated/%.cyclo: ../TouchGFX/simulator/target/generated/%.cpp TouchGFX/simulator/target/generated/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Inc/FLASH" -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Inc/LCD" -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Src/FLASH" -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Src/LCD" -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-simulator-2f-target-2f-generated

clean-TouchGFX-2f-simulator-2f-target-2f-generated:
	-$(RM) ./TouchGFX/simulator/target/generated/OSWrappers.cyclo ./TouchGFX/simulator/target/generated/OSWrappers.d ./TouchGFX/simulator/target/generated/OSWrappers.o ./TouchGFX/simulator/target/generated/OSWrappers.su ./TouchGFX/simulator/target/generated/STM32DMA.cyclo ./TouchGFX/simulator/target/generated/STM32DMA.d ./TouchGFX/simulator/target/generated/STM32DMA.o ./TouchGFX/simulator/target/generated/STM32DMA.su ./TouchGFX/simulator/target/generated/TouchGFXConfiguration.cyclo ./TouchGFX/simulator/target/generated/TouchGFXConfiguration.d ./TouchGFX/simulator/target/generated/TouchGFXConfiguration.o ./TouchGFX/simulator/target/generated/TouchGFXConfiguration.su ./TouchGFX/simulator/target/generated/TouchGFXGeneratedDataReader.cyclo ./TouchGFX/simulator/target/generated/TouchGFXGeneratedDataReader.d ./TouchGFX/simulator/target/generated/TouchGFXGeneratedDataReader.o ./TouchGFX/simulator/target/generated/TouchGFXGeneratedDataReader.su ./TouchGFX/simulator/target/generated/TouchGFXGeneratedHAL.cyclo ./TouchGFX/simulator/target/generated/TouchGFXGeneratedHAL.d ./TouchGFX/simulator/target/generated/TouchGFXGeneratedHAL.o ./TouchGFX/simulator/target/generated/TouchGFXGeneratedHAL.su

.PHONY: clean-TouchGFX-2f-simulator-2f-target-2f-generated

