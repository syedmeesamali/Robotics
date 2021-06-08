#include<Servo.h>

int motor_1 = 7;
int motor_2 = 8;
Servo Motor1;
Servo Motor2;
int pos = 0;

//Main code for setup
void setup() {
  Motor1.attach(motor_1);
  Motor2.attach(motor_2);
}

//Loop which will run continuously over the course of program
void loop() {
  for (pos = 50; pos < 160; pos++)
  {
    Motor1.write(pos);
    delay(50);
    Motor2.write(pos);
    delay(50);
  }
  delay(2000);
  for (pos = 160; pos > 50; pos--)
  {
    Motor1.write(pos);
    delay(50);
    Motor2.write(pos);
    delay(50);
  }
  delay(2000);
}
