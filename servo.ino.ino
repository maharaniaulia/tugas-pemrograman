#include <Servo.h>
Servo servomahar;

void setup() {
  servomahar.attach(6);
}

void loop() {
  servomahar.write(20);
  delay(1200);
  servomahar.write(60);
  delay(1200);
  servomahar.write(100);
  delay(1200);

}
