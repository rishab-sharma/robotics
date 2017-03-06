int s1,s2;
void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
s1 = digitalRead(A0);
s2 = digitalRead(A1);
if(s1 == HIGH && s2 == HIGH)
{digitalWrite(2,HIGH);
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
}
else if(s1 == HIGH && s2 == LOW)
{digitalWrite(2,HIGH);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);}
else if(s1 == LOW && s2 == HIGH)
{digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);}
else if(s1 == LOW && s2 == LOW)
{digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);}

}
