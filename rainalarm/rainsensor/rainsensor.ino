
int rainsense= 0; // analog sensor input pin 0
int buzzerout= 9; // digital output pin 10 - buzzer output
void setup()  
{  pinMode(buzzerout, OUTPUT);
   pinMode(rainsense, INPUT);
}
void loop(){
   int rainSenseReading = analogRead(rainsense);
   if (rainSenseReading<=450)
      digitalWrite(buzzerout,HIGH);
   else if (rainSenseReading>450)  
      {
        digitalWrite(buzzerout, LOW);
      
       rainSenseReading = 1000; 
       }}
  

       
