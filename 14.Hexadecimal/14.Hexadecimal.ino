byte myByte = 0;
void setup() {
  Serial.begin(9600);
}
void loop() {
  Serial.print("myByte = ");
  Serial.println(myByte, HEX);
  myByte++;
  delay(100);
}