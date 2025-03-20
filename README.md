# Arduino-Based Smoke Detection System with MQ-3 Sensor

A simple yet effective smoke detection system built with Arduino that uses an MQ-3 sensor to detect smoke and triggers a buzzer alarm when smoke levels exceed a set threshold.

## Overview

This project demonstrates how to build a smoke detection system using an Arduino Uno and MQ-3 sensor. The system monitors the environment for smoke and triggers a buzzer alarm when smoke concentration exceeds a predetermined threshold.

## Features

- Real-time smoke detection
- Adjustable threshold level
- Audio alarm when smoke is detected
- Serial monitor output for debugging

## Components Required

- Arduino Uno
- MQ-3 Gas Sensor
- Buzzer
- Jumper wires
- Breadboard
- Power supply / Battery

## Circuit Diagram

![Circuit Diagram](https://github.com/AddyB0t/Arduino-Based-Smoke-Detection-System/blob/main/circuit%20diagram.png)

## How It Works

The MQ3 smoke sensor is a widely used sensor for detecting smoke, alcohol, and other harmful gases. It operates based on a tin dioxide (SnO2) sensitive layer, which has a lower conductivity in clean air but reacts with gases, causing a change in resistance. The sensor requires a preheating time and operates on both analog and digital outputs.

When smoke is detected above the threshold level, the buzzer is activated as an alarm.

## Setup Instructions

1. Assemble the MQ-3 sensor on breadboard
2. Make the connections as per the circuit diagram:
   - Sensor Vcc → Arduino +5V
   - Sensor Gnd → Arduino GND
   - Sensor data pin → Arduino A0
   - Buzzer (+ve) → Arduino D7
   - Buzzer (-ve) → Arduino GND
3. Upload the code (`code.ino`) to your Arduino
4. Calibrate the sensor threshold if needed

## Demonstration

![Demonstration](https://github.com/AddyB0t/Arduino-Based-Smoke-Detection-System/blob/main/demonstration.png)

## Usage

After setup:
1. Power on the system
2. The sensor will begin monitoring air quality
3. When smoke levels exceed the threshold, the buzzer will sound
4. Monitor values via the Serial Monitor (baud rate 9600)

## Safety Precautions

1. Ensure all connections are tight before powering on
2. Handle all equipment carefully
3. Check connections before turning the circuit ON
4. Be careful with jumper wire connections
5. Do not touch the MQ3 sensor as it may cause burns due to hot nichrome wire
6. This is a prototype system and should not replace professional smoke detectors for safety-critical applications

## Contributing

Contributions are welcome! Feel free to submit a Pull Request.

## License

This project is open source and available under the MIT License.
