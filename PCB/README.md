# PCB
PCB is two layer board with components on only one side (connector for the LCD is the only part on other side). 
It is the same size and the holes are in the same position as LCD. With 3D printed spacer can be connected together.
LCD used in these build is 3.5 inch TFT LCD Display Module (320x480) with SPI Interface and Touch Screen - ILI9488 v2<br />
PCB features are:<br />
- Safety switch for 12V
- Voltage measuring: input and buck output
- PCB temperature: NTC for overtemperature protection
- input protection: fuse and reverse polarity protected
- max. input voltage: 23V
- AUX1 and AUX2 can handle up to 45V (can't be achived becouse of PCB input voltage limit), 500mA
- up to two solid state relays - PWM amplitude is the same as input voltage
- up to two K-type thermocouple (MAX31855)
- for calibration and monitoring is available raw USART output and USB output (CH340G)
- supports USB OTG - in case of enabling that function the core clock must be changed and with that all timers parameters
- external 2MB flash (W25Q16JVSNIQ) for all GUI and fonts
- SWD for programming 
- Buzzer
- MCU: STM32F411CEU6

![alt text](https://github.com/TilenTinta/ReflowOven_controller/blob/main/PCB/Pictures/3D_View2.PNG)

![alt text](https://github.com/TilenTinta/ReflowOven_controller/blob/main/PCB/Pictures/3D_View1.PNG)

