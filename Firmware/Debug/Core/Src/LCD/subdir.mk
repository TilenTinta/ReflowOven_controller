################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/LCD/font12.c \
../Core/Src/LCD/font16.c \
../Core/Src/LCD/font20.c \
../Core/Src/LCD/font24.c \
../Core/Src/LCD/font8.c \
../Core/Src/LCD/z_displ_ILI9XXX.c \
../Core/Src/LCD/z_touch_XPT2046.c 

C_DEPS += \
./Core/Src/LCD/font12.d \
./Core/Src/LCD/font16.d \
./Core/Src/LCD/font20.d \
./Core/Src/LCD/font24.d \
./Core/Src/LCD/font8.d \
./Core/Src/LCD/z_displ_ILI9XXX.d \
./Core/Src/LCD/z_touch_XPT2046.d 

OBJS += \
./Core/Src/LCD/font12.o \
./Core/Src/LCD/font16.o \
./Core/Src/LCD/font20.o \
./Core/Src/LCD/font24.o \
./Core/Src/LCD/font8.o \
./Core/Src/LCD/z_displ_ILI9XXX.o \
./Core/Src/LCD/z_touch_XPT2046.o 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/LCD/%.o Core/Src/LCD/%.su Core/Src/LCD/%.cyclo: ../Core/Src/LCD/%.c Core/Src/LCD/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Inc/FLASH" -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Inc/LCD" -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Src/FLASH" -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Src/LCD" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-LCD

clean-Core-2f-Src-2f-LCD:
	-$(RM) ./Core/Src/LCD/font12.cyclo ./Core/Src/LCD/font12.d ./Core/Src/LCD/font12.o ./Core/Src/LCD/font12.su ./Core/Src/LCD/font16.cyclo ./Core/Src/LCD/font16.d ./Core/Src/LCD/font16.o ./Core/Src/LCD/font16.su ./Core/Src/LCD/font20.cyclo ./Core/Src/LCD/font20.d ./Core/Src/LCD/font20.o ./Core/Src/LCD/font20.su ./Core/Src/LCD/font24.cyclo ./Core/Src/LCD/font24.d ./Core/Src/LCD/font24.o ./Core/Src/LCD/font24.su ./Core/Src/LCD/font8.cyclo ./Core/Src/LCD/font8.d ./Core/Src/LCD/font8.o ./Core/Src/LCD/font8.su ./Core/Src/LCD/z_displ_ILI9XXX.cyclo ./Core/Src/LCD/z_displ_ILI9XXX.d ./Core/Src/LCD/z_displ_ILI9XXX.o ./Core/Src/LCD/z_displ_ILI9XXX.su ./Core/Src/LCD/z_touch_XPT2046.cyclo ./Core/Src/LCD/z_touch_XPT2046.d ./Core/Src/LCD/z_touch_XPT2046.o ./Core/Src/LCD/z_touch_XPT2046.su

.PHONY: clean-Core-2f-Src-2f-LCD

