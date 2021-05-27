// C++ code
//

int potpin = 0;

void setup()
{
  pinMode(potpin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println(analogRead(potpin));
  delay(800);
}