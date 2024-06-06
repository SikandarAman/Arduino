# Arduino Push Button Input Without Resistor

This Arduino sketch demonstrates reading the state of a push button input without using a resistor.

## Description

The code reads the state of a push button connected to digital pin 2 on the Arduino board. The push button is configured with a pull-up resistor by setting the pin mode to INPUT and enabling the internal pull-up resistor using `digitalWrite(buttonPin, HIGH)`. This configuration allows the Arduino to detect when the button is pressed or released without the need for an external resistor.

## Components Required

- Arduino board
- Push button
- Breadboard and jumper wires

## Assembling Guide

1. Connect a push button to digital pin 2 on the Arduino board.
2. Connect one side of the push button to the digital pin and the other side to ground (GND).
3. Ensure proper connections and polarity when connecting the push button.

## Usage

1. Upload the provided Arduino sketch to the Arduino board.
2. Press and release the push button.
3. The serial monitor will display the state of the push button (HIGH for pressed, LOW for released).

## Observations

- The code utilizes the internal pull-up resistor of the Arduino to detect the state of the push button.
- Pressing the push button will change the state from HIGH to LOW, and releasing it will change the state back to HIGH.

## Additional Details

- This method is a quick and simple way to read the state of a push button without the need for an external resistor.
- Adjust the pin number (buttonPin) in the code to match the actual pin used for connecting the push button.
- Ensure proper connections and polarity when connecting the push button to avoid incorrect readings.
