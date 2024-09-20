#include <LoRa.h>

void setup() {
  Serial.begin(9600);
  while (!Serial);

  if (!LoRa.begin(920E6)) {
    Serial.println("LoRa initialization failed. Check your LoRa module.");
    while (true);
  }
}

void loop() {
  String message = "Hello, World!";
  LoRa.beginPacket();
  LoRa.print(message);
  LoRa.endPacket();
  Serial.println("Message sent: " + message);
  delay(5000);
}
