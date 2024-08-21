//Set 1M sample and 50 KHz BW
void setup() {
  // Start serial communication at 9600 baud rate
  Serial.begin(9600);
}

void loop() {
  // Check if there's incoming serial data
  if (Serial.available() > 0) {
    // Read the incoming character
    char incomingByte = Serial.read();

    // Check if it's 'A' or 'B' and print the appropriate message
    if (incomingByte == 'A') {
      Serial.println("Meta");
    } 
    else if (incomingByte == 'B') {
      Serial.println("ESE@KKU");
    }
  }
}
