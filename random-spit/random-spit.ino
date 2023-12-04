// Define the digital pin connected to the LED
const int ledPin = 13; // You can use a different pin if needed

void setup() {
  // Set the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the LED on (HIGH) for 1 second
  digitalWrite(ledPin, HIGH);
  delay(100); // 1000 milliseconds = 1 second
  
// Turn the LED off (LOW)
  digitalWrite(ledPin, LOW);

  // Generate another random delay between 500 milliseconds and 5000 milliseconds
    int randomDelay = random(300, 20000);
  randomDelay = random(300, 20000);
  delay(randomDelay);
}