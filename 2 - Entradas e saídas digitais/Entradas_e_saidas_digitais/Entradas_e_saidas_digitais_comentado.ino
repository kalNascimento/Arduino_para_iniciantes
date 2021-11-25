/* Programa comentado p/ tutorial 2 - Entradas e saida digitais parte 1
  Saidas digitais*/

/* Define o nome led1 para o pino 2 do Arduino*/
#define led1 2

void setup() {
  /* Seta o led1 como uma saida */
  pinMode(led1, OUTPUT);

}

void loop() {
  /* Escreve na saida digital led1 HIGH - Nivel logico alto*/
  digitalWrite(led1, HIGH);
  /* Após grava o código no arduino ou simular no TinkerCad
     o led montado no pino 2 do Arduino acenderá altomaticamente*/
}
