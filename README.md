# Build Instructions for Second Factor Keypad

## Table of Contents
1. [Introduction](#introduction)
2. [Bill of Materials](#bill-of-materials)
3. [Arduino IDE Configuration](#arduino-ide-configuration)
4. [Soldering and Assembly](#soldering-and-assembly)
5. [Serial Connection](#serial-connection)
6. [Power Up](#power-up)
7. [Testing](#testing)


### Introduction
The 12-Button Matrix Keypad uses a matrix of switches to track which column and row a pressed button is in. The development platform used to read the column/row outputs and drive the state for the lights and buzzer is the Nucleo L432KC. It comes equipped with an onboard ST-LINK v2 and is Arduino IDE compatible.

<img src="images/presentation enclosure.jpg" height="30%" width="30%" alt="Presentation enclosure" />


### Bill of Materials
(All Prices pre-tax and in CAD)

*  Nucleo L432KC STM32 Development Board - $15.176
*  COM-14662 12-Button Matrix Keypad - $6.87
*  Red LED - $0.86
*  Green LED - $0.83
*  Piezzo Speaker - $1.04

### Arduino IDE Configuration && installing Source Code
1) The Arduino IDE can be downloaded for free from https://www.arduino.cc/en/main/software and is available for Windows, Mac OS X and Linux.
2) Open Arduino IDE and click Files and then preference.
3) Add the stm32duino board manager repository by entering 'https://raw.githubusercontent.com/stm32duino/BoardManagerFiles/master/STM32/package_stm_index.json' in to 'Additional Boards Manager URLs' and click OK.
4) Plug the micro usb from the Nucleo in to the computer.
5) Click on Tools > Board > Boards Manager and install STM32 Core from the list.
6) Click Tools > Board and select Nucleo-32 and then click Tools > Board Part Number and select Nucleo L432KC.
6) Click 

### Soldering and Assembly

<br/>Here are the following pins that you should know for this project:
##### Keypad Pins
* 
  
#### Enclosure

### Power Up

### Testing

#### Unit Testing

#### Production Testing

### Reference
