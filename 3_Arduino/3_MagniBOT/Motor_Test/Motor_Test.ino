#include<Servo.h>

int motor_1 = 8;
Servo Motor1;


//Main code for setup
void setup() {
  Motor1.attach(motor_1);
}

void loop() {
  Motor1.write(0);
  delay(500);
  Motor1.write(45);
  delay(500);
  Motor1.write(135);
  delay(500);
  Motor1.write(180);
  delay(500);
  Motor1.write(0);
  delay(500);
}
