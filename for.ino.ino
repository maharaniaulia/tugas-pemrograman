int ledA=10;
int ledB=11;

void setup() {
  pinMode(ledA,OUTPUT);
  pinMode(ledB,OUTPUT);
}

void loop() {
  for(int i=1; i<=7; i++){
    digitalWrite(ledA,HIGH);
    delay(750);
    digitalWrite(ledA,LOW);
    delay(750);
  }
  for(int i=1; i<=4; i++){
    digitalWrite(ledB,HIGH);
    delay(750);
    digitalWrite(ledB,LOW);
    delay(750);
  }

}
