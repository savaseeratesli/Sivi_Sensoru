#include <Arduino.h>

//Sıvı var 1 , Sıvı yok 0 cihaz çıkışı 

void setup()
{
  pinMode(3,INPUT);//Sensör değeri
  pinMode(5,OUTPUT);//Led
  pinMode(6,OUTPUT);//Led

  Serial.begin(9600);
  
}

void loop() 
{
  if(digitalRead(3))
  {
    Serial.println("Sivi var.");
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
  }

  else
  {
    Serial.println("Sivi yok.");
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
  }
   
}  
