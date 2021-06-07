#include<Servo.h>

int motor_1 = 7;
Servo Motor1;
int pos = 0;

//Main code for setup
void setup() {
  Motor1.attach(motor_1);
}

//Loop which will run continuously over the course of program
void loop() {
  for (pos = 50; pos < 160; pos++)
  {
    Motor1.write(pos);
    delay(50);
  }
  delay(2000);
  for (pos = 160; pos > 50; pos--)
  {
    Motor1.write(pos);
    delay(50);
  }
  delay(2000);
}
