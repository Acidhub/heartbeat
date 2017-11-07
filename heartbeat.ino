void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(160);
  digitalWrite(LED_BUILTIN, LOW);
  delay(140);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(120);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
