// blinking 2 leds after fading
// 2019.11.23

int pin1 = 10;
int pin2 = 11;

void setup()
{
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
}

void loop()
{
  blinkLed();
  blinkLed();
  blinkLed();
  blinkLed();
  blinkLed();
  fadeLed();
  fadeLed1();
  offled();
}

void blinkLed()
{
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, LOW);
  delay(500);
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, HIGH);
  delay(500);
  digitalWrite(pin2, LOW);
}

void fadeLed()
{
  for (int i = 0; i < 255; i++)
  {
    analogWrite(pin1, i);
    delay(10);
  }
  
  for (int i = 255; i > 0; i--)
  {
    analogWrite(pin1, i);
    delay(10);
  }
 }

 
void fadeLed1()
{
  for (int i = 0; i < 255; i++)
  {
    analogWrite(pin2, i);
    analogWrite(pin1, i);
    delay(10);
  }
  
  for (int i = 255; i > 0; i--)
  {
    analogWrite(pin2, i);
    analogWrite(pin1, i);
    delay(10);
  }
}

void offled()
{
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  delay(500);
}
