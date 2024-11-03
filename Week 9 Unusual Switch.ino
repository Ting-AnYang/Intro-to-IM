#include<NewPing.h>

//defining pins for ultrasonic sensor and red LED
const int trigPin = 11;
const int echoPin = 12;
const int ledPin = 8;

//constructor for the sensor
NewPing sonar(11, 12, 200);

//to store measurement values from the sensor
long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(A2, INPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  //measure pulse duration on echo pin
  duration = pulseIn(echoPin, HIGH);

  //calculate distance
  distance = duration * 0.034 / 2;

  //printing values for distance in serial monitor for reference
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  //turning red LED on and off based on distance to sensor
  if (distance < 10){
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  //turning yellow LED on and off based on input
  int buttonState = digitalRead(A2);

  if (buttonState == HIGH){
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }

  delay(100);

}
