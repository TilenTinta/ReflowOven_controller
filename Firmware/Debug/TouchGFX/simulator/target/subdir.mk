################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/simulator/target/STM32TouchController.cpp \
../TouchGFX/simulator/target/TouchGFXDataReader.cpp \
../TouchGFX/simulator/target/TouchGFXGPIO.cpp \
../TouchGFX/simulator/target/TouchGFXHAL.cpp 

OBJS += \
./TouchGFX/simulator/target/STM32TouchController.o \
./TouchGFX/simulator/target/TouchGFXDataReader.o \
./TouchGFX/simulator/target/TouchGFXGPIO.o \
./TouchGFX/simulator/target/TouchGFXHAL.o 

CPP_DEPS += \
./TouchGFX/simulator/target/STM32TouchController.d \
./TouchGFX/simulator/target/TouchGFXDataReader.d \
./TouchGFX/simulator/target/TouchGFXGPIO.d \
./TouchGFX/simulator/target/TouchGFXHAL.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/simulator/target/%.o TouchGFX/simulator/target/%.su TouchGFX/simulator/target/%.cyclo: ../TouchGFX/simulator/target/%.cpp TouchGFX/simulator/target/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Inc/FLASH" -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Inc/LCD" -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Src/FLASH" -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Src/LCD" -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-simulator-2f-target

clean-TouchGFX-2f-simulator-2f-target:
	-$(RM) ./TouchGFX/simulator/target/STM32TouchController.cyclo ./TouchGFX/simulator/target/STM32TouchController.d ./TouchGFX/simulator/target/STM32TouchController.o ./TouchGFX/simulator/target/STM32TouchController.su ./TouchGFX/simulator/target/TouchGFXDataReader.cyclo ./TouchGFX/simulator/target/TouchGFXDataReader.d ./TouchGFX/simulator/target/TouchGFXDataReader.o ./TouchGFX/simulator/target/TouchGFXDataReader.su ./TouchGFX/simulator/target/TouchGFXGPIO.cyclo ./TouchGFX/simulator/target/TouchGFXGPIO.d ./TouchGFX/simulator/target/TouchGFXGPIO.o ./TouchGFX/simulator/target/TouchGFXGPIO.su ./TouchGFX/simulator/target/TouchGFXHAL.cyclo ./TouchGFX/simulator/target/TouchGFXHAL.d ./TouchGFX/simulator/target/TouchGFXHAL.o ./TouchGFX/simulator/target/TouchGFXHAL.su

.PHONY: clean-TouchGFX-2f-simulator-2f-target

