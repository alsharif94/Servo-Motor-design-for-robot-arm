/*  Name : Marwan Mohammad Alsharif
 *   Name of project : Servo Motors design for robot arm
 */

#include <Servo.h>
int sw=7 ;                //Turn on and off for the servo motor by tip120 transistor 
int x1,x2,x3,x4,x5 ;     // reads the value of the potentiometer (value between 0 and 1023)
int y1,y2,y3,y4,y5 ;     //Convert the value (0~1023) to (0~255) 
int d[]={1,2,8,12,13};    //pins of the tip120 tranisitors 
int z ;          
// create servo objects to control the servo motors
Servo m1;   
Servo m2 ;
Servo m3 ;
Servo m4 ;
Servo m5 ;

void setup() {
  
for (int i = 0 ; i<=4 ; i++) {     
pinMode(d[i],OUTPUT) ;   
}
pinMode(sw,INPUT);

   digitalWrite(d[0], 1); 
   digitalWrite(d[1], 1); 
   digitalWrite(d[2], 1); 
   digitalWrite(d[3], 1);
   digitalWrite(d[4], 1); 
  
 // attaches the servo motors on pins of the arduino
  m1.attach(5); 
  m2.attach(6); 
  m3.attach(9); 
  m4.attach(10); 
  m5.attach(11);
  //intial postion for the servo motors 90  
  m1.write(90);
  m2.write(90);
  m3.write(90);
  m4.write(90);
  m5.write(90);      
  delay(3000) ;  
}
void loop() {
   z= digitalRead(sw);
   x1 = analogRead(A0);   
   x2 = analogRead(A1);
   x3 = analogRead(A2);
   x4 = analogRead(A3);
   x5 = analogRead(A4);                                
   y1 = map(x1, 0, 1023, 0, 180); 
   y2 = map(x2, 0, 1023, 0, 180); 
   y3 = map(x3, 0, 1023, 0, 180); 
   y4 = map(x4, 0, 1023, 0, 180); 
   y5 = map(x5, 0, 1023, 0, 180); 
   
 if(z==1) {
   m1.attach(5);
   m2.attach(6);
   m3.attach(9);
   m4.attach(10);
   m5.attach(11);
   digitalWrite(d[0], 1); 
   digitalWrite(d[1], 1); 
   digitalWrite(d[2], 1); 
   digitalWrite(d[3], 1);
   digitalWrite(d[4], 1);  
   m1.write(y1);
   delay(20) ;
   m2.write(y2);
   delay(20) ;
   m3.write(y3);
   delay(20) ;
   m4.write(y4);
   delay(20) ;
   m5.write(y5);
   delay(20) ; 
   }
   else {
   m1.detach();
   m2.detach();
   m3.detach();
   m4.detach();
   m5.detach();
   digitalWrite(d[0], 0); 
   digitalWrite(d[1], 0); 
   digitalWrite(d[2],0); 
   digitalWrite(d[3], 0); 
   digitalWrite(d[4], 0);  
}
}
