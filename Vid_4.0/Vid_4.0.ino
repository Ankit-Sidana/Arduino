// C++ code
//
int sensepin = 0;

void setup()
{
  analogReference(DEFAULT);
  
  Serial.begin(9600);
}

void loop()
{
  Serial.println(analogRead(sensepin));
  delay(500);
}