#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>

// Wifi login data:
#define ssid "Your WIFI NAME"
#define password "Your WIFI PW"

// HTML for the Startpage
String html = R"(
<!DOCTYPE html>
<html>
<head>
  <title>ESP-Startseite</title>
  <style>
    body{background:#282a36;color:#f8f8f2;font:1rem 'Courier New',Courier,monospace;margin:0;padding:0}h1{color:#ff79c6}a{color:#8be9fd;text-decoration:none}a:hover{color:#50fa7b}ul{list-style:none;padding:0}li{margin:10px 0}li:before{content:"▸";margin-right:5px;color:#bd93f9}
  </style>
</head>
<body>
  <h1>ESP-Startseite</h1>
  <p>Functions:</p>
  <ul>
    <li><a href="/hello" target="_blank">Print Hello Status</a></li>
    <li><a href="/led" target="_blank">Force a LED test</a></li>
  </ul>
</body>
</html>
)";


// Funkzionen

// Flash LED Event
void blinkStroboLED()
{
  digitalWrite(LED_BUILTIN, LOW);
  delay(10);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(20);
  digitalWrite(LED_BUILTIN, LOW);
  delay(30);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(40);
  digitalWrite(LED_BUILTIN, LOW);
  delay(50);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(60);
  digitalWrite(LED_BUILTIN, LOW);
  delay(70);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(80);
  digitalWrite(LED_BUILTIN, LOW);
  delay(90);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
}

// LED flashes once
void oneblinkLED()
{
  digitalWrite(LED_BUILTIN, LOW);
  delay(10);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(10);
  digitalWrite(LED_BUILTIN, LOW);
}

// Webser host on port 80
ESP8266WebServer server(80);

// == http://helloESP.local/
const char *dns_name = "helloESP";
int Count = 0;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);

  Serial.begin(9600);
  Serial.println();
  Serial.println("WiFi connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  Serial.println();
  Serial.println("Connecting");

  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
    oneblinkLED();
  }

  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println();
  Serial.println("Successful");
  Serial.println("ESP IP Address: ");
  Serial.println("http://" + WiFi.localIP().toString());


  if (MDNS.begin(dns_name))
  {
    Serial.println("DNS started, accessible under: ");
    Serial.println("http://" + String(dns_name) + ".local/");
  }

  server.onNotFound([]()
                    { server.send(404, "text/plain", "Link was not found!"); });

  server.on("/", []()
            {
    server.send(200, "text/html", html);
  });

  // Add new route to display the value of "Count" on the web page
  server.on("/hello", []()
            {
              String countStr = ("#" + String(Count) + " Hello");
              server.send(200, "text/plain", countStr);
              oneblinkLED();
              oneblinkLED();

            });

  server.on("/led", []()
            {
              String countStr = ("LED Test");
              server.send(200, "text/plain", countStr);
              blinkStroboLED();
            });

  server.begin();
  Serial.println("Web server started.");
}

void loop()
{
  // allows you to trigger an action when you call up the web page
  server.handleClient();
  MDNS.update();

  // Print nummer
  Count++;

  Serial.println("#" + String(Count) + " Hello");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(2000);
  digitalWrite(LED_BUILTIN, LOW);
}

