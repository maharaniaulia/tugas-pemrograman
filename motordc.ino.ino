
void setup() {
  analogWrite(5,180);
}

void loop() {
  for(int i=255; i>=0; i-=15)
  {
    analogWrite(5,i);
    delay(578);
  }
}
