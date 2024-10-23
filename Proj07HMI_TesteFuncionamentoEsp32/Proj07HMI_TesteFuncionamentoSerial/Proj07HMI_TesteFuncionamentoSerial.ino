// Definir os pinos para a comunicação Serial 2 (UART2)
#define RXD2 16  // Pino RX da UART2
#define TXD2 17  // Pino TX da UART2

void setup() {
  // Inicializa o monitor serial padrão (Serial) para saída no PC
  Serial.begin(115200);
  while (!Serial) {
    ;  // Aguarda a inicialização da Serial
  }
  Serial.println("Iniciando a leitura da Serial2...");

  // Inicializa a UART2 (Serial2) a 115200 bps
  Serial2.begin(115200, SERIAL_8N1, RXD2, TXD2);
}

void loop() {
  // Verifica se há dados disponíveis para ler na Serial2
  if (Serial2.available()) {
    // Lê os dados da Serial2 e exibe no monitor serial
    while (Serial2.available()) {
      char incomingByte = Serial2.read();  // Lê byte recebido
      Serial.print(incomingByte);          // Exibe o byte no monitor serial (Serial)
    }
  }
}
