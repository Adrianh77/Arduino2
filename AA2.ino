#include <Servo.h> 
int servoPin = 11; 
Servo Servo1; 


#define trigPin 12

#define echoPin 13

void setup() {

Serial.begin (9600);

pinMode(trigPin, OUTPUT);
Servo1.attach(servoPin); 
pinMode(echoPin, INPUT);

}

void loop() {

long duration, distance, fin;

digitalWrite(trigPin, LOW);

delayMicroseconds(2);

digitalWrite(trigPin, HIGH);

delayMicroseconds(10);

digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

 
 
if(duration >= 2100){
  Servo1.write(180);
  }
else{
  fin = (duration / 11.6666666);
  Serial.println(duration);
  Serial.println(fin);
  Servo1.write(fin);
}

}
