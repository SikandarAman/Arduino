# Arduino Light Sensing with LED Indicators

This Arduino sketch reads the light intensity using a photoresistor and indicates the light level with red and green LEDs.

## Description

The code reads the analog value from a photoresistor connected to analog pin A5. It then compares this value to a threshold (750 in this case). If the light intensity is above the threshold, the red LED connected to digital pin 9 is turned on, indicating low light. Otherwise, the green LED connected to digital pin 10 is turned on, indicating high light.

## Components Required

- Arduino board
- Photoresistor
- LED (red and green)
- Resistors (5k ohm for the photoresistor, 220 ohm for the LED)
- Breadboard and jumper wires

## Assembling Guide

1. Connect a photoresistor to analog pin A5 on the Arduino board.
2. Connect one side of the photoresistor to the 5V pin and the other side to ground (GND).
3. Connect a resistor (5k ohm) in parallel with the photoresistor to create a voltage divider.
4. Connect the junction between the photoresistor and the resistor to analog pin A5.
5. Connect a red LED to digital pin 9 and a green LED to digital pin 10.
6. Connect a resistor (220 ohm) in series with each LED.
7. Ensure proper connections and polarity when connecting the components.

## Usage

1. Upload the provided Arduino sketch to the Arduino board.
2. Adjust the light conditions around the photoresistor to observe changes in LED indicators.
3. The red LED will indicate low light conditions, while the green LED will indicate high light conditions.

## Observations

- The serial monitor can be used to observe the analog values read from the photoresistor.
- The LEDs will indicate the light level detected by the photoresistor: red for low light and green for high light.

## Additional Details

- Adjust the threshold value (750) in the code to customize the light sensitivity level.
- Experiment with different resistor values for the photoresistor and LED to achieve desired sensitivity and brightness levels.
- Ensure proper current limiting for the LEDs to avoid damaging them or the Arduino board.
