# Firmware
Firmware is now fully compatible with last version of PCB. Reason for there are some mistakes that were on firs version of board.
Missing features are: read input voltage, read buck voltage, read NTC sensor, safety switch (implemented in code but not tested).
For GUI i used TouchGFX with standard elements. The only custom file is background.

The library for LCD (with touch) and external flash (External Loader) are not mine even though there 
are some minor modifications in them to fit my build. There are writen by maudeve-it (https://github.com/maudeve-it).
Bellow are all the links to used components in my firmware and how to implement them.

LCD Library:
Youtube video: https://www.youtube.com/watch?v=g1siKaPox88
Github: https://github.com/maudeve-it/ILI9XXX-XPT2046-STM32

Flash Library:
Youtube video: https://www.youtube.com/watch?v=PO_2ZE1NQF0&list=PL6Fwy7aR3zSlZO3OBppHSzDacE4CGgRqO&index=6
Youtube video: https://www.youtube.com/watch?v=KlG2doCkREM
Github: https://github.com/maudeve-it/W25Qxxx_SPI_FLASH_STM32

