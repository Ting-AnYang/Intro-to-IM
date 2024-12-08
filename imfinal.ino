
//defining pins for ultrasonic sensor and red LED
const int startPin = 10;
const int attackPin = 9;
const int jumpPin = 8;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(startPin, INPUT);
  pinMode(attackPin, INPUT);
  pinMode(jumpPin, INPUT);

}

void loop() {
      int START = digitalRead(startPin);
      int ATTACK = digitalRead(attackPin);
      int JUMP = digitalRead(jumpPin);

      Serial.print(JUMP);
      Serial.print(',');
      Serial.print(ATTACK);
      Serial.print(',');
      Serial.println(START);

      delay(100);
      
}
