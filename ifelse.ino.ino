
int button = 3;
int led = 4;

void setup() {
  pinMode(button,INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  if(digitalRead(button) == LOW){
    digitalWrite(led,LOW);
  }
  else{
  digitalWrite(led, HIGH);
  }

}
