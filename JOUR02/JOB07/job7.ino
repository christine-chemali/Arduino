// BLINKING LED ONE BY ONE

const int ledPins[]={1,2,3,4,5,6,7,8};
const int numleds = 8;

void setup() {
  for (int ledIndex = 0; ledIndex < numleds; ledIndex++){
    pinMode(ledPins[ledIndex], OUTPUT);
  }
}

void loop() {
  for (int ledIndex = 0; ledIndex < numleds; ledIndex++){
    digitalWrite(ledPins[ledIndex], HIGH);
    delay(500);
    digitalWrite(ledPins[ledIndex], LOW);
  }

}
