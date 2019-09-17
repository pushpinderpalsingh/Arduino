/*************************************************************
  Download latest Blynk library here:
    https://github.com/blynkkk/blynk-library/releases/latest

  Blynk is a platform with iOS and Android apps to control
  Arduino, Raspberry Pi and the likes over the Internet.
  You can easily build graphic interfaces for all your
  projects by simply dragging and dropping widgets.

    Downloads, docs, tutorials: http://www.blynk.cc
    Sketch generator:           http://examples.blynk.cc
    Blynk community:            http://community.blynk.cc
    Social networks:            http://www.fb.com/blynkapp
                                http://twitter.com/blynk_app

  Blynk library is licensed under MIT license
  This example code is in public domain.

 *************************************************************
  This example runs directly on NodeMCU.

  Note: This requires ESP8266 support package:
    https://github.com/esp8266/Arduino

  Please be sure to select the right NodeMCU module
  in the Tools -> Board menu!

  For advanced settings please follow ESP examples :
   - ESP8266_Standalone_Manual_IP.ino
   - ESP8266_Standalone_SmartConfig.ino
   - ESP8266_Standalone_SSL.ino

  Change WiFi ssid, pass, and Blynk auth token to run :)
  Feel free to apply it to any other example. It's simple!
 *************************************************************/

/* Comment this out to disable prints and save space */
//#define BLYNK_PRINT Serial
int s1,s2,s3;
unsigned char LOAD1=0,LOAD2=0,LOAD3=0; 
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "34c332515f204fa0a3a68dfefa3bcdad";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Heman Walia";
char pass[] = "verna2017";

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 8442);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8442);
}
BLYNK_WRITE(V1)
{ s1 = param.asInt(); }
void loop()
{ LOAD1 = s1 ;
CONVERT_DISPLAY(LOAD1);
Blynk.run();
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
