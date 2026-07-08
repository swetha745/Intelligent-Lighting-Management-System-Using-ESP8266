# Intelligent Lighting Management System Using ESP8266

## Overview
The Intelligent Lighting Management System Using ESP8266 is an IoT-based project that automatically controls lighting based on the surrounding light intensity. The system uses an LDR (Light Dependent Resistor) sensor to detect ambient light conditions and an ESP8266 NodeMCU to control an LED automatically. This helps reduce unnecessary electricity consumption and improves energy efficiency.

## Objectives
- To automate lighting based on ambient light intensity.
- To reduce unnecessary power consumption.
- To demonstrate the use of ESP8266 in an IoT-based lighting system.

## Components Used
- ESP8266 NodeMCU
- LDR Sensor Module
- LED
- 220 Ω Resistor
- Breadboard
- Jumper Wires
- Micro-USB Cable

## Software Used
- Arduino IDE
- ESP8266 Board Package
- Serial Monitor

## Circuit Connections

| ESP8266 Pin | Connected To |
|-------------|--------------|
| 3V3 | LDR Sensor VCC |
| GND | LDR Sensor GND and LED Cathode |
| D1 | LDR Sensor OUT |
| D2 | LED Anode (through 220 Ω resistor) |

## Working Principle
1. The LDR sensor continuously detects the surrounding light intensity.
2. The ESP8266 reads the sensor output.
3. When low light is detected, the ESP8266 turns the LED ON.
4. When sufficient light is available, the ESP8266 turns the LED OFF.
5. The process repeats continuously for automatic lighting control.

## Results
- Automatic lighting control was successfully implemented.
- The LED switched ON during low-light conditions.
- The LED switched OFF during bright-light conditions.
- The system responded quickly and operated reliably during testing.

## Future Scope
- Remote monitoring using Wi-Fi.
- Integration with IoT platforms such as Blynk or ThingSpeak.
- Motion sensor integration for improved energy efficiency.
- Solar-powered smart lighting applications.

## Repository Contents
- `Intelligent_Lighting.ino` – Arduino source code
- `Project_Report.pdf` – Project report
- `Hardware_Setup.jpg` – Hardware setup image
- `Circuit_Diagram.png` – Circuit diagram (if available)

## Author
**Swetha S.**  
Department of Electrical and Electronics Engineering (EEE)  
VSB Engineering College
