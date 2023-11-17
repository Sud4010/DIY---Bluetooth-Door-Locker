char t;
#include "SoftwareSerial.h"

SoftwareSerial btserial(2,3); //RX,TX

void setup() 
{
pinMode(11, OUTPUT);   
pinMode(12,OUTPUT);   
btserial.begin(9600);
Serial.begin(9600);
digitalWrite(11, LOW);
digitalWrite(12, LOW);
}
 
void loop() 
{

digitalWrite(11, LOW);
digitalWrite(12, LOW);

if(btserial.available())
{
  t = btserial.read();
  Serial.println(t);
}
 
if(t == 'F'){            
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
}
 
else if(t == 'B'){
  digitalWrite(11,LOW);      
  digitalWrite(12,HIGH);
}
  
else if(t == 'R')
{      
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
}
 
else  if(t == 'L')
{
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
}

 
else 
{      
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
}

}