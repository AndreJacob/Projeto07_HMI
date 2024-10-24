
// Criando Buffer e bytes para ler e escrever na IHM
unsigned char Buffer[9];
unsigned char teste[9];

#define resp_Lamp_address     0x72
#define ps_Lampada_address    0x56

// Criando os framers com 8 bytes para ler e escrever na IHM

unsigned char   byte_ps_Lampada[8] = {0x5A, 0xA5, 0x05, 0x82, ps_Lampada_address, 0x00, 0x00, 0x00};      // 0x56
unsigned char   byte_resp_Lamp[8] = {0x5A, 0xA5, 0x05, 0x82, resp_Lamp_address , 0x00, 0x00, 0x00};       // 0x72

unsigned long Elapsed_Time[20];
unsigned long End_Time[20];
unsigned long Start_Time[20] = {0};

int StatusLampada, inteiroStatusLampada;

//Definição dos pinos do controlador
//Saidas digiais
#define pin_Y3 27  // Lampada

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); // (USB)
  Serial1.begin(115200); // (TTL)

  pinMode(pin_Y3, OUTPUT); // Lampada
  digitalWrite(pin_Y3, LOW);

  byte_ps_Lampada[6] = highByte(0);
  byte_ps_Lampada[7] = lowByte(0);
  Serial1.write(byte_ps_Lampada, 8); // 0x56
  StatusLampada = 0;

}

void loop() {
  hmi_para_Esp32(); 
  ciclo_rx_tx();
  ciclo_rx_tx();
  ciclo_rx_tx();
  ciclo_rx_tx();

  saidas();
  ciclo_rx_tx();
  ciclo_rx_tx();

  ciclo_rx_tx();
  ciclo_rx_tx();
  delay(10);

}
