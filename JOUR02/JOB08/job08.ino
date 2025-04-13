// PROGRESSIVELY LIGHTEN THE LED

int brightness = 0;
int fadeAmount = 5;
 

void setup (){
    pinMode(1, OUTPUT);
}

void loop(){
    analogWrite(1, brightness);
    brightness = brightness + fadeAmount;

    if (brightness <= 0 || brightness >=255){
        fadeAmount = - fadeAmount;
    }
    delay(30);
}