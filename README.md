# Reflow Oven Controller

An open-source controller for converting a kitchen toaster oven into a reflow oven.

## Overview

This project consists of a PCB and firmware to convert a classic toaster oven into a temperature-controlled oven for PCB reflow.

### Oven Modes
- **Reflow** - Follows a predefined temperature curve for optimal PCB reflow.
- **Dry** - Maintains a defined temperature for a set duration (useful for drying components, filaments, etc.).

The oven used in this build is a budget-friendly (**40€**) **9L toaster oven** with two quartz heating elements (**BROCK TO9001B**). Despite initial concerns about heating speed, the small chamber allows it to reach the required temperatures quickly. The oven has been additionally insulated for improved performance.

A **solid-state relay (SSR)** is used for controlling the heating elements, and a **12V 5A power supply** powers the entire electronics system.

![Reflow Oven](https://github.com/TilenTinta/ReflowOven_controller/blob/main/Pictures/IMG_20240811_171814.jpg)

---

## PCB

The PCB is a **two-layer board** with components on only one side (**except for the LCD connector, which is on the opposite side**). The board has the **same dimensions and mounting hole positions as the LCD**, allowing them to be stacked using a **3D-printed spacer**.

The LCD used in this build is a **3.5-inch TFT LCD Display Module (320x480) with SPI Interface and Touch Screen (ILI9488 v2).**

### PCB Features
- **Safety switch** for 12V
- **Voltage measurement** (input and buck output)
- **Overtemperature protection** via NTC sensor
- **Input protection** (fuse and reverse polarity protection)
- **Max input voltage: 23V**
- **AUX1 and AUX2** (can handle up to 45V and 500mA, but limited by PCB input voltage)
- **Supports up to two solid-state relays (SSRs)** (PWM amplitude matches input voltage)
- **Supports up to two K-type thermocouples (MAX31855)**
- **Raw USART output & USB output (CH340G)** for monitoring and calibration
- **USB OTG support** (requires core clock adjustment, affecting timer parameters)
- **External 2MB flash (W25Q16JVSNIQ)** for GUI and fonts
- **SWD port** for programming
- **Buzzer**
- **MCU: STM32F411CEU6**

![PCB 3D View](https://github.com/TilenTinta/ReflowOven_controller/blob/main/PCB/Pictures/3D_View2.PNG)

![PCB 3D View](https://github.com/TilenTinta/ReflowOven_controller/blob/main/PCB/Pictures/3D_View1.PNG)

---

## 3D Models

All parts are printed from **PC plastic** using an **FDM 3D printer**. Alternative plastics can be used, but they must withstand high temperatures. The models do not require supports for printing.

![3D Model](https://github.com/TilenTinta/ReflowOven_controller/blob/main/3D_Model/Pictures/3D_Model1.PNG)

---

## External Loader

The **External Loader** is a necessary part of the program. It allows **CubeIDE** to upload data (GUI and fonts) to the external flash chip. If you use a different flash chip, modifications are required to meet the new chip's recommendations. The loader program must be included in the main firmware/IDE.

---

## Firmware

The firmware is not fully compatible with the latest version of the PCB. This update addresses mistakes found in the initial version of the board.

### Missing Features
- **Read input voltage**
- **Read buck voltage**
- **Read NTC sensor**
- **Safety switch** (implemented in code but not tested)

For the GUI, **TouchGFX** with standard elements is used. The only custom file is the **background**.

### External Libraries Used
The libraries for **LCD (with touch)** and **external flash (External Loader)** are not originally written by me but include minor modifications to fit this build. The original work was done by **maudeve-it**:

#### LCD Library:
- [YouTube Video](https://www.youtube.com/watch?v=g1siKaPox88)
- [GitHub Repository](https://github.com/maudeve-it/ILI9XXX-XPT2046-STM32)

#### Flash Library:
- [YouTube Video 1](https://www.youtube.com/watch?v=PO_2ZE1NQF0&list=PL6Fwy7aR3zSlZO3OBppHSzDacE4CGgRqO&index=6)
- [YouTube Video 2](https://www.youtube.com/watch?v=KlG2doCkREM)
- [GitHub Repository](https://github.com/maudeve-it/W25Qxxx_SPI_FLASH_STM32)

---

## License
This project is open-source and available under the **MIT License**.

---

## Contributing
Contributions are welcome! Feel free to submit issues or pull requests to improve the project.

---

