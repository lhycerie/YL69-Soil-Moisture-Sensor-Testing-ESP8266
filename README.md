# Soil-Moisture-Sensor-Testing

Soil Moisture Calculation Test for LM393 Soil Moisture Sensor 

It displays the recorded Sensor Value and shows the mathematical computation needed to compute the Moisture Percentage using C++ for Arduino IDE.

A project dedicated to the completion of the Capstone Research.

# Description 

The code reads data from a soil moisture sensor connected to analog pin A0 and calculates the soil moisture percentage.
 
- #define SENSOR_PIN A0 : This line defines a preprocessor macro, assigning the name  SENSOR_PIN  to analog pin A0 for better code readability.

-  const int WET_VALUE = 300;  and  const int DRY_VALUE = 1024; :  declare constants representing the sensor's readings for completely wet and dry soil, respectively.  These values are crucial for calibration and need to be determined experimentally for specific sensor and soil conditions.  Note that  DRY_VALUE  is set to 1024, the maximum reading of a 10-bit ADC.

-  void loop() { ... } : This function continuously reads the sensor value using  analogRead(A0) , calculates the moisture percentage using a linear interpolation formula:  ((sensorValue - DRY_VALUE) / (WET_VALUE - DRY_VALUE)) * 100 , and prints both the raw sensor value and calculated percentage to the serial monitor. The  delay(1000)  function adds a one-second pause between readings.
 
Considerations:
 
- The accuracy of the moisture percentage depends on the correct calibration of  WET_VALUE  and  DRY_VALUE .  
- The calculation assumes a linear relationship between the sensor reading and soil moisture. 
- The code assumes a sensor where higher values indicate drier soil. 
