################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/generated/images/src/__generated/image_alternate_theme_images_backgrounds_240x240_shattered_rain_dark.cpp \
../TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_36_large_round_action.cpp \
../TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_36_tiny_round_action.cpp \
../TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_36_tiny_round_pressed.cpp 

OBJS += \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_backgrounds_240x240_shattered_rain_dark.o \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_36_large_round_action.o \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_36_tiny_round_action.o \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_36_tiny_round_pressed.o 

CPP_DEPS += \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_backgrounds_240x240_shattered_rain_dark.d \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_36_large_round_action.d \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_36_tiny_round_action.d \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_36_tiny_round_pressed.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/generated/images/src/__generated/%.o TouchGFX/generated/images/src/__generated/%.su TouchGFX/generated/images/src/__generated/%.cyclo: ../TouchGFX/generated/images/src/__generated/%.cpp TouchGFX/generated/images/src/__generated/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Inc/FLASH" -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Inc/LCD" -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Src/FLASH" -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Src/LCD" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-generated-2f-images-2f-src-2f-__generated

clean-TouchGFX-2f-generated-2f-images-2f-src-2f-__generated:
	-$(RM) ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_backgrounds_240x240_shattered_rain_dark.cyclo ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_backgrounds_240x240_shattered_rain_dark.d ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_backgrounds_240x240_shattered_rain_dark.o ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_backgrounds_240x240_shattered_rain_dark.su ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_36_large_round_action.cyclo ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_36_large_round_action.d ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_36_large_round_action.o ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_36_large_round_action.su ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_36_tiny_round_action.cyclo ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_36_tiny_round_action.d ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_36_tiny_round_action.o ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_36_tiny_round_action.su ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_36_tiny_round_pressed.cyclo ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_36_tiny_round_pressed.d ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_36_tiny_round_pressed.o ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_36_tiny_round_pressed.su

.PHONY: clean-TouchGFX-2f-generated-2f-images-2f-src-2f-__generated

