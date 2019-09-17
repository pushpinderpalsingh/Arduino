#define m1 8
#define m2 9
#define m3 10
#define m4 12
#define m5 7 
int tu,state,ip;
void setup() {
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
  state=0;
 
  if(Serial.available()>0)
 { state=Serial.read(); }
 if(state=='3')
{    digitalWrite(m1,HIGH);
          digitalWrite(m2,HIGH);
          digitalWrite(m3,HIGH);
          digitalWrite(m4,HIGH); }
          state=Serial.read();
         
if(state=='4')
{       
 digitalWrite(m5,HIGH);
 state=0;
}
state=Serial.read();
if(state='5')
{ digitalWrite(m5,LOW); 
state=0; }
state=Serial.read();
if(state=='1')
{digitalWrite(m1,LOW);
state=0; }
state=Serial.read();
if(state='2')
{digitalWrite(m2,LOW);
state=0; } state=Serial.read();}

