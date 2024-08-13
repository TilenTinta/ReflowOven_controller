# Reflow oven controller
An open source controller for convert kitchen toaster oven to reflow oven.<br />

The project consist of PCB and firmware to convert clasic toaste oven to temperature controled oven for PCB reflow.<br />
Oven modes:<br />
- Reflow - follows the predefined temperature curve to optimal reflow PCBs
- Dry - keeps defined temperature for set amount of time (dry components, filaments...)
<br />
Oven used in these build is cheap (40€) 9l toaster oven with two heating elements (quartz heating tube) - BROCK TO9001B.<br />
One of concerns was that it will not be able to heat up quich enough but becouse the heating chaimber is small it can heats up quick enough to fit the requirements. Oven was additionaly isolated.<br />
SSR is used for controlling heating elements and 12V 5A PSU to power the entire electronics. 
<br />

![alt text](https://github.com/TilenTinta/ReflowOven_controller/blob/main/Pictures/IMG_20240811_171814.jpg)
