#include <Servo.h>
Servo myservo;
int pos = 0;    // variable to store the servo position
int sensorpin0 = 0;
int sensorpin1 = 1;
int soilmoisture;
int container;
int LED7 = 7;
void setup() 
{
  myservo.attach(3);
  Serial.begin(9600);
   pinMode(LED7, OUTPUT);
}
void loop() 
{
  soilmoisture = analogRead(sensorpin0);
  Serial.println();
  Serial.print("sensor0 value = ");
  Serial.print(soilmoisture);

  container = analogRead(sensorpin1);
  Serial.println();
  Serial.print("container value = ");
  Serial.print(container);
  delay(2000);
  
     if(container>900)
     {
     myservo.write(100);              // tell servo to go to position 100
     delay(500);
        
 digitalWrite(LED7, HIGH);           //sos 27 grammes   
 delay(250);
 digitalWrite(LED7, LOW);
 delay(500);

 digitalWrite(LED7, HIGH);
 delay(250);
 digitalWrite(LED7, LOW);
 delay(500);

  digitalWrite(LED7, HIGH);
 delay(250);
 digitalWrite(LED7, LOW);
 delay(500);

  digitalWrite(LED7, HIGH);
 delay(500);
 digitalWrite(LED7, LOW);
 delay(1000);

  digitalWrite(LED7, HIGH);
 delay(500);
 digitalWrite(LED7, LOW);
 delay(1000);

 digitalWrite(LED7, HIGH);
 delay(500);
 digitalWrite(LED7, LOW);
 delay(500);

 digitalWrite(LED7, HIGH);
 delay(250);
 digitalWrite(LED7, LOW);
 delay(500);

 digitalWrite(LED7, HIGH);
 delay(250);
 digitalWrite(LED7, LOW);
 delay(500);

 digitalWrite(LED7, HIGH);
 delay(250);
 digitalWrite(LED7, LOW);
 delay(500);

  }
  else
  {
   digitalWrite(LED7, LOW);      
 
   if(soilmoisture>800)
   {
      myservo.write(0);
      delay(1000);
      for (pos = 0; pos <= 100; pos += 5) { 
      myservo.write(pos);              
      delay(1000);                     
      }
   }
  }
 }
