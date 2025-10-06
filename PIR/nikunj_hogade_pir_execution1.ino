int pirPin1 = 7;
int pirPin2 = 6;
int pirPin3 = 5;
int pirPin4 = 4;

int ledPin1 = 13;
int ledPin2 = 12;
int ledPin3 = 11;
int ledPin4 = 10;

void setup() {
  pinMode(pirPin1, INPUT);
  pinMode(pirPin2, INPUT);
  pinMode(pirPin3, INPUT);
  pinMode(pirPin4, INPUT);

  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
}

void loop() {
  int motion1 = digitalRead(pirPin1);
  int motion2 = digitalRead(pirPin2);
  int motion3 = digitalRead(pirPin3);
  int motion4 = digitalRead(pirPin4);

  if (motion1 == HIGH) digitalWrite(ledPin1, HIGH);
  else digitalWrite(ledPin1, LOW);

  if (motion2 == HIGH) digitalWrite(ledPin2, HIGH);
  else digitalWrite(ledPin2, LOW);

  if (motion3 == HIGH) digitalWrite(ledPin3, HIGH);
  else digitalWrite(ledPin3, LOW);

  if (motion4 == HIGH) digitalWrite(ledPin4, HIGH);
  else digitalWrite(ledPin4, LOW);
}