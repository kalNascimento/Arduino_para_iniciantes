const int BotaoVermelho = 2;
const int LedVermelho = 3;

int EstadoBotao = 0;

void setup()
{
  pinMode(BotaoVermelho, INPUT);
  pinMode(LedVermelho, OUTPUT);
}

void loop()
{
  EstadoBotao = digitalRead(BotaoVermelho);

  if (EstadoBotao == HIGH)
  {
    digitalWrite(LedVermelho, HIGH);
  } else
  {
    digitalWrite(LedVermelho, LOW);
  }
}