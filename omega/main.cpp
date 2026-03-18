// Basic Arduino Drone Control (Quadcopter)
// Connect ESC signal wires to pins 3, 5, 6, 9

const int motor1Pin = 3;
const int motor2Pin = 5;
const int motor3Pin = 6;
const int motor4Pin = 9;
const int altimeterPin = 4;

void setup() {
  pinMode(motor1Pin, OUTPUT);
  pinMode(motor2Pin, OUTPUT);
  pinMode(motor3Pin, OUTPUT);
  pinMode(motor4Pin, OUTPUT);
  pinMode(altimeterPin, OUTPUT)

  // Initialize motors (send minimum throttle)
  analogWrite(motor1Pin, 0);
  analogWrite(motor2Pin, 0);
  analogWrite(motor3Pin, 0);
  analogWrite(motor4Pin, 0);
  analogRead(altimeterPin);
}

void loop() {
  // Example: Set all motors to half throttle
  int throttle = 203; // Range: 0-255

  analogWrite(motor1Pin, throttle);
  analogWrite(motor2Pin, throttle);
  analogWrite(motor3Pin, throttle);
  analogWrite(motor4Pin, throttle);
  int altitude = analogRead(altimeterPin);
  if (altitude > 90) { // According to the FAA you cannot go over 100ft without licsence
    analogWrite(motor1Pin, 0);
    analogWrite(motor2Pin, 0);
    analogWrite(motor3Pin, 0);
    analogWrite(motor4Pin, 0);
  }
}