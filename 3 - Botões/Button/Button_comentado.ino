// Definimos os pinos usado para o botão e o led
const int BotaoVermelho = 2;
const int LedVermelho = 3;

// Criamos uma variavel que será usada como uma
// memoria posteriormente
int EstadoBotao = 0;

void setup()
{
  // Setamos o botão como um INPUT / entrada
  // e o led como OUTPUT / saida
  pinMode(BotaoVermelho, INPUT);
  pinMode(LedVermelho, OUTPUT);
}

void loop()
{
  // Aqui fazemos a autilização da nossa variavel
  // memoria, ela evitará que tenhamos q escrever
  // repetidamente q o botão_vermelho é uma digi-
  // talRead
  // Sem isso teriamos q escrever
  // if (digitalRead(botao_vermelho) == HIGH)
  EstadoBotao = digitalRead(BotaoVermelho);


  // Aqui iniciamos a lógica, quando o botão esti-
  // ver precionado ele será HIGH então o led acen-
  // derám, caso contrario ele ficará apagado
  if (EstadoBotao == HIGH)
  {
    digitalWrite(LedVermelho, HIGH);
  } else
  {
    digitalWrite(LedVermelho, LOW);
  }
}