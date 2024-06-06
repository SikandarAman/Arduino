# Arduino Binary Counter with LEDs

This Arduino sketch creates a binary counter using LEDs. Each LED represents a binary digit of the counter. When a specific input pin is triggered, the counter increments, and the corresponding LEDs light up to represent the binary value.

## Description

The code initializes an array of LEDs connected to digital pins 5, 6, 9, 10, and 11, and an input pin connected to digital pin 3. When the input pin receives a HIGH signal, the counter increments by one, and the binary value is displayed on the LEDs.

## Components Required

- Arduino board
- LEDs (5)
- Resistors * 5 for 220 ohms, and 1 * 6.6 K ohms
- Push button or switch

## Assembling Guide

1. Connect the LEDs to digital pins 5, 6, 9, 10, and 11 on the Arduino board.
2. Connect the input pin (for triggering the counter) to digital pin 3.
3. Add resistors if needed to limit the current flowing through the LEDs.
4. Take the  input one and along with pin 3 attach 6.8 k ohm resistor and that to the gound, parallel 6.8k, ground and digital pin 3 

## Usage

1. Upload the provided Arduino sketch to the Arduino board.
2. Press the button or trigger the input pin to increment the counter.
3. The LEDs will represent the binary value of the counter.

## Observations

- Each time the input pin is triggered, the counter increments.
- The binary value of the counter is displayed on the connected LEDs.

## Additional Details

- Adjust the code and connections as necessary based on your specific setup.
- Ensure proper current limiting for the LEDs to avoid damaging them or the Arduino board.