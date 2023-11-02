char selectedOption = ' '; // Initialize the selected option as a space character

void setup() {
  Serial.begin(9600); // Initialize the serial communication
}

void loop() {
  if (Serial.available()) {
    char receivedChar = Serial.read(); // Read a character from the serial monitor
    if (receivedChar == 'A' || receivedChar == 'B') {
      selectedOption = receivedChar; // Set the selected option to the received character
    }
  }

  switch (selectedOption) {
    case 'A':
      Serial.println(String(random(50)) + "," + String(random(50)));
      delay(100);
      break;
    case 'B':
      Serial.println(String(random(500)) + "," + String(random(500)));
      delay(100);
      break;
    default:
      Serial.println("nothing");
      delay(100);
      break;
  }
}
