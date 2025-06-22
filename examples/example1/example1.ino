#include <smart_irrigation_device.h>

const int threshold = 35;
const int sensor_pin = A0;
const int relayPin = 8;


void setup() {
  // Serial.begin(9600); <-- If needed
  activatePinMode(relayPin, sensor_pin); // Activates both pins
  // Serial.println("Pin activated") <-- Only if needed
}

void loop() {
  int moisture = readMoisture(); // reads Moisture and saves it in variable
  controlRelay(relayPin, moisture, threshold); // The relay pin, your moisture variable and the threshold (when the water starts pumping)
}
