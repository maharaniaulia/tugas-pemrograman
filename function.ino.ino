int ledA=11;
int ledB=12;

void setup() {
  pinMode(ledA,OUTPUT);
  pinMode(ledB,OUTPUT);
}

void loop() {
  kerlip(1,7,ledA,750);
  kerlip(1,4,ledB,500);
}

void kerlip(int batasmin, int batasmax, int led, int waktu){
  for(int i=batasmin; i<=batasmax; i++){
    digitalWrite(led,HIGH);
    delay(waktu);
    digitalWrite(led,LOW);
    delay(waktu);  
  }
}
