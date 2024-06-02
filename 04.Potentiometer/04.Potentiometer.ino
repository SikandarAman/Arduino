int GM = A2;
int Total = A0;
float readGM;
float readTotal;
void setup(){
    Serial.begin(9600);
    pinMode(GM, INPUT);
    pinMode(Total,INPUT);
}

void loop(){
    readGM = ((analogRead(GM))*(5.0)/1023.0);
    readTotal = ((analogRead(Total)*5.0)/1023.0);
    Serial.println(readTotal);
    Serial.print("GM = ");
    Serial.println(readGM);
    Serial.print("HM = ");
    Serial.println(readTotal-readGM);
    delay(1000);
}