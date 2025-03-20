// Define pins
const int smokeSensorPin = A0; // Analog pin for smoke sensor
const int buzzerPin = 7; // Digital pin for buzzer (D7)
int smokeLevel = 0; // Variable to store the smoke level

// Threshold value, adjust based on your environment
const int threshold = 300; // Adjust the threshold according to your sensor calibration

void setup() {
  // Initialize serial communication for monitoring
  Serial.begin(9600);
  
  // Initialize pin modes
  pinMode(smokeSensorPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // Read smoke level from the sensor
  smokeLevel = analogRead(smokeSensorPin);
  
  // Print smoke level to serial monitor
  Serial.print("Smoke level: ");
  Serial.println(smokeLevel);
  
  // Check if smoke level exceeds threshold
  if (smokeLevel > threshold) {
    // Trigger buzzer
    digitalWrite(buzzerPin, HIGH);
    Serial.println("Smoke detected!");
  } else {
    // Turn off buzzer
    digitalWrite(buzzerPin, LOW);
  }
  
  // Small delay before reading again
  delay(500);
}
