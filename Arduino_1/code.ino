void setup() {
  pinMode(7, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  int switchstate = digitalRead(7);

  if (switchstate == 0) {
    digitalWrite(5, HIGH);       
    digitalWrite(13, HIGH);                 
                   
  } else {
    digitalWrite(13, LOW);      
    digitalWrite(5, LOW);      
  }
}