/* MADE BY Pygramer78 & Pablogpus*/
/*__________/ INIT COMMENTS \_____________*/
/*
LICENSE:
GPL-3 (GNU public license)
*/

#ifndef IRRIGATION_DEVICE
#define IRRIGATION_DEVICE
void activatePinMode(int relayPin, int sensor_pin);
int readMoisture(void);
void controlRelay(int relayPin, int moisture, int threshold);
#endif

