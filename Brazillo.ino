#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
byte toggle = 6;
byte gripper = A4; //Gripper
byte vrx = A1; //Axis x
byte vry = A0; // Axis y
byte vry2 = A2; // Axis y2
int yz = 0;
int xz = 0;
int x = 0;
int y = 0;
int z = 0;
int y2 = 0;
void setup() {
  servo1.attach(3); // Axis Y
  servo2.attach(4); // Axis X
  servo3.attach(5); // Axis Y2
  servo4.attach(7); // Gripper
  Serial.begin(9600);
}

void loop() {

  for (int i = 0; i < 3; i++) {
    xz = analogRead(vrx);
    //Insertar promedio de la lectura para que no varie
    x = map(xz, 0, 1023, 0, 180);
    //
    yz = analogRead(vry);
    //Insertar promedio de la lectura para que no varie
    yz = map(yz, 0, 1023, 0, 180);
    //
    y2 = analogRead(vry2);
    //Insertar promedio de la lectura para que no varie
    y2 = map(y2, 0, 1023, 0, 180);
    //
    z = analogRead(gripper);
    //Insertar promedio de la lectura para que no varie
    z = map(z, 0, 1023, 0, 180);
    //
    x+=x;
    yz+=yz;
    y2+=y2;
    z+=z;
  }
  x=x/3;
  yz=yz/3;
  y2=y2/3;
  z=z/3;
  
  Serial.println(gripper);
  delay(80);
  servo1.write(x);
  delay(80);
  servo2.write(yz);
  delay(80);
  servo3.write(y2);
  delay(80);
  servo4.write(z);
  delay(80);

}

