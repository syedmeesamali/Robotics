//Simple program with L-298 Motor Driver
void setup () {
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop () {
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  analogWrite(9, 100);    //Analog PWM output for the speed control
}
