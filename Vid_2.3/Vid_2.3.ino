// C++ code
//
int switchpin = 8;
int ledpin = 11;
bool lstbtn = LOW;
bool crntbtn = LOW;
int ledlvl = 0;

void setup()
{
  pinMode(switchpin, INPUT);
  pinMode(ledpin, OUTPUT);
}

bool debounce(bool last)
{
  bool curr = digitalRead(switchpin);
  if(last != curr)
  {
    delay(5);
    curr = digitalRead(switchpin);
  }
  return curr;
}

void loop()
{
  crntbtn = debounce(lstbtn);
  
  if (lstbtn == LOW && crntbtn == HIGH)
  {
    ledlvl = ledlvl + 51;
  }
  lstbtn = crntbtn;
  if(ledlvl > 255) ledlvl = 0;
  analogWrite(ledpin, ledlvl);
}