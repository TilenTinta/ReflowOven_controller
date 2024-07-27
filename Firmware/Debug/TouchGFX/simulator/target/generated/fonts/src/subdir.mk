################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/simulator/target/generated/fonts/src/ApplicationFontProvider.cpp \
../TouchGFX/simulator/target/generated/fonts/src/CachedFont.cpp \
../TouchGFX/simulator/target/generated/fonts/src/FontCache.cpp \
../TouchGFX/simulator/target/generated/fonts/src/Font_verdana_10_4bpp_0.cpp \
../TouchGFX/simulator/target/generated/fonts/src/Font_verdana_20_4bpp_0.cpp \
../TouchGFX/simulator/target/generated/fonts/src/Font_verdana_25_4bpp_0.cpp \
../TouchGFX/simulator/target/generated/fonts/src/Font_verdana_40_4bpp_0.cpp \
../TouchGFX/simulator/target/generated/fonts/src/GeneratedFont.cpp \
../TouchGFX/simulator/target/generated/fonts/src/Kerning_verdana_10_4bpp.cpp \
../TouchGFX/simulator/target/generated/fonts/src/Kerning_verdana_20_4bpp.cpp \
../TouchGFX/simulator/target/generated/fonts/src/Kerning_verdana_25_4bpp.cpp \
../TouchGFX/simulator/target/generated/fonts/src/Kerning_verdana_40_4bpp.cpp \
../TouchGFX/simulator/target/generated/fonts/src/Table_verdana_10_4bpp.cpp \
../TouchGFX/simulator/target/generated/fonts/src/Table_verdana_20_4bpp.cpp \
../TouchGFX/simulator/target/generated/fonts/src/Table_verdana_25_4bpp.cpp \
../TouchGFX/simulator/target/generated/fonts/src/Table_verdana_40_4bpp.cpp \
../TouchGFX/simulator/target/generated/fonts/src/UnmappedDataFont.cpp \
../TouchGFX/simulator/target/generated/fonts/src/VectorFontRendererBuffers.cpp 

OBJS += \
./TouchGFX/simulator/target/generated/fonts/src/ApplicationFontProvider.o \
./TouchGFX/simulator/target/generated/fonts/src/CachedFont.o \
./TouchGFX/simulator/target/generated/fonts/src/FontCache.o \
./TouchGFX/simulator/target/generated/fonts/src/Font_verdana_10_4bpp_0.o \
./TouchGFX/simulator/target/generated/fonts/src/Font_verdana_20_4bpp_0.o \
./TouchGFX/simulator/target/generated/fonts/src/Font_verdana_25_4bpp_0.o \
./TouchGFX/simulator/target/generated/fonts/src/Font_verdana_40_4bpp_0.o \
./TouchGFX/simulator/target/generated/fonts/src/GeneratedFont.o \
./TouchGFX/simulator/target/generated/fonts/src/Kerning_verdana_10_4bpp.o \
./TouchGFX/simulator/target/generated/fonts/src/Kerning_verdana_20_4bpp.o \
./TouchGFX/simulator/target/generated/fonts/src/Kerning_verdana_25_4bpp.o \
./TouchGFX/simulator/target/generated/fonts/src/Kerning_verdana_40_4bpp.o \
./TouchGFX/simulator/target/generated/fonts/src/Table_verdana_10_4bpp.o \
./TouchGFX/simulator/target/generated/fonts/src/Table_verdana_20_4bpp.o \
./TouchGFX/simulator/target/generated/fonts/src/Table_verdana_25_4bpp.o \
./TouchGFX/simulator/target/generated/fonts/src/Table_verdana_40_4bpp.o \
./TouchGFX/simulator/target/generated/fonts/src/UnmappedDataFont.o \
./TouchGFX/simulator/target/generated/fonts/src/VectorFontRendererBuffers.o 

CPP_DEPS += \
./TouchGFX/simulator/target/generated/fonts/src/ApplicationFontProvider.d \
./TouchGFX/simulator/target/generated/fonts/src/CachedFont.d \
./TouchGFX/simulator/target/generated/fonts/src/FontCache.d \
./TouchGFX/simulator/target/generated/fonts/src/Font_verdana_10_4bpp_0.d \
./TouchGFX/simulator/target/generated/fonts/src/Font_verdana_20_4bpp_0.d \
./TouchGFX/simulator/target/generated/fonts/src/Font_verdana_25_4bpp_0.d \
./TouchGFX/simulator/target/generated/fonts/src/Font_verdana_40_4bpp_0.d \
./TouchGFX/simulator/target/generated/fonts/src/GeneratedFont.d \
./TouchGFX/simulator/target/generated/fonts/src/Kerning_verdana_10_4bpp.d \
./TouchGFX/simulator/target/generated/fonts/src/Kerning_verdana_20_4bpp.d \
./TouchGFX/simulator/target/generated/fonts/src/Kerning_verdana_25_4bpp.d \
./TouchGFX/simulator/target/generated/fonts/src/Kerning_verdana_40_4bpp.d \
./TouchGFX/simulator/target/generated/fonts/src/Table_verdana_10_4bpp.d \
./TouchGFX/simulator/target/generated/fonts/src/Table_verdana_20_4bpp.d \
./TouchGFX/simulator/target/generated/fonts/src/Table_verdana_25_4bpp.d \
./TouchGFX/simulator/target/generated/fonts/src/Table_verdana_40_4bpp.d \
./TouchGFX/simulator/target/generated/fonts/src/UnmappedDataFont.d \
./TouchGFX/simulator/target/generated/fonts/src/VectorFontRendererBuffers.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/simulator/target/generated/fonts/src/%.o TouchGFX/simulator/target/generated/fonts/src/%.su TouchGFX/simulator/target/generated/fonts/src/%.cyclo: ../TouchGFX/simulator/target/generated/fonts/src/%.cpp TouchGFX/simulator/target/generated/fonts/src/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Inc/FLASH" -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Inc/LCD" -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Src/FLASH" -I"C:/DATA/Projects/Reflow_oven/ReflowOven_controller/Firmware/Core/Src/LCD" -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-simulator-2f-target-2f-generated-2f-fonts-2f-src

clean-TouchGFX-2f-simulator-2f-target-2f-generated-2f-fonts-2f-src:
	-$(RM) ./TouchGFX/simulator/target/generated/fonts/src/ApplicationFontProvider.cyclo ./TouchGFX/simulator/target/generated/fonts/src/ApplicationFontProvider.d ./TouchGFX/simulator/target/generated/fonts/src/ApplicationFontProvider.o ./TouchGFX/simulator/target/generated/fonts/src/ApplicationFontProvider.su ./TouchGFX/simulator/target/generated/fonts/src/CachedFont.cyclo ./TouchGFX/simulator/target/generated/fonts/src/CachedFont.d ./TouchGFX/simulator/target/generated/fonts/src/CachedFont.o ./TouchGFX/simulator/target/generated/fonts/src/CachedFont.su ./TouchGFX/simulator/target/generated/fonts/src/FontCache.cyclo ./TouchGFX/simulator/target/generated/fonts/src/FontCache.d ./TouchGFX/simulator/target/generated/fonts/src/FontCache.o ./TouchGFX/simulator/target/generated/fonts/src/FontCache.su ./TouchGFX/simulator/target/generated/fonts/src/Font_verdana_10_4bpp_0.cyclo ./TouchGFX/simulator/target/generated/fonts/src/Font_verdana_10_4bpp_0.d ./TouchGFX/simulator/target/generated/fonts/src/Font_verdana_10_4bpp_0.o ./TouchGFX/simulator/target/generated/fonts/src/Font_verdana_10_4bpp_0.su ./TouchGFX/simulator/target/generated/fonts/src/Font_verdana_20_4bpp_0.cyclo ./TouchGFX/simulator/target/generated/fonts/src/Font_verdana_20_4bpp_0.d ./TouchGFX/simulator/target/generated/fonts/src/Font_verdana_20_4bpp_0.o ./TouchGFX/simulator/target/generated/fonts/src/Font_verdana_20_4bpp_0.su ./TouchGFX/simulator/target/generated/fonts/src/Font_verdana_25_4bpp_0.cyclo ./TouchGFX/simulator/target/generated/fonts/src/Font_verdana_25_4bpp_0.d ./TouchGFX/simulator/target/generated/fonts/src/Font_verdana_25_4bpp_0.o ./TouchGFX/simulator/target/generated/fonts/src/Font_verdana_25_4bpp_0.su ./TouchGFX/simulator/target/generated/fonts/src/Font_verdana_40_4bpp_0.cyclo ./TouchGFX/simulator/target/generated/fonts/src/Font_verdana_40_4bpp_0.d ./TouchGFX/simulator/target/generated/fonts/src/Font_verdana_40_4bpp_0.o ./TouchGFX/simulator/target/generated/fonts/src/Font_verdana_40_4bpp_0.su ./TouchGFX/simulator/target/generated/fonts/src/GeneratedFont.cyclo ./TouchGFX/simulator/target/generated/fonts/src/GeneratedFont.d ./TouchGFX/simulator/target/generated/fonts/src/GeneratedFont.o ./TouchGFX/simulator/target/generated/fonts/src/GeneratedFont.su ./TouchGFX/simulator/target/generated/fonts/src/Kerning_verdana_10_4bpp.cyclo ./TouchGFX/simulator/target/generated/fonts/src/Kerning_verdana_10_4bpp.d ./TouchGFX/simulator/target/generated/fonts/src/Kerning_verdana_10_4bpp.o ./TouchGFX/simulator/target/generated/fonts/src/Kerning_verdana_10_4bpp.su ./TouchGFX/simulator/target/generated/fonts/src/Kerning_verdana_20_4bpp.cyclo ./TouchGFX/simulator/target/generated/fonts/src/Kerning_verdana_20_4bpp.d ./TouchGFX/simulator/target/generated/fonts/src/Kerning_verdana_20_4bpp.o ./TouchGFX/simulator/target/generated/fonts/src/Kerning_verdana_20_4bpp.su ./TouchGFX/simulator/target/generated/fonts/src/Kerning_verdana_25_4bpp.cyclo ./TouchGFX/simulator/target/generated/fonts/src/Kerning_verdana_25_4bpp.d ./TouchGFX/simulator/target/generated/fonts/src/Kerning_verdana_25_4bpp.o ./TouchGFX/simulator/target/generated/fonts/src/Kerning_verdana_25_4bpp.su ./TouchGFX/simulator/target/generated/fonts/src/Kerning_verdana_40_4bpp.cyclo ./TouchGFX/simulator/target/generated/fonts/src/Kerning_verdana_40_4bpp.d ./TouchGFX/simulator/target/generated/fonts/src/Kerning_verdana_40_4bpp.o ./TouchGFX/simulator/target/generated/fonts/src/Kerning_verdana_40_4bpp.su ./TouchGFX/simulator/target/generated/fonts/src/Table_verdana_10_4bpp.cyclo ./TouchGFX/simulator/target/generated/fonts/src/Table_verdana_10_4bpp.d ./TouchGFX/simulator/target/generated/fonts/src/Table_verdana_10_4bpp.o ./TouchGFX/simulator/target/generated/fonts/src/Table_verdana_10_4bpp.su ./TouchGFX/simulator/target/generated/fonts/src/Table_verdana_20_4bpp.cyclo ./TouchGFX/simulator/target/generated/fonts/src/Table_verdana_20_4bpp.d ./TouchGFX/simulator/target/generated/fonts/src/Table_verdana_20_4bpp.o ./TouchGFX/simulator/target/generated/fonts/src/Table_verdana_20_4bpp.su ./TouchGFX/simulator/target/generated/fonts/src/Table_verdana_25_4bpp.cyclo ./TouchGFX/simulator/target/generated/fonts/src/Table_verdana_25_4bpp.d ./TouchGFX/simulator/target/generated/fonts/src/Table_verdana_25_4bpp.o ./TouchGFX/simulator/target/generated/fonts/src/Table_verdana_25_4bpp.su ./TouchGFX/simulator/target/generated/fonts/src/Table_verdana_40_4bpp.cyclo ./TouchGFX/simulator/target/generated/fonts/src/Table_verdana_40_4bpp.d ./TouchGFX/simulator/target/generated/fonts/src/Table_verdana_40_4bpp.o ./TouchGFX/simulator/target/generated/fonts/src/Table_verdana_40_4bpp.su ./TouchGFX/simulator/target/generated/fonts/src/UnmappedDataFont.cyclo ./TouchGFX/simulator/target/generated/fonts/src/UnmappedDataFont.d ./TouchGFX/simulator/target/generated/fonts/src/UnmappedDataFont.o ./TouchGFX/simulator/target/generated/fonts/src/UnmappedDataFont.su ./TouchGFX/simulator/target/generated/fonts/src/VectorFontRendererBuffers.cyclo ./TouchGFX/simulator/target/generated/fonts/src/VectorFontRendererBuffers.d ./TouchGFX/simulator/target/generated/fonts/src/VectorFontRendererBuffers.o ./TouchGFX/simulator/target/generated/fonts/src/VectorFontRendererBuffers.su

.PHONY: clean-TouchGFX-2f-simulator-2f-target-2f-generated-2f-fonts-2f-src

