int input_num;
int LedPin= 8;
String message1= "Enter number of Blinks : ";
void setup(){
Serial.begin(115200);
pinMode(LedPin, OUTPUT);
}
void loop(){
    Serial.print(message1);
    while(Serial.available()==0){     //to wait till there is input
    }
input_num= Serial.parseInt();
Serial.print("Blinks = ");
Serial.println(input_num);
for(int i=0; i<input_num; i++){
    digitalWrite(LedPin, HIGH);
    delay(500);
    digitalWrite(LedPin, LOW);
    delay(500);
}

}