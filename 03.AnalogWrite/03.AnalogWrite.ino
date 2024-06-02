int redPin=9;
void setup(){
pinMode(redPin, OUTPUT);
}
void loop(){
    for(int i=0;i<255;i++){
    analogWrite(redPin,i);
    delay(i);}
}