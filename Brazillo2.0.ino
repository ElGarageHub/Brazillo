#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

int Vx = A1;
int Vy = A2;
int Vy2 = A3;
int gripper = A4;
int x = 0;


void setup() {
  servo1.attach(3);
  servo2.attach(4);
  servo3.attach(5);
  servo4.attach(7);
  
  

}


void loop() {
/*  int y1 = 0;
  int y2 = 0;
  int y3 = 0;
  int y4 = 0;
  int W1 = 0;
  int W2 = 0;
  int W3 = 0;
  int W4 = 0;
  */
  int W1 = analogRead(gripper);
  int y1 = map(W1,0,1023,0,180);
  servo4.write(y1);
  delay(80);
  /*
  if (y1  <= 210 &&  y1 >= 260) {
    Serial.println(y1);
    delay(80);
    y1 = map(y1, 0, 1023, 0, 180);
    servo1.write(y1);
    delay(80);
  } else if (y2 = prom(Vx) <= 450 &&  y2  >= 485) {
    Serial.println(y2);
    //y2 = prom(Vx);
    delay(80);
    y2 = map(y2, 0, 1023, 0, 180);
    servo2.write(y2);
    delay(80);
  }  else {
    //Cero
  }*/
  /*y1 = prom(gripper);
    delay(80);
    y2 = prom(Vx);
    delay(80);
    y3 = prom(Vy);
    delay(80);
    y4 = prom(Vy2);
    delay(80);
    y1 = map(y1,0,1023,0,180);
    y2 = map(y2,0,1023,0,180);
    y3 = map(y3,0,1023,0,180);
    y4 = map(y4,0,1023,0,180);
    servo1.write(y1);
    delay(80);
    servo2.write(y2);
    delay(80);
    servo3.write(y3);
    delay(80);
    servo4.write(y4);
    delay(100);
  */

}
