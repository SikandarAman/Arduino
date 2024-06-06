# Arduino Push Button LED Toggle

This Arduino sketch toggles the state of an LED using a push button as a switch.

## Description

The code reads the state of a push button connected to digital pin 9. When the button is pressed, it toggles the state of an LED connected to digital pin 6. Each press of the button alternates between turning the LED on and off.

## Components Required

- Arduino board
- Push button
- LED
- Resistor 220 ohms, and 6.8K for the input side
- Breadboard and jumper wires

## Assembling Guide

1. Connect a push button to digital pin 9 on the Arduino board.
2. Connect one side of the push button to the digital pin and the other side to ground (GND).
3. Connect an LED to digital pin 6.
4. Ensure proper connections and polarity when connecting the LED and push button.

## Usage

1. Upload the provided Arduino sketch to the Arduino board.
2. Press the push button to toggle the state of the LED.
3. Each press of the button will switch the LED between on and off states.

## Observations

- Pressing the push button changes the state of the LED.
- The serial monitor can be used to observe the state changes if needed.

## Additional Details

- Adjust the code and connections as necessary based on your specific setup.
- Ensure proper current limiting for the LED to avoid damaging it or the Arduino board.
- Use caution when working with push buttons, especially if used in environments with sensitive individuals.
