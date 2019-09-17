#define m1 8
#define m2 9
#define m3 10
#define m4 12
#define m5 7
int state;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(m1,OUTPUT);
pinMode(m2,OUTPUT);
pinMode(m3,OUTPUT);
pinMode(m4,OUTPUT);
pinMode(m5,OUTPUT);
digitalWrite(m1,LOW);
digitalWrite(m2,LOW);
digitalWrite(m3,LOW);
digitalWrite(m4,LOW);
digitalWrite(m5,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0)
{ state=Serial.read();}
if(state=='3')
{ digitalWrite(m1,HIGH);
  digitalWrite(m2,HIGH);
  digitalWrite(m3,HIGH);
  digitalWrite(m4,HIGH);
}
else if(state=='4')
digitalWrite(m5,HIGH);
else if(state=='5')
digitalWrite(m5,LOW);
else if(state=='1')
{ digitalWrite(m1,LOW);
delay(100);
digitalWrite(m1,HIGH); }
else if(state=='2')
{ digitalWrite(m2,LOW);
delay(100);
digitalWrite(m2,HIGH); }
if(state=='7')
{digitalWrite(m1,LOW);
digitalWrite(m2,LOW);
digitalWrite(m3,LOW);
digitalWrite(m4,LOW);
digitalWrite(m5,LOW); }
if(Serial.available()>0)
{ state=Serial.read();}
}
