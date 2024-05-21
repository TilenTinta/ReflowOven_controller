################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/generated/images/src/BitmapDatabase.cpp \
../TouchGFX/generated/images/src/SVGDatabase.cpp \
../TouchGFX/generated/images/src/image_bg.cpp \
../TouchGFX/generated/images/src/image_counter_box.cpp \
../TouchGFX/generated/images/src/image_down_btn.cpp \
../TouchGFX/generated/images/src/image_down_btn_disabled.cpp \
../TouchGFX/generated/images/src/image_down_btn_pressed.cpp \
../TouchGFX/generated/images/src/image_up_btn.cpp \
../TouchGFX/generated/images/src/image_up_btn_disabled.cpp \
../TouchGFX/generated/images/src/image_up_btn_pressed.cpp 

OBJS += \
./TouchGFX/generated/images/src/BitmapDatabase.o \
./TouchGFX/generated/images/src/SVGDatabase.o \
./TouchGFX/generated/images/src/image_bg.o \
./TouchGFX/generated/images/src/image_counter_box.o \
./TouchGFX/generated/images/src/image_down_btn.o \
./TouchGFX/generated/images/src/image_down_btn_disabled.o \
./TouchGFX/generated/images/src/image_down_btn_pressed.o \
./TouchGFX/generated/images/src/image_up_btn.o \
./TouchGFX/generated/images/src/image_up_btn_disabled.o \
./TouchGFX/generated/images/src/image_up_btn_pressed.o 

CPP_DEPS += \
./TouchGFX/generated/images/src/BitmapDatabase.d \
./TouchGFX/generated/images/src/SVGDatabase.d \
./TouchGFX/generated/images/src/image_bg.d \
./TouchGFX/generated/images/src/image_counter_box.d \
./TouchGFX/generated/images/src/image_down_btn.d \
./TouchGFX/generated/images/src/image_down_btn_disabled.d \
./TouchGFX/generated/images/src/image_down_btn_pressed.d \
./TouchGFX/generated/images/src/image_up_btn.d \
./TouchGFX/generated/images/src/image_up_btn_disabled.d \
./TouchGFX/generated/images/src/image_up_btn_pressed.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/generated/images/src/%.o TouchGFX/generated/images/src/%.su TouchGFX/generated/images/src/%.cyclo: ../TouchGFX/generated/images/src/%.cpp TouchGFX/generated/images/src/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-generated-2f-images-2f-src

clean-TouchGFX-2f-generated-2f-images-2f-src:
	-$(RM) ./TouchGFX/generated/images/src/BitmapDatabase.cyclo ./TouchGFX/generated/images/src/BitmapDatabase.d ./TouchGFX/generated/images/src/BitmapDatabase.o ./TouchGFX/generated/images/src/BitmapDatabase.su ./TouchGFX/generated/images/src/SVGDatabase.cyclo ./TouchGFX/generated/images/src/SVGDatabase.d ./TouchGFX/generated/images/src/SVGDatabase.o ./TouchGFX/generated/images/src/SVGDatabase.su ./TouchGFX/generated/images/src/image_bg.cyclo ./TouchGFX/generated/images/src/image_bg.d ./TouchGFX/generated/images/src/image_bg.o ./TouchGFX/generated/images/src/image_bg.su ./TouchGFX/generated/images/src/image_counter_box.cyclo ./TouchGFX/generated/images/src/image_counter_box.d ./TouchGFX/generated/images/src/image_counter_box.o ./TouchGFX/generated/images/src/image_counter_box.su ./TouchGFX/generated/images/src/image_down_btn.cyclo ./TouchGFX/generated/images/src/image_down_btn.d ./TouchGFX/generated/images/src/image_down_btn.o ./TouchGFX/generated/images/src/image_down_btn.su ./TouchGFX/generated/images/src/image_down_btn_disabled.cyclo ./TouchGFX/generated/images/src/image_down_btn_disabled.d ./TouchGFX/generated/images/src/image_down_btn_disabled.o ./TouchGFX/generated/images/src/image_down_btn_disabled.su ./TouchGFX/generated/images/src/image_down_btn_pressed.cyclo ./TouchGFX/generated/images/src/image_down_btn_pressed.d ./TouchGFX/generated/images/src/image_down_btn_pressed.o ./TouchGFX/generated/images/src/image_down_btn_pressed.su ./TouchGFX/generated/images/src/image_up_btn.cyclo ./TouchGFX/generated/images/src/image_up_btn.d ./TouchGFX/generated/images/src/image_up_btn.o ./TouchGFX/generated/images/src/image_up_btn.su ./TouchGFX/generated/images/src/image_up_btn_disabled.cyclo ./TouchGFX/generated/images/src/image_up_btn_disabled.d ./TouchGFX/generated/images/src/image_up_btn_disabled.o ./TouchGFX/generated/images/src/image_up_btn_disabled.su ./TouchGFX/generated/images/src/image_up_btn_pressed.cyclo ./TouchGFX/generated/images/src/image_up_btn_pressed.d ./TouchGFX/generated/images/src/image_up_btn_pressed.o ./TouchGFX/generated/images/src/image_up_btn_pressed.su

.PHONY: clean-TouchGFX-2f-generated-2f-images-2f-src

