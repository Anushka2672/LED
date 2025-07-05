void setup() 
{
pinMode(D0,OUTPUT);
}

void loop() 
{
  digitalWrite(D0,LOW);
  delay(2000);
  digitalWrite(D0,HIGH);
  delay(2000);
}
