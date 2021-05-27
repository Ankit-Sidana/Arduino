// C++ code
//
int switchpin = 8;
int ledpin = 13;


void setup()
{
  pinMode(switchpin, INPUT);
  pinMode(ledpin, OUTPUT);
}

void loop()
{
  if (digitalRead(switchpin) == HIGH)
  {
    digitalWrite(ledpin, HIGH);
  }
  else
  {
    digitalWrite(ledpin, LOW);
  }
  
}