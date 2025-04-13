// ASYNCHRONIZED LED BLINKING ANIMATION

int animationspeed = 0;

void setup() {

pinMode(LED_BUILTIN, OUTPUT);
pinMode (1, OUTPUT);
pinMode (2, OUTPUT);
}

void loop() {

animationspeed = 1000;
digitalWrite(LED_BUILTIN, HIGH);
delay(animationspeed);
digitalWrite(LED_BUILTIN, LOW);
delay(animationspeed);
digitalWrite(1, HIGH);
delay(animationspeed);
digitalWrite(1, LOW);
delay(animationspeed);
digitalWrite(2, HIGH);
delay(animationspeed);
digitalWrite(2, LOW);
delay(animationspeed);
}
