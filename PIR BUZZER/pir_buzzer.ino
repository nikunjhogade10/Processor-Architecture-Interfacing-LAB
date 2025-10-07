int pirPin1 = 7;
int pirPin2 = 6;
int pirPin3 = 5;
int pirPin4 = 4;

int ledPin1 = 13;
int ledPin2 = 12;
int ledPin3 = 11;
int ledPin4 = 10;

int buzzerPin = 9; 

void setup() {
  pinMode(pirPin1, INPUT);
  pinMode(pirPin2, INPUT);
  pinMode(pirPin3, INPUT);
  pinMode(pirPin4, INPUT);

  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);

  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int motion1 = digitalRead(pirPin1);
  int motion2 = digitalRead(pirPin2);
  int motion3 = digitalRead(pirPin3);
  int motion4 = digitalRead(pirPin4);

  // LED control for each PIR
  digitalWrite(ledPin1, motion1);
  digitalWrite(ledPin2, motion2);
  digitalWrite(ledPin3, motion3);
  digitalWrite(ledPin4, motion4);

  if (motion1 == HIGH || motion2 == HIGH || motion3 == HIGH || motion4 == HIGH) {
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(buzzerPin, LOW);
  }
}
