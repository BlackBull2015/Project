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
 
Servo Servo1;  // create servo object to control a servo
Servo Servo2;  // create servo object to control a servo
Servo Servo3;  // create servo object to control a servo
Servo Servo4;  // create servo object to control a servo
Servo Servo5;  // create servo object to control a servo
Servo Servo6;  // create servo object to control a servo 
                // twelve servo objects can be created on most boards
 
int pos = 0;    // variable to store the servo position 
 
void setup() 
{ 
  Servo1.attach(7);  // attaches the servo on pin 9 to the servo object 
} 
 
void loop() 
{ 
//   Servo1.write(0);  // attaches the servo on pin 9 to the servo object 
//delay(5);
// Servo1.write(20);  // attaches the servo on pin 9 to the servo object 
//delay(5);
  for(pos = 20; pos <= 180; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    Servo1.write(pos);              // tell servo to go to position in variable 'pos' 
//    Servo2.write(pos);              // tell servo to go to position in variable 'pos' 
////    Servo3.write(pos);              // tell servo to go to position in variable 'pos' 
////    Servo4.write(pos);              // tell servo to go to position in variable 'pos' 
////    Servo5.write(pos);              // tell servo to go to position in variable 'pos' 
////    Servo6.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(5);                       // waits 15ms for the servo to reach the position
  } 
  for(pos = 180; pos>20; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    Servo1.write(pos);              // tell servo to go to position in variable 'pos' 
//    Servo2.write(pos);              // tell servo to go to position in variable 'pos' 
////    Servo3.write(pos);              // tell servo to go to position in variable 'pos' 
////    Servo4.write(pos);              // tell servo to go to position in variable 'pos' 
////    Servo5.write(pos);              // tell servo to go to position in variable 'pos' 
////    Servo6.write(pos);              // tell servo to go to position in variable 'pos' 
//
//    
//    
    delay(5);                       // waits 15ms for the servo to reach the position 
  } 
  delay(500);
} 

