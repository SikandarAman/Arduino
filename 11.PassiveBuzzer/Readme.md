# Arduino Passive Buzzer Tone Generation with Potentiometer

This Arduino sketch generates tones on a passive buzzer by adjusting the delay between high and low states using a potentiometer.

## Description

The code reads the analog value from a potentiometer connected to analog pin A1, which is used to adjust the tone frequency of the passive buzzer connected to digital pin 10. By varying the resistance of the potentiometer, the delay between the high and low states of the buzzer is adjusted, producing tones of varying frequencies.

## Components Required

- Arduino board
- Passive buzzer
- Potentiometer
- Resistor (if necessary)
- Breadboard and jumper wires

## Assembling Guide

1. Connect a potentiometer to analog pin A1 on the Arduino board.
2. Connect one end of the potentiometer to the 5V pin and the other end to the GND pin.
3. Connect the middle pin of the potentiometer to analog pin A1.
4. Connect a passive buzzer to digital pin 10 on the Arduino board.
5. Ensure proper connections and polarity when connecting the potentiometer and buzzer.

## Usage

1. Upload the provided Arduino sketch to the Arduino board.
2. Adjust the potentiometer knob to change the tone frequency of the passive buzzer.
3. Turning the potentiometer will produce tones of varying frequencies on the buzzer.

## Observations

- Rotating the potentiometer knob changes the tone frequency of the passive buzzer.
- The serial monitor can be used to observe the analog values read from the potentiometer.

## Additional Details

- Adjust the code and connections as necessary based on your specific setup.
- Ensure proper current limiting for the buzzer to avoid damaging it or the Arduino board.
- Use caution when working with potentiometers and buzzer components, especially if used in environments with sensitive individuals.
- Experiment with different ranges of delay values to produce a wider range of tones.
