unsigned long lastMillis1;
unsigned long lastMillis2;
int led = LED_BUILTIN;
void setup() {
  lastMillis1 = millis();
  lastMillis2 = millis();
  pinMode(led, OUTPUT);
}

void loop() {
  if((millis() - lastMillis1) >=1000){
    digitalWrite(led, HIGH);
    lastMillis1 = millis();
  }
  if ((millis() - lastMillis1) >=1000){
    digitalWrite(led, LOW);
    lastMillis1 = millis();
  }

}
