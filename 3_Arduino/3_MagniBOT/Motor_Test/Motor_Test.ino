#include<Servo.h>

int motor_1 = 8;
Servo Motor1;
int pos = 0;

//Main code for setup
void setup() {
  Motor1.attach(motor_1);
}

//Loop which will run continuously over the course of program
void loop() {
  for (pos = 0; pos < 180; pos++)
  {
    Motor1.write(pos);
    delay(15);
  }
  delay(1500);
  for (pos = 180; pos > 0; pos--)
  {
    Motor1.write(pos);
    delay(15);
  }
  delay(1500);
}
