#include<Servo.h>

//For use with processing there will be a two-way communication via serial port
int grip_1 = 6;
int grip_2 = 7;
int grip_3 = 8;

//Declare a total of six (06) no's of motors - SG90 Servo or MG996R Servo
Servo grip_1_motor;
Servo grip_2_motor;
Servo grip_3_motor;

int val;            //Value to be received from Processing via serial port
int pos = 0;        //Motor position value

//Main code for setup - Only motors are connected to pins here
void setup() {
  grip_1_motor.attach(grip_1);
  grip_2_motor.attach(grip_2);
  grip_3_motor.attach(grip_3);
}

//Poll the serial port for signal and then move motors accordingly
void loop() {
  //Rotation of motor in one direction
  for (pos = 0; pos <= 180; pos++)
  {
    grip_1_motor.write(pos);
    if (pos >= 30 && pos <=120)     //Move second motor only half way
    {
      if (pos >= 65 && pos <=110)   //Move third motor even lesser quantity
      {
        grip_3_motor.write(pos);
      }
      grip_2_motor.write(pos);
    }
    delay(50);
  }
  //Rotation of motor in reverse direction
  for (pos = 180; pos >= 0; pos--)
  {
    grip_1_motor.write(pos);
     if (pos <= 120 && pos >= 30)     //Move second motor only half way
    {
      if (pos <= 110 && pos >= 65)   //Move third motor even lesser quantity
      {
        grip_3_motor.write(pos);
      }
      grip_2_motor.write(pos);
    }
    delay(50);
  }
  delay(1500);
}
