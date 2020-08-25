#include<Servo.h>   //Servo related code library

Servo servo1;
int pos = 0;      //Servo position

void setup () {
  servo1.attach(5);     //Servo connected at pin # 5
  servo1.write(180);    //Move to 180 degrees
  
}

void loop () {
  for (pos = 0; pos < 180; pos++) 
  {
    servo1.write(pos);
    delay(10);        //Small delay before reversing direction
  }

  for (pos = 180; pos >= 180; pos--) 
  {
    servo1.write(pos);
    delay(10);  
  }
}
