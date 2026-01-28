#include <Arduino.h>

#define LED 2

void setup() {
  // put your setup code here, to run once:
 Serial.begin(115200);
 Serial.println("Hello");
 pinMode(LED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH);
  delay(1300);
  digitalWrite(LED, LOW);
  delay(1300);
}
