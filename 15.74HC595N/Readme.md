# Arduino 74HC595 Shift Register LED Control

This Arduino sketch demonstrates controlling LEDs using the 74HC595 shift register.

## Description

The code uses the 74HC595 shift register to control LEDs connected to its output pins. Three pins of the Arduino board (latchPin, clockPin, and dataPin) are connected to the corresponding pins (ST_CP, SH_CP, and DS) of the 74HC595 shift register. The sketch continuously updates the state of the LEDs by shifting out a byte of data to the shift register, which then controls the individual LEDs connected to its output pins.

## Components Required

- Arduino board
- 74HC595 shift register
- LEDs
- Resistors (if necessary)
- Breadboard and jumper wires

## Assembling Guide

1. Connect the latchPin of the Arduino to the ST_CP pin of the 74HC595.
2. Connect the clockPin of the Arduino to the SH_CP pin of the 74HC595.
3. Connect the dataPin of the Arduino to the DS pin of the 74HC595.
4. Connect LEDs to the output pins of the 74HC595.
5. Ensure proper connections and polarity when connecting the components.

## Usage

1. Upload the provided Arduino sketch to the Arduino board.
2. Observe the LEDs connected to the output pins of the 74HC595 shift register.
3. The LEDs will change their states based on the byte of data shifted out to the shift register.

## Observations

- The sketch demonstrates using the 74HC595 shift register to control multiple LEDs with fewer Arduino pins.
- By updating the byte of data sent to the shift register, different combinations of LEDs can be turned on and off.

## Additional Details

- The 74HC595 is a serial-in, parallel-out shift register that allows you to control multiple outputs using only a few Arduino pins.
- The latchPin is used to enable/disable input to the shift register, while the clockPin and dataPin are used to shift data into the register.
- Experiment with different byte values to create various LED patterns and effects.
- Ensure proper current limiting for the LEDs to avoid damaging them or the Arduino board.
