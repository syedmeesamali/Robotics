#include<Servo.h>

//For use with processing there will be a two-way communication via serial port
int grip_1 = 7;

//Declare a total of six (06) no's of motors - SG90 Servo or MG996R Servo
Servo grip_1_motor;

int val;            //Value to be received from Processing via serial port
int pos = 0;        //Motor position value

//Main code for setup - Only motors are connected to pins here
void setup() {
  grip_1_motor.attach(grip_1);
}

//Poll the serial port for signal and then move motors accordingly
void loop() {
  for (pos = 0; pos <= 180; pos++)
  {
    grip_1_motor.write(pos);
    delay(50);
  }
  for (pos = 180; pos >= 0; pos--)
  {
    grip_1_motor.write(pos);
    delay(50);
  }
  delay(1500);
}
