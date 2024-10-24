 void Esp32_para_hmi() {

  // Escrevendo Ligado ou Desligado no botao Lampada 0x71
  byte_resp_Lamp[6] = highByte(StatusLampada);
  byte_resp_Lamp[7] = lowByte(StatusLampada);
  Serial1.write(byte_resp_Lamp, 8);  // 0x72

}
