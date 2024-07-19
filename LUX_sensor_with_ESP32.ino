
#include <Wire.h>
#include <BH1750.h>

BH1750 lightSensor;

void setup() {
  Serial.begin(115200);

  // Initialize the BH1750 sensor
  Wire.begin();
  lightSensor.begin();
  
  Serial.println("VISIBILITY CHECKING");
}

void loop() {
  // Request light intensity measurement
  uint16_t lux = lightSensor.readLightLevel();

  // Print the measured lux value
  Serial.print("FOG LEVEL: ");
  Serial.print(lux);
  Serial.println(" lx");

  delay(1000); // Delay for 1 second
}
