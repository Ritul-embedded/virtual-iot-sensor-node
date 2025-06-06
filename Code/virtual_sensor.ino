const int sensorPin = A0;
float voltage, temperatureC;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  voltage = sensorValue * (5.0 / 1023.0);
  temperatureC = (voltage - 0.5) * 100.0;

  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  // Simulate wireless transmission
  Serial.print("Sending data to server: ");
  Serial.println(temperatureC);

  delay(2000); // 2-second delay
}
