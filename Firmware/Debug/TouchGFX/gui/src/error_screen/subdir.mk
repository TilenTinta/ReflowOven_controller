################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/gui/src/error_screen/ErrorPresenter.cpp \
../TouchGFX/gui/src/error_screen/ErrorView.cpp 

OBJS += \
./TouchGFX/gui/src/error_screen/ErrorPresenter.o \
./TouchGFX/gui/src/error_screen/ErrorView.o 

CPP_DEPS += \
./TouchGFX/gui/src/error_screen/ErrorPresenter.d \
./TouchGFX/gui/src/error_screen/ErrorView.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/gui/src/error_screen/%.o TouchGFX/gui/src/error_screen/%.su TouchGFX/gui/src/error_screen/%.cyclo: ../TouchGFX/gui/src/error_screen/%.cpp TouchGFX/gui/src/error_screen/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Inc/FLASH" -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Inc/LCD" -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Src/FLASH" -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Src/LCD" -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-gui-2f-src-2f-error_screen

clean-TouchGFX-2f-gui-2f-src-2f-error_screen:
	-$(RM) ./TouchGFX/gui/src/error_screen/ErrorPresenter.cyclo ./TouchGFX/gui/src/error_screen/ErrorPresenter.d ./TouchGFX/gui/src/error_screen/ErrorPresenter.o ./TouchGFX/gui/src/error_screen/ErrorPresenter.su ./TouchGFX/gui/src/error_screen/ErrorView.cyclo ./TouchGFX/gui/src/error_screen/ErrorView.d ./TouchGFX/gui/src/error_screen/ErrorView.o ./TouchGFX/gui/src/error_screen/ErrorView.su

.PHONY: clean-TouchGFX-2f-gui-2f-src-2f-error_screen

