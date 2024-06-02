#include <IRremote.hpp>
#define IR_RECEIVE_PIN 9 // Define the IR receiver pin

void setup() {
    Serial.begin(9600);
    IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK); // Start the receiver
}

void loop() {
    if (IrReceiver.decode()) {
        

        if((IrReceiver.decodedIRData.decodedRawData) == 0xE916FF00){
          Serial.println("0");
        }

        if((IrReceiver.decodedIRData.decodedRawData) == 0xF30CFF00){
          Serial.println("1");
        }

        if((IrReceiver.decodedIRData.decodedRawData) == 0xE718FF00){
          Serial.println("2");
        }

        if((IrReceiver.decodedIRData.decodedRawData) == 0xA15EFF00){
          Serial.println("3");
        }

        if((IrReceiver.decodedIRData.decodedRawData) == 0xF708FF00){
          Serial.println("4");
        }

        if((IrReceiver.decodedIRData.decodedRawData) == 0xE31CFF00){
          Serial.println("5");
        }

        if((IrReceiver.decodedIRData.decodedRawData) == 0xA55AFF00){
          Serial.println("6");
        }

        if((IrReceiver.decodedIRData.decodedRawData) == 0xBD42FF00){
          Serial.println("7");
        }

        if((IrReceiver.decodedIRData.decodedRawData) == 0xAD52FF00){
          Serial.println("8");
        }

        if((IrReceiver.decodedIRData.decodedRawData) == 0xB54AFF00){
          Serial.println("9");
        }

        if((IrReceiver.decodedIRData.decodedRawData) == 0xE619FF00){
          Serial.println("100+");
        }

        if((IrReceiver.decodedIRData.decodedRawData) == 0xF20DFF00){
          Serial.println("200+");
        }

        if((IrReceiver.decodedIRData.decodedRawData) == 0xBA45FF00){
          Serial.println("CH-");
        }

        if((IrReceiver.decodedIRData.decodedRawData) == 0xB847FF00){
          Serial.println("CH+");
        }

        if((IrReceiver.decodedIRData.decodedRawData) == 0xB946FF00){
          Serial.println("CH");
        }

        if((IrReceiver.decodedIRData.decodedRawData) == 0xBB44FF00){
          Serial.println("PREV");
        }

        if((IrReceiver.decodedIRData.decodedRawData) == 0xBF40FF00){
          Serial.println("NEXT");
        }

        if((IrReceiver.decodedIRData.decodedRawData) == 0xBC43FF00){
          Serial.println("PLAY/PAUSE");
        }

        if((IrReceiver.decodedIRData.decodedRawData) == 0xF807FF00){
          Serial.println("VOL-");
        }

        if((IrReceiver.decodedIRData.decodedRawData) == 0xEA15FF00){
          Serial.println("VOL+");
        }

        if((IrReceiver.decodedIRData.decodedRawData) == 0xF609FF00){
          Serial.println("EQ");
        }

        //print if none above is printed that unkown signal is received
        if((IrReceiver.decodedIRData.decodedRawData) != 0xE916FF00 && (IrReceiver.decodedIRData.decodedRawData) != 0xF30CFF00 && (IrReceiver.decodedIRData.decodedRawData) != 0xE718FF00 && (IrReceiver.decodedIRData.decodedRawData) != 0xA15EFF00 && (IrReceiver.decodedIRData.decodedRawData) != 0xF708FF00 && (IrReceiver.decodedIRData.decodedRawData) != 0xE31CFF00 && (IrReceiver.decodedIRData.decodedRawData) != 0xA55AFF00 && (IrReceiver.decodedIRData.decodedRawData) != 0xBD42FF00 && (IrReceiver.decodedIRData.decodedRawData) != 0xAD52FF00 && (IrReceiver.decodedIRData.decodedRawData) != 0xB54AFF00 && (IrReceiver.decodedIRData.decodedRawData) != 0xE619FF00 && (IrReceiver.decodedIRData.decodedRawData) != 0xF20DFF00 && (IrReceiver.decodedIRData.decodedRawData) != 0xBA45FF00 && (IrReceiver.decodedIRData.decodedRawData) != 0xB847FF00 && (IrReceiver.decodedIRData.decodedRawData) != 0xB946FF00 && (IrReceiver.decodedIRData.decodedRawData) != 0xBB44FF00 && (IrReceiver.decodedIRData.decodedRawData) != 0xBF40FF00 && (IrReceiver.decodedIRData.decodedRawData) != 0xBC43FF00 && (IrReceiver.decodedIRData.decodedRawData) != 0xF807FF00 && (IrReceiver.decodedIRData.decodedRawData) != 0xEA15FF00 && (IrReceiver.decodedIRData.decodedRawData) != 0xF609FF00){
          Serial.println("Unknown signal");
        }


        delay(250);
        IrReceiver.resume(); // Enable receiving of the next value
    }
}
