#include <Arduino.h>;

// Variable for counting the Print
int Count = 0;

void setup() {
  // Initialisation of the serial monitor
  Serial.begin(9600);

  // Configure in the onboard LED as an output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {

  // Print nummer
  Count++;

  Serial.println("#" + String(Count) + " Hello");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(2000);
  digitalWrite(LED_BUILTIN, LOW);
}
