#include<Servo.h>

//LDR Input will be used as a reference
int grip_hand = 7;

//Declare a total of six (06) no's of motors - SG90 Servo or MG996R Servo
Servo grip_hand_motor;

int val;            //Value to be received from Processing via serial port
int pos = 0;        //Motor position value

//Main code for setup - Only motors are connected to pins here
void setup() {
  grip_hand_motor.attach(grip_hand);
}

void loop() {
  //Rotation of motor in one direction
  for (pos = 90; pos <= 120; pos+=5)
  {
    grip_hand_motor.write(pos);
    delay(20);
  }
  delay(1500);
  //Rotation of motor in other direction
  for (pos = 120; pos >= 90; pos-=5)
  {
    grip_hand_motor.write(pos);
    delay(20);
  }
  delay(1500);
}
