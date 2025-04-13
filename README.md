# Arduino

# Valentine Card with HC-SR04

## Overview
This project is a Valentine card that uses an HC-SR04 ultrasonic distance sensor, an LCD display, and a set of LEDs to create an interactive experience. When someone approaches the card, it lights up and displays a message of love. Additionally, a motor operates to rotate an artificial red flower, enhancing the romantic ambiance.

## Components Required
- Arduino Board (e.g., Arduino Uno)
- HC-SR04 Ultrasonic Sensor
- 16x2 Liquid Crystal Display (LCD)
- Multiple LEDs (9 LEDs)
- Resistors (appropriate for LEDs)
- DC Motor (for rotating the artificial flower)
- Artificial red flower
- Breadboard and jumper wires

## Wiring Diagram
1. Connect the HC-SR04:
   - Trigger Pin (Trg) to Arduino Pin 13
   - Echo Pin (Echo) to Arduino Pin 12
   - VCC to 5V
   - GND to GND

2. Connect the LCD:
   - RS to Arduino Pin 14
   - E to Arduino Pin 15
   - D4 to Arduino Pin 16
   - D5 to Arduino Pin 17
   - D6 to Arduino Pin 18
   - D7 to Arduino Pin 19
   - VCC to 5V
   - GND to GND

3. Connect the LEDs:
   - Connect each LED to the digital pins: 2, 3, 4, 5, 6, 7, 8, 9, 10
   - Use appropriate resistors with each LED to limit current.

4. Connect the Motor (for the flower):
   - Connect the motor to Arduino Pin 11 and appropriate power source.
   - Attach the artificial red flower to the motor shaft, allowing it to spin gracefully when activated.

## Code Explanation
- The code initializes the LCD and sets up the pins for the LEDs, motor, and ultrasonic sensor.
- In the `setup()` function, it configures the pins and displays the initial message on the LCD.
- The `loop()` function continuously checks the distance from the ultrasonic sensor.
  - If an object is detected within 50 cm, the LEDs light up in sequence, and the LCD displays various messages of love.
  - The motor activates to rotate the artificial red flower, creating a delightful visual effect that complements the romantic theme.

## Usage
1. Upload the code to your Arduino board.
2. Power the circuit.
3. Approach the card to see it react with lights and messages, while the flower spins to enhance the experience.

## Customization
- You can modify the messages displayed on the LCD to personalize the card.
- Adjust the number of LEDs or change their blinking patterns for a unique effect.
- Experiment with different flowers or decorations to create a personalized touch.

## Conclusion
This Valentine card not only serves as a thoughtful gift but also showcases the ability to combine electronics and programming to create an interactive experience. The spinning artificial red flower adds a charming visual element, making it a memorable expression of love. Enjoy spreading affection !