// C++ code
//
int switchpin = 8;
int ledpin = 13;
bool lstbtn = LOW;
bool ledon = false;
bool crntbtn = LOW;

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
    ledon = !ledon;
  }
  
  lstbtn = crntbtn;
  digitalWrite(ledpin, ledon);
}