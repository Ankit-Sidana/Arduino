// C++ code
//
#include <Servo.h>
Servo s;

int servopin = 9;

void setup()
{
  s.attach(servopin);
}

void loop()
{
  for(int i=0; i<=180; i=i+20)
  {
    s.write(i);
    delay(1000);
  }
}