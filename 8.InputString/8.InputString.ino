String str;
String message1= "Enter your message : ";
void setup(){
Serial.begin(115200);
}
void loop(){
    Serial.print(message1);
    while(Serial.available()==0){     //to wait till there is input
    }
str= Serial.readString();
Serial.print(" Message = ");
Serial.println(str);
}