void setup() 
{
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
}

void loop() 
{
  digitalWrite(D2,HIGH);
  delay(1000);
  digitalWrite(D2,LOW);

  
  digitalWrite(D3,HIGH);
  delay(1000);
  digitalWrite(D3,LOW);

  
}
