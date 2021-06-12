#include<Servo.h>

//For use with processing there will be a two-way communication via serial port
int base = 5;
int arm_1 = 6;
int arm_2 = 7;
int arm_3 = 8;
int grip_1 = 9;
int grip_2 = 10;

Servo base_motor;
Servo arm_1_motor;
Servo arm_2_motor;
Servo arm_3_motor;
Servo grip_1_motor;
Servo grip_2_motor;

int pos = 0;

//Main code for setup
void setup() {
  base_motor.attach(base);
  arm_1_motor.attach(arm_1);
  arm_2_motor.attach(arm_2);
  arm_3_motor.attach(arm_3);
  grip_1_motor.attach(grip_1);
  grip_2_motor.attach(grip_2);
}

//Loop which will run continuously over the course of program
void loop() {
  for (pos = 50; pos < 160; pos++)
  {
    base_motor.write(pos);
    delay(50);
    base_motor.write(pos);
    delay(50);
  }
  delay(2000);
  for (pos = 160; pos > 50; pos--)
  {
    arm_1_motor.write(pos);
    delay(50);
    arm_2_motor.write(pos);
    delay(50);
  }
  delay(2000);
}
