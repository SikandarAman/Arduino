#include <LiquidCrystal.h>
int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup(){
lcd.begin(16, 2);
}

void loop(){
for(int i=0; i<200 ; i++){
lcd.setCursor(0, 0);
lcd.print(i);
delay(i);
}
lcd.clear();
delay(1000);
}