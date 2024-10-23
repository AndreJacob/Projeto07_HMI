// Definir o pino do LED (no ESP32, geralmente o LED embutido está no pino 2)
#define LED_PIN 2

void setup() {
  // Definir o pino como saída
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Ligar o LED
  digitalWrite(LED_PIN, HIGH);
  // Aguardar 1 segundo
  delay(1000);
  // Desligar o LED
  digitalWrite(LED_PIN, LOW);
  // Aguardar 1 segundo
  delay(1000);
}