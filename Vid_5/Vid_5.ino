// C++ code
//
int motorpin = 9;

void setup()
{
  pinMode(motorpin, OUTPUT);
}

void loop()
{
  for(int i=0; i<=255; i++)
  {
    analogWrite(motorpin,i);
    delay(10);
  }
  
  delay(500);
  
  for(int i=255; i>=0; i--)
  {
    analogWrite(motorpin,i);
    delay(10);
  }
  
  delay(500);
}