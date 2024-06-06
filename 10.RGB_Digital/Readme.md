# Arduino RGB Light Control with Push Buttons and Color Mixing

This Arduino sketch controls the state of RGB lights using push buttons as switches and demonstrates color mixing.

## Description

The code reads the state of three push buttons connected to pins 3 (for red), 5 (for blue), and 6 (for green) on the Arduino board. When a button is pressed, it toggles the state of the corresponding RGB light (red, blue, or green) connected to digital pins 9, 10, and 11, respectively. Each press of a button alternates between turning the corresponding RGB light on and off. Additionally, the combination of these lights can produce a variety of colors through color mixing.

## Components Required

- Arduino board
- RGB LED
- Three push buttons
- Resistor 220 ohms * 3, and 6.8K for the input side *3
- Breadboard and jumper wires

## Assembling Guide

1. Connect a push button for red control to digital pin 3, a push button for blue control to digital pin 5, and a push button for green control to digital pin 6.
2. Connect one side of each push button to the digital pin and the other side to ground (GND).
3. Connect an RGB LED, with the red pin connected to digital pin 9, the blue pin connected to digital pin 10, and the green pin connected to digital pin 11.
4. Ensure proper connections and polarity when connecting the RGB LED and push buttons.

## Usage

1. Upload the provided Arduino sketch to the Arduino board.
2. Press the red, blue, or green push buttons to toggle the corresponding RGB light.
3. Each press of a button will switch the corresponding RGB light between on and off states.
4. Experiment with combinations of the red, blue, and green lights to create different colors through color mixing.

## Observations

- Pressing the red, blue, or green push buttons changes the state of the corresponding RGB light.
- By combining different intensities of the red, blue, and green lights, various colors can be achieved through color mixing.

## Additional Details

- Adjust the code and connections as necessary based on your specific setup.
- Ensure proper current limiting for the RGB LED to avoid damaging it or the Arduino board.
- Use caution when working with push buttons and RGB LEDs, especially if used in environments with sensitive individuals.
- The RGB LED's color mixing capabilities can be further explored by adjusting the intensity of each color component.
