// Programa : Pisque um LED 10x
// Autor : adrianoDUBIEL

int contador = 0; // variável para contar o número de piscadas

void setup()
{
  //Define a porta do led como saida
  pinMode(11, OUTPUT);
}

void loop()
{
  // se o contador atingiu 10, desliga o LED e sai do loop
  if(contador >= 10){
    digitalWrite(11, LOW); // desliga o LED
    return; // sai do loop
  }

  //Acende o led
  digitalWrite(11, HIGH);

  //Aguarda intervalo de tempo em milissegundos
  delay(1000);

  //Apaga o led
  digitalWrite(11, LOW);

  //Aguarda intervalo de tempo em milissegundos
  delay(1000);

  contador++; // incrementa o contador de piscadas
}
