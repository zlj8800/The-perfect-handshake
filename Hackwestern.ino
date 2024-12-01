#include <Servo.h>

Servo myServo; // Create a servo object
int trigPin = 6;
int echoPin = 7;
long distance;
long duration;

void setup() {
  myServo.attach(9);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  ultra(); // Call the ultrasonic sensor function - connect to comp
  
  if (distance <= 20) {
    myServo.write(120); // Move servo to 120 degrees if hand is close
  } else {
    myServo.write(0); // Move servo to 0 degrees otherwise
  }

  delay(100); // Add a small delay to stabilize us readings
}

void ultra() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2); // Ensure stable low signal
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(100); // Send a 100-microsecond pulse (higher - less sensitivity)
  digitalWrite(trigPin, LOW);

  // Measure the pulse duration
  duration = pulseIn(echoPin, HIGH);

  // Calculate the distance in cm
  distance = duration * 0.034 / 2;
}
