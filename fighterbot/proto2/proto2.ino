#define m1 8
#define m2 9
#define m14 6
#define m3 10
#define m4 12
#define m23 13
#define m5 7
#define swi 5
char state;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(m1,OUTPUT);
pinMode(m2,OUTPUT);
pinMode(m3,OUTPUT);
pinMode(m4,OUTPUT);
pinMode(m5,OUTPUT);
pinMode(m14,OUTPUT);
pinMode(m23,OUTPUT);
digitalWrite(m1,LOW);
digitalWrite(m2,LOW);
digitalWrite(m3,LOW);
digitalWrite(m4,LOW);
digitalWrite(m5,LOW);
digitalWrite(m14,LOW);
digitalWrite(m23,LOW);
digitalWrite(swi,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0)
state=Serial.read();
if(state=='F')
{ digitalWrite(m1,HIGH);
digitalWrite(m2,HIGH);
digitalWrite(m3,HIGH);
digitalWrite(m4,HIGH);
digitalWrite(m14,LOW);
digitalWrite(m23,LOW) ;
digitalWrite(swi,LOW); 
}
if(state=='G')
{ digitalWrite(m1,LOW);
digitalWrite(m4,LOW); }
if(state=='I')
{digitalWrite(m2,LOW);
digitalWrite(m3,LOW); }
if(state=='L')
digitalWrite(m5,HIGH);
if(state=='R')
digitalWrite(m5,LOW);
if(state=='U')
{digitalWrite(m1,LOW);
digitalWrite(m2,LOW);
digitalWrite(m3,LOW);
digitalWrite(m4,LOW);
digitalWrite(m5,LOW); 
digitalWrite(m14,LOW);
digitalWrite(m23,LOW);}
if(state=='B')
{ digitalWrite(m1,LOW);
digitalWrite(m2,LOW);
digitalWrite(m3,LOW);
digitalWrite(m4,LOW);
digitalWrite(m14,HIGH);
digitalWrite(m23,HIGH);
digitalWrite(swi,HIGH);}
if(state=='H')
{ digitalWrite(m1,LOW);
digitalWrite(m2,LOW);
digitalWrite(m3,LOW);
digitalWrite(m4,LOW);
digitalWrite(m14,HIGH);
digitalWrite(m23,LOW); }
if(state=='J')
{ digitalWrite(m1,LOW);
digitalWrite(m2,LOW);
digitalWrite(m3,LOW);
digitalWrite(m4,LOW);
digitalWrite(m14,LOW);
digitalWrite(m23,HIGH); } }
