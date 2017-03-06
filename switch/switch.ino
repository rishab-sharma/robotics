int sw1,sw2,sw3,sw4;
void setup() {
  // put your setup code here, to run once:
  for(int i=5;i<=13;i++)
  {
    pinMode(i,OUTPUT);
  }
    pinMode(A1,OUTPUT);
    pinMode(A2,OUTPUT);
    pinMode(A3,OUTPUT);
    pinMode(A4,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
sw1=digitalRead(A1);
sw2=digitalRead(A2);
sw3=digitalRead(A3);
sw4=digitalRead(A4);
if(sw1==HIGH)
{
  digitalWrite(5,HIGH);
  }
  else if(sw2==HIGH)
  {digitalWrite(6,HIGH);}
  else if(sw3==HIGH)
  {digitalWrite(7,HIGH);}
  else if(sw4==HIGH)
  {digitalWrite(8,HIGH);}
  else
  {digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);}
}
