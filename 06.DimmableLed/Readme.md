# Arduino Dimmable LED Control with Potentiometer

This Arduino sketch reads the analog value from a potentiometer and adjusts the brightness of an LED accordingly using PWM (Pulse Width Modulation).

## Description

The code reads the analog value from a potentiometer connected to one of its pins (GM), simulating a gas sensor. It then maps this value to adjust the brightness of an LED connected to pin 10 using PWM. Rotating the potentiometer changes the analog value, which in turn changes the brightness of the LED.

## Components Required

- Arduino board
- Potentiometer
- LED
- Resistor 220 ohms
- Breadboard and jumper wires

## Assembling Guide

1. Connect the middle pin of the potentiometer to analog pin A2 (GM).
2. Connect one of the outer pins of the potentiometer to GND.
3. Connect the other outer pin of the potentiometer to 5V.
4. Connect an LED to digital pin 10.
5. Ensure proper connections and polarity when connecting the LED.

## Usage

1. Upload the provided Arduino sketch to the Arduino board.
2. Rotate the potentiometer knob to change its resistance value.
3. The LED brightness will change accordingly, based on the analog value read from the potentiometer.

## Observations

- Rotating the potentiometer knob changes the brightness of the LED.
- The serial monitor can be used to view the analog values read from the potentiometer.

## Additional Details

- Adjust the code and connections as necessary based on your specific potentiometer and LED.
- Ensure proper current limiting for the LED to avoid damaging it or the Arduino board.
- Use caution when working with potentiometers to avoid damage or incorrect readings.
