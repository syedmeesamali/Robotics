#include<Servo.h>

//For use with processing there will be a two-way communication via serial port
int grip_1 = 7;
int grip_2 = 8;

//Declare a total of six (06) no's of motors - SG90 Servo or MG996R Servo
Servo grip_1_motor;
Servo grip_2_motor;

int val;            //Value to be received from Processing via serial port
int pos = 0;        //Motor position value

//Main code for setup - Only motors are connected to pins here
void setup() {
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
        grip_1_motor.write(0);
        delay(200);
    } else if (val == '2'){
        grip_1_motor.write(60);
        delay(200);
    } else if (val == '3'){
        grip_1_motor.write(160);
        delay(200);
    } 
  delay(500);
}
