################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/CacheableContainer.cpp \
../Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/Container.cpp \
../Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/ListLayout.cpp \
../Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/ModalWindow.cpp \
../Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/ScrollableContainer.cpp \
../Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/SlideMenu.cpp \
../Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/Slider.cpp \
../Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/SwipeContainer.cpp \
../Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/ZoomAnimationImage.cpp 

OBJS += \
./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/CacheableContainer.o \
./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/Container.o \
./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/ListLayout.o \
./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/ModalWindow.o \
./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/ScrollableContainer.o \
./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/SlideMenu.o \
./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/Slider.o \
./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/SwipeContainer.o \
./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/ZoomAnimationImage.o 

CPP_DEPS += \
./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/CacheableContainer.d \
./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/Container.d \
./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/ListLayout.d \
./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/ModalWindow.d \
./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/ScrollableContainer.d \
./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/SlideMenu.d \
./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/Slider.d \
./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/SwipeContainer.d \
./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/ZoomAnimationImage.d 


# Each subdirectory must supply rules for building sources it contributes
Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/%.o Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/%.su Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/%.cyclo: ../Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/%.cpp Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Inc/FLASH" -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Inc/LCD" -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Src/FLASH" -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Src/LCD" -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Middlewares-2f-ST-2f-touchgfx_backup-2f-framework-2f-source-2f-touchgfx-2f-containers

clean-Middlewares-2f-ST-2f-touchgfx_backup-2f-framework-2f-source-2f-touchgfx-2f-containers:
	-$(RM) ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/CacheableContainer.cyclo ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/CacheableContainer.d ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/CacheableContainer.o ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/CacheableContainer.su ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/Container.cyclo ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/Container.d ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/Container.o ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/Container.su ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/ListLayout.cyclo ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/ListLayout.d ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/ListLayout.o ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/ListLayout.su ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/ModalWindow.cyclo ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/ModalWindow.d ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/ModalWindow.o ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/ModalWindow.su ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/ScrollableContainer.cyclo ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/ScrollableContainer.d ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/ScrollableContainer.o ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/ScrollableContainer.su ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/SlideMenu.cyclo ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/SlideMenu.d ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/SlideMenu.o ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/SlideMenu.su ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/Slider.cyclo ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/Slider.d ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/Slider.o ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/Slider.su ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/SwipeContainer.cyclo ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/SwipeContainer.d ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/SwipeContainer.o ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/SwipeContainer.su ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/ZoomAnimationImage.cyclo ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/ZoomAnimationImage.d ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/ZoomAnimationImage.o ./Middlewares/ST/touchgfx_backup/framework/source/touchgfx/containers/ZoomAnimationImage.su

.PHONY: clean-Middlewares-2f-ST-2f-touchgfx_backup-2f-framework-2f-source-2f-touchgfx-2f-containers

