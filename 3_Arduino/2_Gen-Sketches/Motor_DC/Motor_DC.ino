int motorPin = 3;
int ledPin = 8;
int Pin2 = 9;

//Main setup loop
void setup () {
  pinMode(ledPin, OUTPUT);
  pinMode(motorPin, OUTPUT);
  pinMode(Pin2, OUTPUT);
} //End of SETUP

void loop () {
  digitalWrite(ledPin, HIGH);
  digitalWrite(motorPin, HIGH);
  digitalWrite(Pin2, HIGH);
}//End of LOOP
