int GM = A2;
float readGM;
int Led = 10;
void setup(){
    Serial.begin(9600);
    pinMode(GM, INPUT);
    pinMode(10,OUTPUT);
}

void loop(){
    readGM = ((analogRead(GM))*(255.0)/1023.0);
    Serial.print("GM = ");
    Serial.println(readGM);
    analogWrite(Led, readGM);
    delay(50);
}