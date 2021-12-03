#define led1 2
#define botao 3

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led1, INPUT);

}

void loop() {
  if(digitalRead(botao) == HIGH)
    digitalWrite(led1, HIGH);
}
