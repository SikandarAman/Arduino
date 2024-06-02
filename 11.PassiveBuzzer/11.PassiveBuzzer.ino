int buzzPin = 10;
int potPin = A1;
float potVal;
float toneVal;
//trying to do tone 60 to 10000 changing low setting only using potentiometers 0 to 1023
void setup(){
    pinMode(buzzPin, OUTPUT);
    pinMode(potPin, INPUT);
    Serial.begin(115200);
}
void loop(){
    potVal = analogRead(potPin);
    Serial.println(potVal);
    toneVal = ((((10000.0-60.0)/(1023.0-0.0))*potVal)+60);
    digitalWrite(buzzPin,HIGH);
    delayMicroseconds(10);
    digitalWrite(buzzPin,LOW);
    delayMicroseconds(toneVal);
}