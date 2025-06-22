#include "smart_irrigation_device.h"

void activatePinMode(void)
{
  Serial.begin(9600);
  pinMode(RELAYPIN, OUTPUT);
  pinMode(SENSORPIN, INPUT);
  Serial.println("Reading from the sensor...");
  delay(2000);
}

void readMoisture(void)
{
  int output_value;
  output_value = analogRead(SENSORPIN);
  output_value = map(output_value, 550, 10, 0, 100);
  Serial.print("Moisture: ");
  Serial.print(output_value);
  Serial.println("%");
  if (output_value < 0)
  {
    digitalWrite(RELAYPIN, LOW);
  }
  else 
  {
    digitalWrite(RELAYPIN, HIGH);
  }
  delay(2000);
}
