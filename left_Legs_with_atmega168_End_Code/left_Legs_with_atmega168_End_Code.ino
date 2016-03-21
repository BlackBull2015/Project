/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo Leg1Ser1; //servo for first leg servo no 1

Servo Leg2Ser1; //servo for second leg servo no 1

Servo Leg3Ser1; //servo for second leg servo no 1

int Sensor1 = 1;
int Sensor2 = 2;
int Sensor3 = 3;

int SensorDetect = 1;


int leg1s1, leg2s1, leg3s1;
int minpos = 20;
int maxpos = 180;
int pos;
int runFlag = 0;

String message;

void setup()
{
  Serial.begin(9600);
  pinMode(Sensor1, INPUT);
  pinMode(Sensor2, INPUT);
  pinMode(Sensor3, INPUT);

  initServos();
}

void loop()
{

  if(Serial.available()){
    message = Serial.readString();
  }

if(message == "lock"){
  runFlag = 0;
}else if(message == "unlock"){
  runFlag = 1;
}


  
  if(runFlag == 1) {
    
      if(message == "forward"){
  
}else if(message == "reverse"){
  
}else if(message == "left"){
  
}else if(message == "right"){
  
}else if(message == "up"){
  
}else if(message == "down"){
  
}
    
      sensorCheck();
      delay(10);
  }

}


void sensorCheck() {
  while (digitalRead(Sensor1) != SensorDetect ) {
    legDown1();
  }
  while (digitalRead(Sensor2) != SensorDetect ) {
    legDown2();
  }
  while (digitalRead(Sensor3) != SensorDetect ) {
    legDown3();
  }
}

void legUp1()
{
  Leg1Ser1.write(leg1s1++);
}

void legDown1()
{
  Leg1Ser1.write(leg1s1--);
}

void legUp2()
{
  Leg2Ser1.write(leg2s1++);
}

void legDown2()
{
  Leg2Ser1.write(leg2s1--);
}
void legUp3()
{
  Leg3Ser1.write(leg3s1++);
}

void legDown3()
{
  Leg3Ser1.write(leg3s1--);
}
void initServos() {
  Leg1Ser1.attach(7);
  Leg2Ser1.attach(8);
  Leg3Ser1.attach(9);

  leg1s1 = minpos;

  leg2s1 = minpos;

  leg3s1 = minpos;

  Leg1Ser1.write(leg1s1);
  delay(25);
  Leg2Ser1.write(leg2s1);
  delay(25);
  Leg3Ser1.write(leg3s1);
  delay(25);
}

