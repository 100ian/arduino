int t = 2000;
void setup() {
  pinMode(2,INPUT_PULLUP);
  for(int i = 6; i < 11; i++)
  {pinMode(i,OUTPUT);}
}


void loop() {
  {
    digitalWrite(8,HIGH);
    digitalWrite(7,HIGH);
    delay(4*t);
    while(digitalRead(2)>0)
    {
      delay(20);
    }
    delay(random(1,4)*t);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    delay(t);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    delay(t/2);
    digitalWrite(7,LOW);
    digitalWrite(6,HIGH);
    delay(3*t);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(9,HIGH);
    delay(t);
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
  }
}
