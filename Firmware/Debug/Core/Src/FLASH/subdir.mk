################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/FLASH/z_flash_W25QXXX.c 

C_DEPS += \
./Core/Src/FLASH/z_flash_W25QXXX.d 

OBJS += \
./Core/Src/FLASH/z_flash_W25QXXX.o 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/FLASH/%.o Core/Src/FLASH/%.su Core/Src/FLASH/%.cyclo: ../Core/Src/FLASH/%.c Core/Src/FLASH/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Inc/FLASH" -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Inc/LCD" -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Src/FLASH" -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Src/LCD" -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-FLASH

clean-Core-2f-Src-2f-FLASH:
	-$(RM) ./Core/Src/FLASH/z_flash_W25QXXX.cyclo ./Core/Src/FLASH/z_flash_W25QXXX.d ./Core/Src/FLASH/z_flash_W25QXXX.o ./Core/Src/FLASH/z_flash_W25QXXX.su

.PHONY: clean-Core-2f-Src-2f-FLASH

