

const int tiltSensorPin = 2;
const int motorPin1 = 3; 
const int motorPin2 = 4; 
int tiltState = 0;

void setup() {
  
  Serial.begin(9600);
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(tiltSensorPin, INPUT);
}

void loop() {
  tiltState = digitalRead(tiltSensorPin);

  if (tiltState == HIGH)
  {
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2,LOW);
    Serial.println("Tilt sensor triggered! Motor turned on.");
  }
  
  else 
  {
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    Serial.println("Tilt sensor not triggered. Motor turned off.");
  }
  //delay(100);
}