int latchPin = 11; // Pin connected to ST_CP of 74HC595
int clockPin = 9; // Pin connected to SH_CP of 74HC595
int dataPin = 12; // Pin connected to DS of 74HC595
//byte LEDs = 0xff; //1111 1111
byte myByte = 0xff;
byte myByte_Flipped;

void setup() {
    Serial.begin(115200);
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

void loop()
{   //Orginal serial to parallel
    digitalWrite(latchPin, LOW);    //to enable input to come
    shiftOut(dataPin, clockPin, MSBFIRST, myByte);  //LSBFIRST refers to least significant bit first and MSBFIRST refers to most significant bit first
    digitalWrite(latchPin, HIGH);   //to disable input to come
    delay(1000);

  //BIT FLIPPER NOW
    myByte_Flipped = 0xff - myByte;
   //myByte_Flipped = ~myByte;

     digitalWrite(latchPin, LOW);    //to enable input to come
     shiftOut(dataPin, clockPin, MSBFIRST, myByte_Flipped);  //LSBFIRST refers to least significant bit first and MSBFIRST refers to most significant bit first
     digitalWrite(latchPin, HIGH);   //to disable input to come
     delay(1000);
}