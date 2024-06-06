# Arduino LCD Display Animation

This Arduino sketch demonstrates creating an animation on an LCD display.

## Description

The code uses an LCD display connected to the Arduino board to create a simple animation. It iterates through a loop, printing numbers from 0 to 199 on the first line of the LCD display. The delay between each number printing increases incrementally, creating the animation effect. After printing all numbers, the LCD display is cleared, and there is a pause before restarting the animation.

## Components Required

- Arduino board
- LCD display (compatible with LiquidCrystal library)
- Potentiometer (for contrast adjustment, if necessary)
- Resistors (if necessary)
- Breadboard and jumper wires

## Assembling Guide

1. Connect the RS pin of the LCD display to digital pin 7 of the Arduino.
2. Connect the EN pin of the LCD display to digital pin 8 of the Arduino.
3. Connect the D4 pin of the LCD display to digital pin 9 of the Arduino.
4. Connect the D5 pin of the LCD display to digital pin 10 of the Arduino.
5. Connect the D6 pin of the LCD display to digital pin 11 of the Arduino.
6. Connect the D7 pin of the LCD display to digital pin 12 of the Arduino.
7. Connect the VSS pin of the LCD display to GND.
8. Connect the VDD pin of the LCD display to 5V.
9. Connect the VO pin of the LCD display to a potentiometer for contrast adjustment (if necessary).
10. Ensure proper connections and polarity when connecting the components.

## Usage

1. Upload the provided Arduino sketch to the Arduino board.
2. Observe the animation displayed on the LCD screen.
3. Adjust the delay values in the code to change the animation speed if desired.

## Observations

- The LCD display will show a scrolling animation of numbers from 0 to 199.
- The delay between each number printing increases incrementally, creating a visually appealing animation effect.

## Additional Details

- The LiquidCrystal library simplifies interfacing with LCD displays on Arduino.
- Experiment with different animations or text patterns by modifying the code.
- Ensure proper contrast adjustment for optimal readability on the LCD display.
- Ensure proper current limiting for the LCD backlight to avoid damaging it or the Arduino board.
