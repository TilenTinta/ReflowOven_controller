/*
 * MAX31855.c
 *
 *  Created on: Feb 26, 2024
 *      Author: Tinta T.
 */

#include "MAX31855.h"

void ReadThermocoupleTemp(Thermocouple *dev, SPI_HandleTypeDef *SPIHandle, GPIO_TypeDef *GPIO_Port, uint16_t pin)
{
	dev -> SPIHandle = SPIHandle;

	uint8_t regData[4];

	HAL_GPIO_WritePin(GPIO_Port, pin, GPIO_PIN_RESET);
	HAL_SPI_Receive(dev -> SPIHandle, (uint8_t*)&regData, 4, 1000);
	HAL_GPIO_WritePin(GPIO_Port, pin, GPIO_PIN_SET);

	// Check for fault
	dev -> fault = regData[1] & 0x01;

	// If fault is not detected continue
	if(dev -> fault == 0){

		// Calculate temperature (hot junction) with compensation
		int8_t sign = regData[0] >> 7; // 1 = minus, 0 = plus

		uint16_t temp = (((uint16_t)(regData[0] & 0x7f) << 6) | (uint16_t)(regData[1] >> 2));

		if (sign == 0)
		{

			dev -> temperature_C = (float)temp * 0.25f;

		}
		else
		{

		    temp = (~temp + 1) & 0x1FFF; // calculate negative number - masking
		    dev -> temperature_C = -(float)temp * 0.25f;

		}


		// Calculate temperature (cold junction)
		sign = regData[2] >> 7; // 1 = minus, 0 = plus

		temp = (((uint16_t)(regData[2] & 0x7f) << 4) | (uint16_t)(regData[3] >> 4)) ;

		if (sign == 0)
		{

			dev -> temperatureCJ_C = (float)temp * 0.0625f; // get final temperature;

		}
		else
		{

		    temp = (~temp + 1) & 0x07ff; // calculate negative number - masking
		    dev -> temperatureCJ_C = -(float)temp * 0.0625f;

		}
	}
}


void CheckThermocouple(Thermocouple *dev, SPI_HandleTypeDef *SPIHandle, GPIO_TypeDef *GPIO_Port, uint16_t pin)
{
	dev -> SPIHandle = SPIHandle;

	uint8_t regData[4];

	HAL_GPIO_WritePin(GPIO_Port, pin, GPIO_PIN_RESET);
	HAL_SPI_Receive(dev -> SPIHandle, (uint8_t*)&regData, 4, 1000);
	HAL_GPIO_WritePin(GPIO_Port, pin, GPIO_PIN_SET);

	// Check for fault
	dev -> fault = regData[1] & 0x01;

	// If fault is detected check the cause
	if(dev -> fault == 1){

		// Errors
		dev -> SCVFault = regData[3] & 0x04;
		dev -> SCGFault = regData[3] & 0x02;
		dev -> OCFault = regData[3] & 0x01;

	}
}


