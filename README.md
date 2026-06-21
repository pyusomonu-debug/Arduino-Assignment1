# Arduino-Smart Countdown with LED Flashing (Arduino)

Project Description

This Arduino project implements a Smart Countdown System that counts down from 5 to 1 while displaying the countdown values on the Serial Monitor and flashing an LED connected to pin 13.

The number of LED flashes corresponds to the current countdown value. For example, when the counter is 5, the LED flashes 5 times; when the counter is 4, it flashes 4 times, and so on until the countdown reaches 1.

After the countdown is completed, a completion message is displayed on the Serial Monitor.

Features

* Countdown from 5 to 1
* Displays countdown values on the Serial Monitor
* LED flashes according to the current countdown number
* Uses functions for code modularity and reusability
* Demonstrates loops, functions, variables, and serial communication

Hardware Requirements

* Arduino Uno
* USB cable
* LED (or built-in LED on pin 13)
* Computer with Arduino IDE installed

How It Works

1. The program starts serial communication at 9600 baud.
2. Pin 13 is configured as an output.
3. A startup message is displayed on the Serial Monitor.
4. The countdown begins from 5.
5. For each countdown value:
    * The value is displayed on the Serial Monitor.
    * The LED flashes the same number of times as the current value.
    * The counter decreases by one.
6. When the countdown reaches zero, a completion message is displayed.

Concepts Demonstrated

* Variables
* Functions
* While Loops
* Digital Output Control
* Serial Communication
* Arduino Programming Fundamentals


Author: Yaw Omonu Abofra-Kuma
index no:2526402527