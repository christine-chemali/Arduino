// SYNCHRONIZED LED BLINKING ANIMATION

int animationspeed1 = 0;
int animationspeed2 = 0;

void setup() {
pinMode (1, OUTPUT);
pinMode (2, OUTPUT);
}

void loop() {
animationspeed1 = 1000;
animationspeed2 = 200;
digitalWrite(1, HIGH);
delay(animationspeed1);
digitalWrite(1, LOW);
delay(animationspeed1);
digitalWrite(2, HIGH);
delay(animationspeed2);
digitalWrite(2, LOW);
delay(animationspeed2);
}
