#define m14f 7
#define m23f 12
#define m14b 11
#define m23b 10
#define m5 8
#define trans 9
char state;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(m14f,OUTPUT);
pinMode(m23f,OUTPUT);
pinMode(m23b,OUTPUT);
pinMode(m14b,OUTPUT);
pinMode(m5,OUTPUT);
pinMode(trans,OUTPUT);
digitalWrite(m14f,LOW);
digitalWrite(m23f,LOW);
digitalWrite(m23b,LOW);
digitalWrite(m14b,LOW);
digitalWrite(m5,LOW);
digitalWrite(trans,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0)
state=Serial.read();
if(state=='F')
{ digitalWrite(m14f,HIGH);
digitalWrite(m23f,HIGH);
digitalWrite(m14b,LOW);
digitalWrite(m23b,LOW) ;
 digitalWrite(trans,LOW);
}
if(state=='G')
digitalWrite(m14f,LOW);
if(state=='I')
digitalWrite(m23f,LOW);
if(state=='L')
digitalWrite(m5,HIGH);
if(state=='R')
digitalWrite(m5,LOW);
if(state=='U')
{digitalWrite(m14f,LOW);
digitalWrite(m23f,LOW);
digitalWrite(m23b,LOW);
digitalWrite(m14b,LOW);
digitalWrite(m5,LOW);
digitalWrite(trans,LOW);}
if(state=='B')
{ digitalWrite(m14f,LOW);
digitalWrite(m23f,LOW);
digitalWrite(m14b,HIGH);
digitalWrite(m23b,HIGH);
digitalWrite(trans,HIGH);}
if(state=='H')
{ digitalWrite(m14f,LOW);
digitalWrite(m23f,LOW);
digitalWrite(m14b,HIGH);
digitalWrite(m23b,LOW); }
if(state=='J')
{ digitalWrite(m14f,LOW);
digitalWrite(m23f,LOW);
digitalWrite(m14b,LOW);
digitalWrite(m23b,HIGH); } }
