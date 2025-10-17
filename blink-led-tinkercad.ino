// C++ code
//
void setup()
{
  pinMode(10, OUTPUT);
}

void loop()
{
  digitalWrite(10, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(10, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
}