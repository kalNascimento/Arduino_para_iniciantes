#define pin_led1 3

const int pin_led2 = 4;

void setup() {
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
}

void loop() {

  digitalWrite(pin_led1, HIGH);  
  delay(1000);

  digitalWrite(pin_led2, HIGH);   
  delay(1000);                     

  digitalWrite(pin_led1, HIGH);
  delay(500);

  digitalWrite(pin_led2, HIGH);   
  delay(500);

}
