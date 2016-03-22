/* Sweep
 by BARRAGAN <http://barraganstudio.com> 
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/ 

#include <Servo.h> .
 
Servo Servo1;  // create servo object to control a servo
 
int pos = 90;    // variable to store the servo position 

int pin1 = 2;
int pin2 = 3;
 
void setup() 
{ 
  Serial.begin(9600);
  Servo1.attach(7);  // attaches the servo on pin 9 to the servo object 
  pinMode(pin1,INPUT);
  pinMode(pin2,INPUT);
} 
 
void loop() 
{ 

if(digitalRead(pin1) == 1){
  Serial.print(pin1);
  Serial.print("Pin1");
  Servo1.write(20);
delay(50);
}else if(digitalRead(pin2) == 1){
    Serial.print(pin2);
  Serial.print("Pin2");
  Servo1.write(160);
delay(50);
}else{
  Serial.print("mid");
Servo1.write(pos);
delay(50);
}


  
////   Servo1.write(0);  // attaches the servo on pin 9 to the servo object 
////delay(5);
//// Servo1.write(20);  // attaches the servo on pin 9 to the servo object 
////delay(5);
//  for(pos = 20; pos <= 180; pos += 1) // goes from 0 degrees to 180 degrees 
//  {                                  // in steps of 1 degree 
//    Servo1.write(pos);              // tell servo to go to position in variable 'pos' 
////    Servo2.write(pos);              // tell servo to go to position in variable 'pos' 
//////    Servo3.write(pos);              // tell servo to go to position in variable 'pos' 
//////    Servo4.write(pos);              // tell servo to go to position in variable 'pos' 
//////    Servo5.write(pos);              // tell servo to go to position in variable 'pos' 
//////    Servo6.write(pos);              // tell servo to go to position in variable 'pos' 
//    delay(5);                       // waits 15ms for the servo to reach the position
//  } 
//  for(pos = 180; pos>20; pos-=1)     // goes from 180 degrees to 0 degrees 
//  {                                
//    Servo1.write(pos);              // tell servo to go to position in variable 'pos' 
////    Servo2.write(pos);              // tell servo to go to position in variable 'pos' 
//////    Servo3.write(pos);              // tell servo to go to position in variable 'pos' 
//////    Servo4.write(pos);              // tell servo to go to position in variable 'pos' 
//////    Servo5.write(pos);              // tell servo to go to position in variable 'pos' 
//////    Servo6.write(pos);              // tell servo to go to position in variable 'pos' 
////
////    
////    
//    delay(5);                       // waits 15ms for the servo to reach the position 
//  } 
//  delay(500);
} 

