/*

First program has minimal code and syntax to learn.

*/

// This runs once, like when you wake up in the morning.
void setup() {
    pinMode(13, OUTPUT);
}

// This keeps running until stopped, like you're eyes & brain - until you go to sleep.
void loop() {
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(200);
}
