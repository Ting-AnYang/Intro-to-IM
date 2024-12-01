
//defining pins for ultrasonic sensor and red LED
const int startPin = 8;
const int attackPin = 9;
const int jumpPin = 10;
const int restartPin = 11;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(startPin, INPUT);
  pinMode(attackPin, INPUT);
  pinMode(jumpPin, INPUT);
  pinMode(restartPin, INPUT);

}

void loop() {
 int startState = digitalRead(startPin);
      int attackState = digitalRead(attackPin);
      int jumpState = digitalRead(jumpPin);
      int restartState = digitalRead(restartPin);

      Serial.print(startState);
      Serial.print(',');
      Serial.print(attackState);
      Serial.print(',');
      Serial.print(jumpState);
      Serial.print(',');
      Serial.println(restartState);

      delay(100);
      


}
