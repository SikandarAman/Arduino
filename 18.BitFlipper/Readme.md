# Arduino Bit Flipper with 74HC595 Shift Register

This Arduino sketch demonstrates flipping the bits of a byte variable using the 74HC595 shift register.

## Description

The code utilizes the 74HC595 shift register to perform serial-to-parallel conversion and display the original byte value (`myByte`) on LEDs or other output devices connected to the output pins of the shift register. Additionally, it performs bit flipping on the byte value to obtain its complement (`myByte_Flipped`). The complemented byte value is then displayed using the shift register, allowing you to observe the bit-flipped result.

## Components Required

- Arduino board
- 74HC595 shift register
- LEDs or other output devices
- Resistors (if necessary)
- Breadboard and jumper wires

## Assembling Guide

1. Connect the latchPin of the Arduino to the ST_CP pin of the 74HC595.
2. Connect the clockPin of the Arduino to the SH_CP pin of the 74HC595.
3. Connect the dataPin of the Arduino to the DS pin of the 74HC595.
4. Connect LEDs or other output devices to the output pins of the 74HC595.
5. Ensure proper connections and polarity when connecting the components.

## Usage

1. Upload the provided Arduino sketch to the Arduino board.
2. Observe the LEDs or other output devices connected to the output pins of the 74HC595 shift register.
3. The output will display the original byte value (`myByte`) followed by its complemented value (`myByte_Flipped`) in each iteration of the loop.

## Observations

- The sketch demonstrates using the 74HC595 shift register to perform serial-to-parallel conversion and display the original byte value.
- Additionally, it performs bit flipping on the byte value to obtain its complement, which is then displayed on the output devices.
- The serial monitor can be used to observe the original and complemented byte values in decimal and binary formats.

## Additional Details

- Bit flipping operations are commonly used in digital systems to manipulate and analyze binary data.
- The complemented byte value (`myByte_Flipped`) is obtained by subtracting the original byte value (`myByte`) from 255 (0xFF).
- Experiment with different byte values and observe how the bit flipping affects the output on the LEDs or other output devices.
- Ensure proper current limiting for the LEDs or other output devices to avoid damaging them or the Arduino board.
