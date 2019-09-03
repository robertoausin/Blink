// Parpadeo 1 LED //

#define ledRojo 4

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledRojo, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledRojo, HIGH);      // turn the red LED on (HIGH is the voltage level)
  delay(500);                      // wait for a second
  digitalWrite(ledRojo, LOW);       // turn the red LED off (LOW is the voltage level)
  delay(500);                      // wait for a second
}
