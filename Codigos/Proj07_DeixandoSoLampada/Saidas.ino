void saidas()
{
  // ****************************** CONTROLE DAS SAÍDAS DIGITAIS FÍSICAS Y1, Y2, Y3, Y4, Y5 E Y6 ******************************************************
 
  // Comando das saídas digitais da Lampada (Independente se o forno esta ligado)
  if (StatusLampada == 1 ){          
      digitalWrite(pin_Y3, 1);  // pin_Y3 - Relé Lampada
  }
  else{
      digitalWrite(pin_Y3, 0);        
  }
  
    // .................................................................................................................................................
}
