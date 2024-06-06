# Arduino LED Pulse

This Arduino sketch creates a pulsating effect on an LED connected to pin 9 using PWM (Pulse Width Modulation).

## Description

The code initializes pin 9 as an output pin and continuously increases the brightness of the LED connected to it in a pulsating manner using PWM. This creates a visual effect of the LED gradually brightening and dimming.

## Components Required

- Arduino board
- LED
- Resistor 220 ohms

## Assembling Guide

1. Connect an LED to digital pin 9 on the Arduino board.
2. If needed, insert a resistor between the LED and the digital pin to limit the current.

## Usage

1. Upload the provided Arduino sketch to the Arduino board.
2. The LED connected to pin 9 will pulsate, gradually increasing and decreasing in brightness.

## Observations

- The LED appears to pulsate, gradually brightening and dimming due to the PWM modulation.

## Additional Details

- Adjust the code to modify the pulsating effect, such as changing the speed or range of brightness.
- Ensure proper current limiting for the LED to avoid damaging it or the Arduino board.
