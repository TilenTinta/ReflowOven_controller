################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/simulator/target/generated/gui_generated/src/settings_screen/SettingsViewBase.cpp 

OBJS += \
./TouchGFX/simulator/target/generated/gui_generated/src/settings_screen/SettingsViewBase.o 

CPP_DEPS += \
./TouchGFX/simulator/target/generated/gui_generated/src/settings_screen/SettingsViewBase.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/simulator/target/generated/gui_generated/src/settings_screen/%.o TouchGFX/simulator/target/generated/gui_generated/src/settings_screen/%.su TouchGFX/simulator/target/generated/gui_generated/src/settings_screen/%.cyclo: ../TouchGFX/simulator/target/generated/gui_generated/src/settings_screen/%.cpp TouchGFX/simulator/target/generated/gui_generated/src/settings_screen/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Inc/FLASH" -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Inc/LCD" -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Src/FLASH" -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Src/LCD" -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-simulator-2f-target-2f-generated-2f-gui_generated-2f-src-2f-settings_screen

clean-TouchGFX-2f-simulator-2f-target-2f-generated-2f-gui_generated-2f-src-2f-settings_screen:
	-$(RM) ./TouchGFX/simulator/target/generated/gui_generated/src/settings_screen/SettingsViewBase.cyclo ./TouchGFX/simulator/target/generated/gui_generated/src/settings_screen/SettingsViewBase.d ./TouchGFX/simulator/target/generated/gui_generated/src/settings_screen/SettingsViewBase.o ./TouchGFX/simulator/target/generated/gui_generated/src/settings_screen/SettingsViewBase.su

.PHONY: clean-TouchGFX-2f-simulator-2f-target-2f-generated-2f-gui_generated-2f-src-2f-settings_screen
