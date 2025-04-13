// Valentine Card with HC-SR04 code
#include <LiquidCrystal.h>

LiquidCrystal lcd(14, 15, 16, 17, 18, 19);

const int motorPin = 11;
const int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10}; 
const int numledcolumns = 11;

const int trigPin = 13;
const int echoPin = 12;

void setup() {
  for (int ledIndex = 0; ledIndex < numledcolumns; ledIndex++) {
    pinMode(ledPins[ledIndex], OUTPUT);
  }
  
  pinMode(motorPin, OUTPUT); 
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 

  lcd.begin(16, 2); 
  lcd.print("DO YOU KNOW HOW ");
  lcd.setCursor(0, 1); 
  lcd.print("FAR I LOVE YOU ?");
}

void loop() {

  long duration, distance;
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  
  distance = (duration * 0.034) / 2; 


  if (distance < 50) { 
    for (int ledIndex = 0; ledIndex < numledcolumns; ledIndex++) {
      digitalWrite(ledPins[ledIndex], HIGH);
      delay(100);
      digitalWrite(ledPins[ledIndex], LOW); 
    }

    lcd.clear();
    lcd.print("I Love You To");
    lcd.setCursor(0, 1); 
    lcd.print("The Moon & Back");

    digitalWrite(motorPin, HIGH);
    delay(1000);
    digitalWrite(motorPin, LOW); 
    
  
    lcd.clear();
    lcd.print("L O V E  L O V E");
    lcd.setCursor(0, 1);
    lcd.print("L O V E  L O V E");

    for (int blinkCount = 0; blinkCount < 5; blinkCount++) { 
      for (int ledIndex = 0; ledIndex < numledcolumns; ledIndex++) {
        digitalWrite(ledPins[ledIndex], HIGH); 
      }
      delay(200);
      for (int ledIndex = 0; ledIndex < numledcolumns; ledIndex++) {
        digitalWrite(ledPins[ledIndex], LOW);
      }
      delay(200); 
    }

    lcd.clear();
    lcd.print("DO YOU KNOW HOW ");
    lcd.setCursor(0, 1); 
    lcd.print("FAR I LOVE YOU ?");

    delay(100);
  }

  delay(100);
}