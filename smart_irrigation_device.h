/* MADE BY Pygramer78 & Pablogpus*/
/*__________/ INIT COMMENTS \_____________*/
/*
Things to install;
 AHT20: https://github.com/dvarrel/AHT20
  TSL2591: https://github.com/adafruit/Adafruit_TSL2591_Library
  BMP280: https://github.com/adafruit/Adafruit_BMP280_Library
  MLX90615: https://github.com/skiselev/MLX90615

  My library;
  https://github.com/Pygramer78/Arduino-Libs


LICENSE:
GPL-3 (GNU public license)
*/

#ifndef IRRIGATION_DEVICE
#define IRRIGATION_DEVICE
//#include <BetterTSL2591.h> // <- no need to use this now
#include <BetterBMP280.h>
#include <BetterAHT20.h>
void activatePinMode(int relayPin, int sensor_pin);
int readMoisture(void);
void controlRelay(int relayPin, int moisture, int threshold);
#endif

