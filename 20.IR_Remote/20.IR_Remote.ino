#include <IRremote.hpp>
int danger = 10;
#define IR_RECEIVE_PIN 9 // Define the IR receiver pin

void setup() {
    Serial.begin(9600);
    IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK); // Start the receiver
    pinMode(danger, OUTPUT);
}

void loop() {
    if (IrReceiver.decode()) {
        Serial.println(IrReceiver.decodedIRData.decodedRawData,HEX);
        if((IrReceiver.decodedIRData.decodedRawData) == 0xE916FF00){
          digitalWrite(danger, HIGH);
        }
        else{
          digitalWrite(danger, LOW);
        }
        delay(1000);
        IrReceiver.resume(); // Enable receiving of the next value
    }
}
