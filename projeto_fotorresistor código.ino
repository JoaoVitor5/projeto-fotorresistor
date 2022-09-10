// C++ code
//
void setup()
{
  pinMode(A5, INPUT);
  Serial.begin(9600);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  Serial.println(analogRead(A5));
  if (analogRead(A5) > 750) {
    Serial.println("esta escuro");
    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
  } else {
    Serial.println("esta claro");
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
  }
  delay(1000); // Wait for 1000 millisecond(s)
}