int latchPin = 11; // Pin connected to ST_CP of 74HC595
int clockPin = 9; // Pin connected to SH_CP of 74HC595
int dataPin = 12; // Pin connected to DS of 74HC595

//byte LEDs = 0xff; //1111 1111
byte LED1s = 0xFA;  

void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

void loop(){
    digitalWrite(latchPin, LOW);    //to enable input to come
    shiftOut(dataPin, clockPin, MSBFIRST, LED1s);  //LSBFIRST refers to least significant bit first and MSBFIRST refers to most significant bit first
    digitalWrite(latchPin, HIGH);   //to disable input to come
    delay(250);
}