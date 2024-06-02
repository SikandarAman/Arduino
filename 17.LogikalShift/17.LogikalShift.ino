int latchPin = 11; // Pin connected to ST_CP of 74HC595
int clockPin = 9; // Pin connected to SH_CP of 74HC595
int dataPin = 12; // Pin connected to DS of 74HC595

//byte LEDs = 0xff; //1111 1111
byte myByte = 0b01001101;

void setup() {
    Serial.begin(115200);
    pinMode(latchPin, OUTPUT);
    pinMode(clockPin, OUTPUT);
    pinMode(dataPin, OUTPUT);
}

void loop()
{
    digitalWrite(latchPin, LOW);    //to enable input to come
    shiftOut(dataPin, clockPin, MSBFIRST, myByte);  //LSBFIRST refers to least significant bit first and MSBFIRST refers to most significant bit first
    digitalWrite(latchPin, HIGH);   //to disable input to come
    
    //myByte = myByte*2;   //this does logical shift to the left
    //myByte = myByte/2;   //this does logical shift to the right

     if(myByte >= 128){
         myByte = myByte - 128;
         myByte = myByte*2 + 1;
     }
     else{
         myByte = myByte*2;
     }                                  // --->>> Cirkular Left shift
    
    //myByte = myByte*128(this shit shifts the one at LSB to MSB) + myByte/2;(This shit works on pulling others behing)       // --->>>Single Line code for Cirkular Right shift
    //myByte = myByte/128(this shit shifts the one at MSB to LSB) + myByte*2;(This shit works on others pushing ahead)      // --->>>Single Line code for Cirkular Left shift

    delay(1000);
}