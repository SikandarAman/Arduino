int latchPin = 11; // Pin connected to ST_CP of 74HC595
int clockPin = 9; // Pin connected to SH_CP of 74HC595
int dataPin = 12; // Pin connected to DS of 74HC595

//byte LEDs = 0xff; //1111 1111
byte LEDs = 0;

void setup() {
    Serial.begin(115200);
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

void loop()
{
    digitalWrite(latchPin, LOW);    //to enable input to come
    shiftOut(dataPin, clockPin, MSBFIRST, LEDs);  //LSBFIRST refers to least significant bit first and MSBFIRST refers to most significant bit first
    digitalWrite(latchPin, HIGH);   //to disable input to come
    Serial.print(LEDs, DEC);
    Serial.print(" = ");
    Serial.println(LEDs, BIN);
    LEDs++;
    delay(1000);
    //after 255, it will reset to 0 since it is a byte and can only store 8 bits
}