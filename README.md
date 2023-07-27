[![github/NapoII](https://raw.githubusercontent.com/NapoII/ESP8266WiFi_Start/main/README_img/Readme_top.png)](https://github.com/NapoII)

# ESP8266WiFi_Start

[![downloads/total](https://img.shields.io/github/downloads/NapoII/ESP8266WiFi_Start/total)](https://github.com/NapoII/ESP8266WiFi_Start/archive/refs/heads/main.zip) [![github/repo-size](https://img.shields.io/github/repo-size/NapoII/ESP8266WiFi_Start)](https://github.com/NapoII/ESP8266WiFi_Start/archive/refs/heads/main.zip) [![github/license](https://img.shields.io/github/license/NapoII/ESP8266WiFi_Start)](https://github.com/NapoII/ESP8266WiFi_Start/blob/main/LICENSE) [![github/last-commit](https://img.shields.io/github/downloads/NapoII/ESP8266WiFi_Start/total)](https://img.shields.io/github/issues/NapoII/ESP8266WiFi_Start?style=plastic) [![github/issues_open](https://img.shields.io/github/issues/NapoII/ESP8266WiFi_Start?style=plastic)](https://img.shields.io/github/issues-raw/NapoII/ESP8266WiFi_Start) [![github/stars](https://img.shields.io/github/stars/NapoII/ESP8266WiFi_Start?style=social)](https://github.com/NapoII/ESP8266WiFi_Start/stargazers) [![discord](https://img.shields.io/discord/190307701169979393)](https://discord.gg/knTKtKVfnr)

From Hello World to Webserver interaktion
## 📝 Table of Contents
+ [datebook](#datebook)
+ [Install](#usage)
+ [How it works](#Use)
+ [Lizenz](#Lizenz)
  
## 📖 datebook <a name = "datebook"></a>
![github/NapoII](README_img\ESP8266_D1_Mini.png)
![github/NapoII](README_img\d1_mini_pinout_1.png)


| General Properties       | https://amzn.eu/d/aDcUB0k                          |
| ----------------------- | ------------------------- |
| Programming             | via microUSB cable        |
| Digital Pins            | 11                        |
| Analog Pins             | 1 (input only)            |
| Operating Voltage       | 3V - 3.6V                 |

| Supported Programming Languages | Development Environment |
| ------------------------------- | ----------------------- |
| C++                             | Arduino IDE             |
| Python                          | microPython             |
| Javascript                      | Espruino                |

| Technical Properties     |                   |
| ------------------------ | ----------------- |
| Chip                     | ESP12-F           |
| Operating Voltage        | 3V - 3.6V         |
| Digital I/O Pins         | 11                |
| Analog Input Pins        | 1 (max. 3.2V)     |
| Architecture             | 32-bit            |
| Interfaces               | UART              |
|                          | I2C               |
|                          | SPI               |
| Clock Rate               | 80MHz & 160MHz    |
| Flash Size               | 4 MB              |
| Operating Temperature    | -20°C to 85°C     |
| Power Consumption        | Continuous: ~70mA |
|                          | Modem-Sleep: ~20mA|
|                          | Light-Sleep: ~2mA |
|                          | Deep-Sleep: ~0.02mA|
| WiFi Modes               | STA               |
|                          | AP                |
|                          | STA & AP          |
| Length                   | 34.2 mm           |
| Width                    | 25.6 mm           |
| Weight                   | 3 grams           |

## 💻 Install <a name = "usage"></a>
* 1. Clone this Git.
```cmd
git clone https://github.com/NapoII/ESP8266WiFi_Start
```
* 2. Install the necessary driver on your computer to address the ESP chip set. `CH340`→ https://sparks.gogo.co.nz/ch340.html
* 3. Start VSS with the extension `PlatfromIO`. → https://platformio.org/
* 4. Create a new project with PlatfromIO with the following settings:
Name: `ESP_Test`
  Borad: `Espressif ESP8266 ESP-12E`
  Framework: `Arduino`
* 5. Take a desired `main.cpp` file from the git and copy it into the `src` folder.
* 8. Connect the ESP to your computer with a USB port.
* 9. Upload the Projekt to the ESP.
  ![github/NapoII](README_img\ESp_upload.png)
* 10. Open the serial console to see the output of the ESP.
  ![github/NapoII](README_img\serial.png)
* 11. ☕ Now that the base is in place Treat yourself to a cup of tea.

## 💭 How it works <a name = "Use"></a>

Push the desired ccp file into the ESP for testing

## 📚 Lizenz <a name = "Lizenz"></a>
MIT License

Copyright (c) 2023 NapoII
<small><small><small>
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE
    
<p align="center">
<img src="https://raw.githubusercontent.com/NapoII/NapoII/233630a814f7979f575c7f764dbf1f4804b05332/Bottom.svg" alt="Github Stats" />
</p>
