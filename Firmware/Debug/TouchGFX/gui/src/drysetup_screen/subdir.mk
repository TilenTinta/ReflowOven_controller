################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/gui/src/drysetup_screen/DrySetupPresenter.cpp \
../TouchGFX/gui/src/drysetup_screen/DrySetupView.cpp 

OBJS += \
./TouchGFX/gui/src/drysetup_screen/DrySetupPresenter.o \
./TouchGFX/gui/src/drysetup_screen/DrySetupView.o 

CPP_DEPS += \
./TouchGFX/gui/src/drysetup_screen/DrySetupPresenter.d \
./TouchGFX/gui/src/drysetup_screen/DrySetupView.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/gui/src/drysetup_screen/%.o TouchGFX/gui/src/drysetup_screen/%.su TouchGFX/gui/src/drysetup_screen/%.cyclo: ../TouchGFX/gui/src/drysetup_screen/%.cpp TouchGFX/gui/src/drysetup_screen/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Inc/FLASH" -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Inc/LCD" -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Src/FLASH" -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Src/LCD" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-gui-2f-src-2f-drysetup_screen

clean-TouchGFX-2f-gui-2f-src-2f-drysetup_screen:
	-$(RM) ./TouchGFX/gui/src/drysetup_screen/DrySetupPresenter.cyclo ./TouchGFX/gui/src/drysetup_screen/DrySetupPresenter.d ./TouchGFX/gui/src/drysetup_screen/DrySetupPresenter.o ./TouchGFX/gui/src/drysetup_screen/DrySetupPresenter.su ./TouchGFX/gui/src/drysetup_screen/DrySetupView.cyclo ./TouchGFX/gui/src/drysetup_screen/DrySetupView.d ./TouchGFX/gui/src/drysetup_screen/DrySetupView.o ./TouchGFX/gui/src/drysetup_screen/DrySetupView.su

.PHONY: clean-TouchGFX-2f-gui-2f-src-2f-drysetup_screen

