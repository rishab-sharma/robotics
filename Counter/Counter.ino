int s1,s2;int count = 0;
void setup() {
pinMode(A1,INPUT);
pinMode(A2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
s1 = digitalRead(A0);
s2 = digitalRead(A1);
if(s1 == HIGH && s2 == LOW)
{
  while(digitalRead(A0) == HIGH){}
  if(s2 == HIGH)
  count++;
 }
 else if(s1 == LOW && s2 == HIGH)
{
  while(digitalRead(A1) == HIGH){}
  if(s1 == HIGH)
  count--;
 }
 if(Serial.read() == 'a')
{if(count > 0)
  Serial.println(count);
  else Serial.println(0); }
}
