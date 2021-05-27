// C++ code
//
int sensepin = 0;
int ledpin = 9;

void setup()
{
  analogReference(DEFAULT);
  pinMode(ledpin, OUTPUT);
}

void loop()
{
  int var = analogRead(sensepin);
  
  var = constrain(var, 750, 900);
  int ledlvl = map(var, 750, 900, 255, 0);
  
  analogWrite(ledpin, ledlvl);
}