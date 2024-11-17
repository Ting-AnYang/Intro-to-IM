const int ledPin = 9;  
void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  Serial.println("sensor");
  if (Serial.available() > 0) {
    int brightness = Serial.parseInt();
    brightness = constrain(brightness, 0, 255);
    analogWrite(ledPin, brightness);
  }
}



