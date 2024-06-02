int buttonPin = 2;
int buttonVal;
void setup(){
Serial.begin(115200);
pinMode(buttonPin, INPUT);
digitalWrite(buttonPin, HIGH);
}
void loop(){
buttonVal = digitalRead(buttonPin);
Serial.println(buttonVal);
delay(10);
}