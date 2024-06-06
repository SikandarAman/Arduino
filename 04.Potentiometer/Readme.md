# Arduino Analog Sensor Reading

This Arduino sketch reads analog sensor values from two analog pins and calculates the difference between them.

## Description

The code reads analog sensor values from two analog pins: GM (Gas Measurement) and Total. It then calculates the difference between the Total value and the GM value and prints the results to the serial monitor. This can be used, for example, to measure the difference in gas levels.

## Components Required

- Arduino board
- Analog gas sensor (for GM)
- Analog sensor (for Total)
- 220 ohm resistors (1 per LED)
- LEDs (2)
- Breadboard and jumper wires

## Assembling Guide

1. Connect the analog gas sensor to analog pin A2 (GM).
2. Connect the other analog sensor to analog pin A0 (Total).
3. Connect a 220 ohm resistor to the anode (longer leg) of each LED.
4. Connect the cathode (shorter leg) of each LED to a separate digital pin on the Arduino board (e.g., pin 9 and pin 10).

## Usage

1. Upload the provided Arduino sketch to the Arduino board.
2. Open the serial monitor to view the sensor readings and the calculated difference.
3. Connect the LEDs to the designated digital pins on the Arduino.
4. The LEDs will light up based on the difference between the sensor values.

## Observations

- The serial monitor will display the readings from the GM sensor, the Total sensor, and the calculated difference.
- The LEDs will indicate the difference between the two sensor values visually.

## Additional Details

- Ensure proper connections and polarity when connecting the LEDs and resistors.
- Adjust the code and connections as necessary based on your specific sensors and setup.
- Use caution when working with electronic components and connections to avoid damage.
