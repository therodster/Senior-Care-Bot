#include <Servo.h>
//any value less than 1010 DNE
//1010 is the max full forward value
//getting closer to 1010 is going faster
//getting closer to 1500 is slower
//1500 is the stop value
//gettting closer to 1500 is slower
//gettting closer to 1980 is fast
//1980 is the max full reverse value
bool const FORWARD = true;
bool const REVERSE = false;
private int speed = 0;
void setSpeed(int val){
  speed = val;
}
void setDirection(bool direction){
  if(direction){
    this.write(val);
  }
  else if(!direction){
    this.write(val);
  }
}
class Motor
{
  public:    
    Motor(int pin);
  private: 
    int pin;
}

Servo leftMotor;
Servo rightMotor;
void setup() {
  leftMotor.attach(9); 
}
void loop() {
}
