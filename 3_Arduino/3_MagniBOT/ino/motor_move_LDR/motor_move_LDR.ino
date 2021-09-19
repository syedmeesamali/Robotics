#include<Servo.h>

//LDR Input will be used as a reference
int grip_hand = 4;

//Declare a total of six (06) no's of motors - SG90 Servo or MG996R Servo
Servo grip_hand_motor;
Servo grip_base_motor;
Servo grip_arm_motor;

int val;            //Value to be received from Processing via serial port
int pos = 0;        //Motor position value

//Main code for setup - Only motors are connected to pins here
void setup() {
  grip_hand_motor.attach(grip_hand);
  grip_base_motor.attach(grip_base);
  grip_arm_motor.attach(grip_arm);
}

//Poll the serial port for signal and then move motors accordingly
void loop() {
  //Rotation of motor in one direction
  for (pos = 0; pos <= 180; pos++)
  {
    grip_arm_motor.write(pos);
    if (pos >= 90 && pos <=120)     //Move second motor only half way
    {
      if (pos >= 65 && pos <=100)   //Move third motor even lesser quantity
      {
        grip_base_motor.write(pos);
      }
      grip_hand_motor.write(pos);
    }
    delay(50);
  }
 
  delay(1500);
}
