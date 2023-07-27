#include <Arduino.h>
#include <ESP8266WiFi.h>

// Wifi login data:
#define ssid "Your WIFI NAME"
#define password "Your WIFI PW"


// LED flashes once
void oneblinkLED()
{
  digitalWrite(LED_BUILTIN, LOW);
  delay(10);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(10);
  digitalWrite(LED_BUILTIN, LOW);
}

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);

  Serial.begin(9600);
  Serial.println();
  Serial.println("WiFi connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);
  Serial.print("The connection gets established ...");
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }

  Serial.println();

  Serial.print("Connected! IP address: ");
  Serial.println(WiFi.localIP());

}

void loop()
{

}