// Programa : Pisque um LED
// Autor : adrianoDUBIEL
  saida=11
void setup()
{
  //Define a porta do led como saida
  pinMode(saida, OUTPUT);
}
  
void loop()
{
  //Acende o led
  digitalWrite(saida, HIGH);
    
  //Aguarda intervalo de tempo em milissegundos
  delay(1000);
    
  //Apaga o led
  digitalWrite(saida, LOW);
    
  //Aguarda intervalo de tempo em milissegundos
  delay(1000);
}
