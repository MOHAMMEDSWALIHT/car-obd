#include <Arduino.h>

#include <Wire.h>
#include <Adafruit_MCP23017.h>

Adafruit_MCP23017 mcp1, mcp2;

void setup()
{
  Wire.begin();
  mcp1.begin(0);
  mcp2.begin(1);

  for (int i = 0; i < 16; i++)
  {
    mcp1.pinMode(i, OUTPUT);
  }
  for (int i = 0; i < 6; i++)
  {
    mcp2.pinMode(i, INPUT);
  }

  mcp2.pinMode(6, OUTPUT);
  mcp2.pinMode(7, OUTPUT);

  mcp1.digitalWrite(0,LOW);
  mcp1.digitalWrite(3,LOW);
  mcp1.digitalWrite(6,LOW);
  mcp1.digitalWrite(9,LOW);
  mcp1.digitalWrite(12,LOW);
  mcp1.digitalWrite(15,LOW);

  mcp1.digitalWrite(1,HIGH);
  mcp1.digitalWrite(4,HIGH);
  mcp1.digitalWrite(7,HIGH);
  mcp1.digitalWrite(10,HIGH);
  mcp1.digitalWrite(13,HIGH);
  mcp2.digitalWrite(6,HIGH);


  // put your setup code here, to run once:
}

void loop()
{

  if (mcp2.digitalRead(0) == HIGH)
  {
    mcp1.digitalWrite(0, HIGH);
    mcp1.digitalWrite(1, LOW);
    mcp1.digitalWrite(2, HIGH);
    delay(1000);
    mcp1.digitalWrite(2, LOW);
  }

  else if (mcp2.digitalRead(1) == HIGH)
  {
    mcp1.digitalWrite(3, HIGH);
    mcp1.digitalWrite(4, LOW);
    mcp1.digitalWrite(5, HIGH);
    delay(1000);
    mcp1.digitalWrite(5, LOW);
  }
  else if (mcp2.digitalRead(2) == HIGH)
  {
    mcp1.digitalWrite(6, HIGH);
    mcp1.digitalWrite(7, LOW);
    mcp1.digitalWrite(8, HIGH);
    delay(1000);
    mcp1.digitalWrite(8, LOW);

  }
  else if (mcp2.digitalRead(3) == HIGH)
  {
    mcp1.digitalWrite(9, HIGH);
    mcp1.digitalWrite(10, LOW);
    mcp1.digitalWrite(11, HIGH);
    delay(1000);
    mcp1.digitalWrite(11, LOW);
  }

  else if (mcp2.digitalRead(4) == HIGH)
  {
    mcp1.digitalWrite(12, HIGH);
    mcp1.digitalWrite(13, LOW);
    mcp1.digitalWrite(14, HIGH);
    delay(1000);
    mcp1.digitalWrite(14, LOW);
  }
  
  else if (mcp2.digitalRead(5) == HIGH)
  {
    mcp1.digitalWrite(15, HIGH);
    mcp2.digitalWrite(6, LOW);
    mcp1.digitalWrite(7, HIGH);
    delay(1000);
    mcp1.digitalWrite(7, LOW);
  }
  // put your main code here, to run repeatedly:
}