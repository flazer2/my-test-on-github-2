void setup(){
  pinMode(PA9, OUTPUT);
  pinMode(PA10, OUTPUT);
  analogWrite(PA9, 0);
  analogWrite(PA10, 0);
  
}
void loop(){
  analogWrite(PA9, 255);
  delay(80);
  analogWrite(PA9, 3);
  delay(80);
  analogWrite(PA9, 255);
  delay(80);
  analogWrite(PA9, 3);
  delay(80);
  analogWrite(PA9, 255);
  delay(80);
  analogWrite(PA9, 3);
  delay(80);
  analogWrite(PA9, 255);
  delay(80);
  analogWrite(PA9, 0);
  delay(1000);
  
}
