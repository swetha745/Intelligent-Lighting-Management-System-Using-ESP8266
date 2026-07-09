#define LDR D1
#define LED D2

void setup() {
  pinMode(LDR, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  int value = digitalRead(LDR);

  Serial.print("LDR Value: ");
  Serial.println(value);

  if (value == HIGH) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }

  delay(500);
}
