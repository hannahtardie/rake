

#include <Servo.h>

Servo servo1;
Servo servo2;


int angle1 = 30;
int angle2 = 40;
int angle3 = 15;
int angle4 = 35;
int angle5 = 45;
int angle6 = 25;

int angle0 = 0;
int angleUp = 0; 
int angleDown = 60;


void setup()
{

  
  pinMode(3,OUTPUT);
  servo1.attach(3);
  
  pinMode(5,OUTPUT);
  servo2.attach(5);
//
//  pinMode (3, OUTPUT);
//  servo3.attach(3);
}

void loop(){


  servo2.write(angleDown);
  delay(5000);
  servo2.write(angleUp);
  delay(1000);
servo2.write(angleDown);
  delay(5000);
  
servo1.write(30);
delay(3000);
servo1.write(70);
delay(3000);
servo1.write(120);
delay(3000);
servo1.write(180);
delay(3000);
servo1.write(120);
delay(3000);
servo1.write(85);
delay(3000);
servo1.write(100);
delay(3000);
servo1.write(65);
delay(3000);
servo1.write(35);
delay(3000);
servo1.write(100);
delay(3000);


}
