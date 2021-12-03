/* Programa comentado p/ tutorial 2 - Entradas e saida digitais parte 2
  Saidas digitais*/

#define led1 2
/* Define o nome botao para o pino 3 do Arduino */
#define botao 3

void setup() {
  pinMode(led1, OUTPUT);
  /* Seta o led1 como uma entrada */
  pinMode(led1, INPUT);

}

void loop() {
  /*  Ao apertar o botão no TinkerCad o arduino entenderá q a entrada 3 / botao
      está em nivel lógico alto / HIGH  e o led1 acenderá */
  if (digitalRead(botao) == HIGH) {
    digitalWrite(led1, HIGH);
    delay(100);
  }
}
