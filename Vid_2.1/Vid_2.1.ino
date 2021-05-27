// C++ code
//
int switchpin = 8;
int ledpin = 13;
bool lstbtn = LOW;
bool ledon = false;

void setup()
{
  pinMode(switchpin, INPUT);
  pinMode(ledpin, OUTPUT);
}

void loop()
{
  if (digitalRead(switchpin) == HIGH && lstbtn == LOW)
  {
    ledon = !ledon;
    lstbtn = HIGH;
  }
  else
  {
    lstbtn = digitalRead(switchpin);
  }
  digitalWrite(ledpin, ledon);
}