int GM = A2;
float readGM;
int Led = 10;
void setup(){
    Serial.begin(9600);
    pinMode(GM, INPUT);
    pinMode(10,OUTPUT);
}

void loop(){
    readGM = ((analogRead(GM))*(5.0)/1023.0);
    Serial.print("GM = ");
    Serial.println(readGM);
    if(readGM>=2.0 && readGM<=3.0){
        digitalWrite(Led,HIGH);
    }
    if(readGM<2.0 || readGM>3.0){
        digitalWrite(Led,LOW);
    }
    delay(50);
}