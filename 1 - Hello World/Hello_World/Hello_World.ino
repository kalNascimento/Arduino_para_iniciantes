// Como o nome sugere ele define que a variavel pin_led1
// Está atribuida ao pino 3 do Arduino Uno
#define pin_led1 3

// Faz a mesma coisa q o #define, atribui ao pino 4 do Arduino Uno
// a variavel pin_led2
const int pin_led2 = 4;

void setup() {
  //Inicializa as variaveis pino_led como saida
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
}

// A função loop que se repete infinitamente
// E é onde colocamos nosso código
void loop() {

  // Atribui HIGH - Ligado ao pin_led1
  digitalWrite(pin_led1, HIGH); 
  // Pausa o código por 1000ms ou 1s  
  delay(1000);

  digitalWrite(pin_led2, HIGH);   
  delay(1000);                     

  // Atribui LOW - Desligado ao pin_led1
  digitalWrite(pin_led1, HIGH);
  // Pausa o código por 500ms ou 0.5s
  delay(500);

  digitalWrite(pin_led2, HIGH);   
  delay(500);

}
