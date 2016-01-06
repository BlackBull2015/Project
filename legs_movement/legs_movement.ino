/* Sweep
 by BARRAGAN <http://barraganstudio.com> 
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/ 

#include <Servo.h> 

Servo Leg1Ser1; //servo for first leg servo no 1
Servo Leg1Ser2; //servo for first leg servo no 2


Servo Leg2Ser1; //servo for second leg servo no 1
Servo Leg2Ser2; //servo for second leg servo no 2


Servo Leg3Ser1; //servo for second leg servo no 1
Servo Leg3Ser2; //servo for second leg servo no 2

int leg1s1, leg2s1, leg3s1;
int leg1s2,leg2s2,leg3s2;
int minpos = 20;
int maxpos = 180;
int pos;

void setup() 
{ 
  Leg1Ser1.attach(7);
  Leg1Ser2.attach(8);
delay(25);
  Leg2Ser1.attach(9);
  Leg2Ser2.attach(10);
delay(25);
  Leg3Ser1.attach(11);
  Leg3Ser2.attach(12);
  delay(25);
  leg1s1 = minpos;
  leg1s2 = maxpos;

  leg2s1 = minpos;
  leg2s2 = maxpos;

  leg3s1 = minpos;
  leg3s2 = maxpos;
  
Leg1Ser1.write(leg1s1);
Leg1Ser2.write(leg1s2);
delay(25);
Leg2Ser1.write(leg2s1);
Leg2Ser2.write(leg2s2);
delay(25); 

Leg3Ser1.write(leg3s1);
Leg3Ser2.write(leg3s2);
delay(25);
} 
 
void loop() 
{ 
  for(pos = 0; pos <= 50; pos ++) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    legUp1();
    delay(15); 
    legUp2();
    delay(15); 
    legUp3();
   delay(15);                       // waits 15ms for the servo to reach the position
  } 
  delay(500);
  
  for(pos = 0; pos <= 50; pos ++) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    legDown1();
    delay(15); 
    legDown2();
    delay(15); 
    legDown3();
   delay(15);                       // waits 15ms for the servo to reach the position
  } 
  delay(500);
} 

void legUp1()
{
  Leg1Ser1.write(leg1s1++);
  Leg1Ser2.write(leg1s2--);
}

void legDown1()
{
  Leg1Ser1.write(leg1s1--);
  Leg1Ser2.write(leg1s2++);
}

void legUp2()
{
    Leg2Ser1.write(leg2s1++);
  Leg2Ser2.write(leg2s2--);

}

void legDown2()
{
    Leg2Ser1.write(leg2s1--);
  Leg2Ser2.write(leg2s2++);
}
void legUp3()
{
    Leg3Ser1.write(leg3s1++);
  Leg3Ser2.write(leg3s2--);
}

void legDown3()
{
    Leg3Ser1.write(leg3s1--);
  Leg3Ser2.write(leg3s2++);
}

