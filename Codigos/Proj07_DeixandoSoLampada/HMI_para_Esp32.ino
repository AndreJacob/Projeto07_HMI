void hmi_para_Esp32()
{
  if (Serial1.available()) 
  {   
    for (int i = 0; i <= 9; i++) // 5A A5 06 83 55 00 01 00 01 - Exemplo de estrutura recebida
    {
      Buffer[i] = Serial1.read();

     
      Serial.println(Buffer[4]);
      // Verifica o valor do byte na posição 4 (0x56, por exemplo)
      switch (Buffer[4]) 
      {
        case 0x56: // Leitura do botão lâmpada vindo da IHM
        {
          Serial.print("statusLampada: "); 
          byte byteBaixo = Buffer[8];
          byte byteAlto = Buffer[7];
          inteiroStatusLampada = (byteAlto << 8) | byteBaixo;
          StatusLampada = inteiroStatusLampada;
          Serial.println(StatusLampada); 
        
              break;
        }
      } // Fecha Switch Case
    } // Fecha o Looping For
  } // Fecha Serial Available
} // Fecha a função
