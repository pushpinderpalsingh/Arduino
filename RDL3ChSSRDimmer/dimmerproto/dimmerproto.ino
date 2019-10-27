int s1=8;                  //connect switch1 to pin 2 of arduino
int s2=9;                  //connect switch2 to pin 3 of arduino
int s3=10;                  //connect switch3 to pin 4 of arduino
int s4=11;                 //connect switch4 to pin 5 of arduino
int s5=12;                 //connect switch5 to pin 6 of arduino 
int s6=13;

void setup()
{
  Serial.begin(9600);      // initialize the serial communications
  pinMode(s1,INPUT);
  pinMode(s2,INPUT);
  pinMode(s3,INPUT);
  pinMode(s4,INPUT);
  pinMode(s5,INPUT);
  pinMode(s6,INPUT);
}

void loop()
{
  unsigned char LOAD1=0,LOAD2=0,LOAD3=0; 
   if(s1==LOW)         
   {
     if(LOAD1<100)
     LOAD1++;
     Serial.write('A');
     CONVERT_DISPLAY(LOAD1);   
     delay(500); 0        
     }
    
    if(s2==LOW)         
     {
       if(LOAD1>0)
        LOAD1--;
  Serial.write('A');
  CONVERT_DISPLAY(LOAD1);  
  delay(500);        
      }
   
   if(s3==LOW)         
   {
     if(LOAD2<100)
     LOAD2++;
     Serial.write('B');
     CONVERT_DISPLAY(LOAD2);   
     delay(500);         
     }
     
     if(s4==LOW)          
     {
       if(LOAD2>0)
        LOAD2--;
  Serial.write('B');
  CONVERT_DISPLAY(LOAD2);  
  delay(500);        
      }
  
  if(s5==LOW)        
   {
     if(LOAD3<100)
     LOAD3++;
     Serial.write('C');
     CONVERT_DISPLAY(LOAD3);   
     delay(500);         
     }
    
     if(s6==LOW)          
     {
       if(LOAD3>0)
        LOAD3--;
  Serial.write('C');
  CONVERT_DISPLAY(LOAD3);  
  delay(500);        
      }
}
  
  
void CONVERT_DISPLAY(unsigned int d)
{
   unsigned char dig1,dig2,dig3,dig[3];
   unsigned char x;
   unsigned char temp;
   temp=d;
   temp=temp/10;
   dig1=d%10;
   dig2=temp%10;
   dig3=temp/10;
        
        dig[0]=dig3;
  dig[1]=dig2;
  dig[2]=dig1;

  for(x=0;x<3;x++)
  {
           temp=dig[x]|0x30;
           Serial.write(temp);    
    }                   
} 
