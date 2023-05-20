const int numLEDs = 8;  // Number of LEDs in the scanner
int leds[] = {2, 3, 4, 5, 6, 7, 8, 9};  // Digital pin numbers for LEDs

void setup() {
  for (int i = 0; i < numLEDs; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(leds[i], HIGH);
    delay(100);  // Adjust the delay time to control the scanning speed
    digitalWrite(leds[i], LOW);
  }
  for (int i = numLEDs - 1; i >= 0; i--) {
    digitalWrite(leds[i], HIGH);
    delay(100);
    digitalWrite(leds[i], LOW);
  }
}
