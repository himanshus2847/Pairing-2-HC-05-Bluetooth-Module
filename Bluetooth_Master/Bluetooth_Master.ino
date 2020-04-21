#define button 2
int value = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(button);
  if(val == 0 && value == 0)
  {
    Serial.println("A");
    value = 1;
    delay(200);
  }
  else if(val == 0 && value == 1)
  {
    Serial.println("a");
    value = 0;
    delay(200);
  }
  delay(200);
}
