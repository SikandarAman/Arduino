int lightPin = A5;
int redLed = 9;
int greenLed = 10;
int lightVal;
void setup(){
Serial.begin(115200);
pinMode(lightPin, INPUT);
pinMode(redLed, OUTPUT);
pinMode(greenLed, OUTPUT);
}

void loop(){
lightVal = analogRead(lightPin);
Serial.println(lightVal);
if(lightVal >= 750){
digitalWrite(redLed, HIGH);
digitalWrite(greenLed, LOW);
} 
else{
digitalWrite(redLed, LOW);
digitalWrite(greenLed, HIGH);
}
delay(1000);
}