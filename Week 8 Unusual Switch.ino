void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(A2, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(A2);

  if (buttonState == HIGH){
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }

}
