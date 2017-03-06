int data;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(6,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
data = Serial.read();
if(data == 'w')
{analogWrite(6,255);
analogWrite(9,0);
analogWrite(10,255);
analogWrite(11,0);
}
else if(data == 'd')
{analogWrite(6,255);
analogWrite(9,0);
analogWrite(10,0);
analogWrite(11,0);}
else if(data == 'a')
{analogWrite(6,0);
analogWrite(9,0);
analogWrite(10,255);
analogWrite(11,0);}
else if(data == 's')
{analogWrite(6,0);
analogWrite(9,255);
analogWrite(10,0);
analogWrite(11,255);}
else if(data == 'f')
{analogWrite(6,0);
analogWrite(9,0);
analogWrite(10,0);
analogWrite(11,0);}
}
