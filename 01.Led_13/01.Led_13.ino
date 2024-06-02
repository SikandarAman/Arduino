void setup() {
  pinMode(13, OUTPUT);    //to set pin for output or input
}

void loop() {
digitalWrite(13, HIGH);    //to provide on state to pin
delay(1000);    //delay 1000 milisekonds
digitalWrite(13, LOW);     //to provide off state to pin
delay(1000);    //delay 1000 milisekonds
}