/* Sweep
By Eric

Servos for SLATAV
*/

#include <Servo.h>

Servo Leg1Ser1; //servo for first leg servo no 1
Servo Leg2Ser1; //servo for second leg servo no 1
Servo Leg3Ser1; //servo for second leg servo no 1

int Sensor1 = 2;
int Sensor2 = 3;
int Sensor3 = 4;

int SensorDetect = 0;


int leg1s1, leg2s1, leg3s1;
int minpos = 20;
int stpos = 90;
int maxpos = 180;
int pos;
int runFlag = 0;

String message = "";
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
  message = "";
  if (Serial.available()) {
    message = Serial.readString();
    Serial.print(message);
  }

  if (message.startsWith("lock")) {
    Serial.write("locked");
    runFlag = 0;
  } else if (message.startsWith("unlock")) {
    Serial.write("unlocked");
    runFlag = 1;
  }



  if (runFlag == 1) {
    // Serial.write("in runtime");
    if (message.startsWith("forward")) {

    } else if (message.startsWith("reverse")) {

    } else if (message.startsWith("left")) {

    } else if (message.startsWith("right")) {

    } else if (message.startsWith("level")) {
      int mean = leg1s1 + leg2s1 + leg3s1;
      mean = mean / 3;

      Leg1Ser1.write(leg1s1);
      delay(25);
      Leg2Ser1.write(leg2s1);
      delay(25);
      Leg3Ser1.write(leg3s1);
      delay(25);

    } else if (message.startsWith("up")) {
      int i = 0;
      for (i = 0; i < 20; i++){
        legUp1();
        legUp2();
        legUp3();}

    } else if (message.startsWith("down")) {
      int i = 0;
      for (i = 0; i < 20; i++){
        legDown1();
        legDown2();
        legDown3();}
    }
 //   sensorCheck();
    delay(10);
  }

}


void sensorCheck() {
  if (digitalRead(Sensor1) != SensorDetect ) {
    legDown1();
  }
  if (digitalRead(Sensor2) != SensorDetect ) {
    legDown2();
  }
  if (digitalRead(Sensor3) != SensorDetect ) {
    legDown3();
  }
}

void legUp1(){
  Leg1Ser1.write(leg1s1--);
}

void legDown1(){
  Leg1Ser1.write(leg1s1++);
}

void legUp2(){
  Leg2Ser1.write(leg2s1--);
}

void legDown2(){
  Leg2Ser1.write(leg2s1++);
}
void legUp3(){
  //3rd has to be reversed due to design
  Leg3Ser1.write(leg3s1++);
}

void legDown3(){
  //3rd has to be reversed due to design
  Leg3Ser1.write(leg3s1--);

}
void initServos() {
  Leg1Ser1.attach(7);
  Leg2Ser1.attach(8);
  Leg3Ser1.attach(9);

  leg1s1 = stpos;

  leg2s1 = stpos;

  leg3s1 = stpos;

  Leg1Ser1.write(leg1s1);
  delay(25);
  Leg2Ser1.write(leg2s1);
  delay(25);
  Leg3Ser1.write(leg3s1);
  delay(25);
}

