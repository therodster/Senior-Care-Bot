#include <Servo.h>
Servo leftMotor;
Servo rightMotor;
void setup() {
  leftMotor.attach(9); 
  rightMotor.attach(10);
}
void loop() {
  leftMotor.writeMicroseconds(1);
}
