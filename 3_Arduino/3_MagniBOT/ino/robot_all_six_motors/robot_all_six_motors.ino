#include<Servo.h>

//For use with processing there will be a two-way communication via serial port
int base = 5;
int arm_1 = 6;
int arm_2 = 7;
int arm_3 = 8;
int grip_1 = 9;
int grip_2 = 10;

//Declare a total of six (06) no's of motors - SG90 Servo or MG996R Servo
Servo base_motor;
Servo arm_1_motor;
Servo arm_2_motor;
Servo arm_3_motor;
Servo grip_1_motor;
Servo grip_2_motor;

int val;            //Value to be received from Processing via serial port
int pos = 0;        //Motor position value

//Main code for setup - Only motors are connected to pins here
void setup() {
  base_motor.attach(base);
  arm_1_motor.attach(arm_1);
  arm_2_motor.attach(arm_2);
  arm_3_motor.attach(arm_3);
  grip_1_motor.attach(grip_1);
  grip_2_motor.attach(grip_2);
}

//Poll the serial port for signal and then move motors accordingly
void loop() {
  if (Serial.available()) 
  {
    val = Serial.read();      //Read the value and store in val
  }
  if (val == '1')
    {
    for (pos = 75; pos >= 25; pos--) {
        base_motor.write(pos);
        arm_1_motor.write(pos);
        arm_2_motor.write(60);
        delay(100);
        }
    } else if (val == '2'){
        arm_1_motor.write(45);
        arm_2_motor.write(45);
        delay(200);
    } else if (val == '3'){
        pos = pos + 1;
        arm_2_motor.write(0);
        arm_3_motor.write(pos);
        delay(200);
    } else if (val == '4'){
        pos = pos - 1;
        arm_2_motor.write(90);
        arm_3_motor.write(pos);
        delay(200);
    } else if (val == '5'){
        pos = pos + 1;
        grip_1_motor.write(pos);
        delay(200);
    } else if (val == '6'){
        pos = pos - 1;
        grip_1_motor.write(pos);
        delay(200);
    } 
  delay(500);
}
