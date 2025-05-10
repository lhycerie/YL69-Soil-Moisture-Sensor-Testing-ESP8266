#define SENSOR_PIN A0

const int WET_VALUE = 300; // Fixed lower limit detected by the sensor
const int DRY_VALUE = 1024; // Upper limit

void setup() {
  Serial.begin(9600); // Start serial communication at 9600 baud rate
}

void loop() {
  int sensorValue = analogRead(A0); // Initialization
  
  float percent = ((float)(sensorValue - DRY_VALUE) / (WET_VALUE - DRY_VALUE)) * 100; // Calculate percent

  //Displays both analog and percentage
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);
  Serial.print(", Moisture Percent: ");
  Serial.println(percent);
  Serial.println("%");
  delay(1000);
}
