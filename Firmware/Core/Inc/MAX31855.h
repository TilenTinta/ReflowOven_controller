/*
 * MAX31855.h
 *
 *  Created on: Feb 26, 2024
 *      Author: Tinta T.
 */

#ifndef MAX31855_H_
#define MAX31855_H_

#include "main.h"

/* STRUCTS */
typedef struct {

	SPI_HandleTypeDef *SPIHandle;	// SPI Handle

	float temperature_C;			// thermocouple temperature

	float temperatureCJ_C;			// cold junction temperature

	uint8_t fault;					// Fault: 0 - OK, 1 - NOK (one of three fault is positive)

	uint8_t SCVFault;				// 0 - OK, 1 - NOK (short circuit to Vcc)

	uint8_t SCGFault;				// 0 - OK, 1 - NOK (short circuit to GND)

	uint8_t OCFault;				// 0 - OK, 1 - NOK (open / probe problem)

} Thermocouple;


/* FUNCTIONS */
void ReadThermocoupleTemp(Thermocouple *dev, SPI_HandleTypeDef *SPIHandle);
void CheckThermocouple(Thermocouple *dev, SPI_HandleTypeDef *SPIHandle);

#endif /* MAX31855_H_ */
