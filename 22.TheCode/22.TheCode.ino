#include <IRremote.hpp>
#define IR_RECEIVE_PIN 12 // Define the IR receiver pin
String IR_VALUE;
int redPin = 11;
int greenPin = 10;

// Define arrays for IR codes and their corresponding values
const unsigned long irCodes[] = {
    0xE916FF00, 0xF30CFF00, 0xE718FF00, 0xA15EFF00, 0xF708FF00, 0xE31CFF00,
    0xA55AFF00, 0xBD42FF00, 0xAD52FF00, 0xB54AFF00, 0xE619FF00, 0xF20DFF00,
    0xBA45FF00, 0xB847FF00, 0xB946FF00, 0xBB44FF00, 0xBF40FF00, 0xBC43FF00,
    0xF807FF00, 0xEA15FF00, 0xF609FF00
};

const String irValues[] = {
    "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "100+", "200+",
    "CH-", "CH+", "CH", "PREV", "NEXT", "PLAY/PAUSE", "VOL-", "VOL+", "EQ"
};

const int numCodes = 21;

void setup() {
    Serial.begin(115200);
    IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK); // Start the receiver
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
}

void loop() {
    if (IrReceiver.decode()) {
        bool found = false;
        for (int i = 0; i < numCodes; i++) {
            if (IrReceiver.decodedIRData.decodedRawData == irCodes[i]) {
                IR_VALUE = irValues[i];
                found = true;
                digitalWrite(greenPin, HIGH);
                digitalWrite(redPin, LOW);
                break;
            }
        }

        if (!found) {
            IR_VALUE = "Unknown signal received";
            digitalWrite(redPin, HIGH);
            digitalWrite(greenPin, LOW);
        }

        Serial.println(IR_VALUE);

        delay(250);
        digitalWrite(redPin, LOW);
        digitalWrite(greenPin, LOW);
        IrReceiver.resume(); // Enable receiving of the next value
    }
}
