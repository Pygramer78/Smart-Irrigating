#include "smart_irrigation_device.h"

void activatePinMode(int relayPin, int sensor_pin)
{
  pinMode(relayPin, OUTPUT);
  pinMode(sensor_pin, INPUT);
}

int readMoisture(void)
{
  int output_value;
  output_value = analogRead(SENSORPIN);
  output_value = map(output_value, 550, 10, 0, 100);
  return output_value;
}

bool controlRelay(int relayPin, int moisture, int threshold)
{
  bool activate = (moisture < threshold);
  if (activate)
  {
    digitalWrite(relayPin, LOW);
  }
  else 
  {
    digitalWrite(relayPin, HIGH);
  }
  return activate;
}