# PCB
PCB is two layer board with components on only one side (connector for the LCD is the only part on other side). 
It is the same size and the holes are in the same position as LCD. With 3D printed spacer can be connected together.
LCD used in these build is 3.5 inch TFT LCD Display Module (320x480) with SPI Interface and Touch Screen - ILI9488 v2
PCB features are:
- Safety switch for 12V
- measuring of voltage on input and buck output
- measuring of PCB temperature with NTC for overtemperature protection
- input is fuse protected and reverse polarity protected
- max. input voltage is 23V
- AUX1 and AUX2 can handle up to 45V (can't be achived becouse of PCB input voltage limit) and 500mA
- supports connection of two solid state relays that are PWM driven with input voltage
- supports up to two K-type thermocouple (MAX31855)
- for calibration and monitoring is available raw USART output and USB output (CH340G)
- all GUI and fonts are saved on external 2MB flash (W25Q16JVSNIQ)
- PCB supports USB OTG but in case of enabling that function the core clock must be changed and with that all timers parameters
- SWO (jtag) is available for programing 
- Buzzer for sound signals
- MCU used: STM32F411CEU6

![alt text](https://github.com/TilenTinta/ReflowOven_controller/PCB/Pictures/3D_View2.PNG)

![alt text](https://github.com/TilenTinta/ReflowOven_controller/PCB/Pictures/3D_View1.PNG)

