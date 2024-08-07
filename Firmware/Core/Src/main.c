/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "app_touchgfx.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
CRC_HandleTypeDef hcrc;

SPI_HandleTypeDef hspi1;
SPI_HandleTypeDef hspi2;
DMA_HandleTypeDef hdma_spi1_tx;

TIM_HandleTypeDef htim2;
TIM_HandleTypeDef htim3;
TIM_HandleTypeDef htim4;

UART_HandleTypeDef huart1;

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_DMA_Init(void);
static void MX_USART1_UART_Init(void);
static void MX_SPI1_Init(void);
static void MX_CRC_Init(void);
static void MX_SPI2_Init(void);
static void MX_TIM3_Init(void);
static void MX_TIM2_Init(void);
static void MX_TIM4_Init(void);
/* USER CODE BEGIN PFP */
// Define structs
Thermocouple thermocouple1;
Thermocouple thermocouple2;

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

// Default values for oven preset
OvenParameters ovenParameters = {

		// device operating variables
		.initEnd = 0,
		.deviceState = 0,
		.pageChageNo = 0,
		.reflowSetupStep = 0,
		.pidSetupStep = 0,
		.tempNTC = 0.0f,
		.tempThermo = 0.0f,
		.PID_trig = 0,
		.saveFlash = 0,
		.reflowStage = 0,
		.tempSPDelta = 0,
		.setpointCal = 0,
		.totalReflowTime = 0,
		.endTimeStage = 0,
		.tempThermoAvg = 0,
		.addPoint = 0,

		// retentive variables
		.Kp = 10.0f,	// 3.96
		.Ki = 0.1f,		// 0.078
		.Kd = 4.5f,		// 49.5
		.profileNoSelected = 2,
		.lastUsedMode = 0,

		// TODO ?
		// variables changes on define parameters in main.h
		.dualProbes = 0,
		.dualSSRs = 0,
		.units = 0,
		.AUX1 = 0,
		.AUX2 = 0,

		// device runing variables
		.startStop = 0,
		.actionTick = 0,
		.cntTimerTick = 0,
		.cntSecond = 0,
		.cntMinute = 0,
		.cntHour = 0
};

// Default values for profiles
ReflowProfiles reflowProfiles = {
		.profile1Temp = {150, 180, 255, 255, 0},
		.profile1Time = {100, 160, 200, 215, 300},

		.profile2Temp = {100, 150, 183, 183, 0},
		.profile2Time = {100, 220, 280, 340, 400},

		.profile3Temp = {100, 150, 183, 183, 0},
		.profile3Time = {100, 220, 280, 340, 400},

		.profile4Temp = {100, 150, 183, 183, 0},
		.profile4Time = {100, 220, 280, 340, 400},

		.profile5Temp = {100, 150, 183, 183, 0},
		.profile5Time = {100, 220, 280, 340, 400}
};

// Default values for drying
DryPreset dryPreset = {
		.dryTemp = 100,
		.dryTime = 60
};

// Default values for error codes
OvenErrorCodes ovenErrorCodes = {
		.ADC12V = 0,
		.ADC3V3 = 0,
		.NTCErr = 0,
		.thermoCouple1Err = 0,
		.thermoCouple2Err = 0
};


// variables init
float AN_V_12V = 0;				// Measured 12V voltage
float AN_V_3V3 = 0;				// Measured 3.3V voltage
uint8_t INHIBIT = 0;			// enable 12V bus

uint8_t saveToFlash = 0;		// protect writing to flash every time (connected with KEEP_FLASH_DATA)
float tempAVG1[5] = {};			// values of temp from thermocouple 1 in one second to calculate average value
float tempAVG2[5] = {};			// values of temp from thermocouple 2 in one second to calculate average value
uint8_t cntTempArray = 0;		// counter for temperature array
uint8_t endOfCycle = 0;			// flag to indicate the end of drying or reflow
uint16_t startingTemp = 0; 		// used to set setpoints
uint16_t endTemp = 0;			// temperature expected at the end of each step

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

	// PID parameters
	PID pid;
	PIDInit(&pid);

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_DMA_Init();
  MX_USART1_UART_Init();
  MX_SPI1_Init();
  MX_CRC_Init();
  MX_SPI2_Init();
  MX_TIM3_Init();
  MX_TIM2_Init();
  MX_TIM4_Init();
  MX_TouchGFX_Init();
  /* USER CODE BEGIN 2 */

  // Set default state of CS and other pins
  HAL_GPIO_WritePin(TOUCH_CS_GPIO_Port, TOUCH_CS_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DISPL_CS_GPIO_Port, DISPL_CS_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(FLASH_CS_GPIO_Port, FLASH_CS_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(TERMO1_CS_GPIO_Port, TERMO1_CS_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(TERMO2_CS_GPIO_Port, TERMO2_CS_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(AUX_OUT1_GPIO_Port, AUX_OUT1_Pin, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(AUX_OUT2_GPIO_Port, AUX_OUT2_Pin, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DISPL_LED_GPIO_Port, DISPL_LED_Pin, GPIO_PIN_SET);

  Displ_Init(Displ_Orientat_90);			// initialize display controller - set orientation parameter as per TouchGFX setup
  Displ_BackLight('I');  					// initialize backlight
  touchgfxSignalVSync();
  HAL_TIM_Base_Start_IT(&TGFX_T);			// start TouchGFX tick timer

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */


  while (1)
  {

	  if (Touch_GotATouch(0))
		  touchgfxSignalVSync();
    /* USER CODE END WHILE */

  MX_TouchGFX_Process();
    /* USER CODE BEGIN 3 */

	  // Timer interrupt trigger (5Hz)
	  if (ovenParameters.actionTick == 1)
	  {
		  // To start timer the device must be in run mode (startStop = 1)
		  if (ovenParameters.startStop == 1)
		  {
			  // Ticks to seconds
			  // that part of code is implemented in interrupt routine becouse of precision

			  // Seconds to minutes
			  if (ovenParameters.cntSecond >= secInMin)
			  {
				  ovenParameters.cntSecond = 0;
				  ovenParameters.cntMinute ++;
			  }

			  // Minutes to hours
			  if (ovenParameters.cntMinute >= minInH)
			  {
				  ovenParameters.cntMinute = 0;
				  ovenParameters.cntHour ++;
			  }

			  if (ovenParameters.deviceState == STATE_DRY)
			  {
				  uint32_t timeDryEst = dryPreset.dryTime - (ovenParameters.cntHour * 60 + ovenParameters.cntMinute);
				  if (timeDryEst == 0) endOfCycle = 1;
			  }
			  else if (ovenParameters.deviceState == STATE_REFLOW)
			  {
				  uint32_t timeReflowEst = ovenParameters.totalReflowTime - (ovenParameters.cntMinute * 60 + ovenParameters.cntSecond);
				  if (timeReflowEst == 0) endOfCycle = 1;
			  }

		  }
		  else
		  {
			  ovenParameters.cntHour = 0;
			  ovenParameters.cntMinute = 0;
			  ovenParameters.cntSecond = 0;
			  TIM4->CCR2 = 0;
			  TIM4->CCR1 = 0;
		  }

		  // Calculate average temperatures used for regulation
		  if (cntTempArray >= tickInSec)
		  {
			  pid.tempAVGThermo1 = 0;
			  pid.tempAVGThermo2 = 0;

			  if (ovenParameters.dualProbes == 0)
			  {
				  for (uint8_t i = 0; i < tickInSec; i++)
				  {
					  pid.tempAVGThermo1 += tempAVG1[i];
				  }

				  pid.tempAVGThermo1 = pid.tempAVGThermo1 / tickInSec;
				  ovenParameters.tempThermoAvg = pid.tempAVGThermo1;

				  // Over temperature protection
				  if (ovenParameters.tempThermoAvg >= OVERTEMP_ERR)
				  {
					  ovenErrorCodes.overTemp ++;
					  ovenParameters.deviceState == STATE_ERROR;
				  }
			  }

			  if (ovenParameters.dualProbes == 1)
			  {
				  for (uint8_t i = 0; i < tickInSec; i++)
				  {
					  pid.tempAVGThermo1 += tempAVG1[i];
					  pid.tempAVGThermo2 += tempAVG2[i];
				  }

				  pid.tempAVGThermo1 = pid.tempAVGThermo1 / tickInSec;
				  pid.tempAVGThermo2 = pid.tempAVGThermo2 / tickInSec;

				  ovenParameters.tempThermoAvg = (pid.tempAVGThermo1 + pid.tempAVGThermo2) / 2;

				  // Over temperature protection
				  if (ovenParameters.tempThermoAvg >= OVERTEMP_ERR)
				  {
					  ovenErrorCodes.overTemp ++;
					  ovenParameters.deviceState == STATE_ERROR;
				  }
			  }

			  // Clear array
			  for (uint8_t i = 0; i < tickInSec; i++)
			  {
				  tempAVG1[i] = 0;
				  tempAVG2[i] = 0;
			  }

			  cntTempArray = 0;
		  }


		  // Read thermocouple 1
		  if (ovenParameters.dualProbes == 0)
		  {
			  ReadThermocoupleTemp(&thermocouple1, &hspi2, TERMO1_CS_GPIO_Port, TERMO1_CS_Pin);
			  if (thermocouple1.cntFault == 5)
			  {
				  ovenParameters.deviceState = STATE_ERROR;
				  ovenErrorCodes.thermoCouple1Err = 1;
			  }

			  tempAVG1[cntTempArray] = thermocouple1.temperature_C;

			  ovenParameters.tempThermo = thermocouple1.temperature_C; // get temp to show on screen
		  }

		  // Read thermocouple 1 and thermocouple 2
		  if (ovenParameters.dualProbes == 1)
		  {
			  ReadThermocoupleTemp(&thermocouple1, &hspi2, TERMO1_CS_GPIO_Port, TERMO1_CS_Pin);
			  if (thermocouple1.cntFault == 5)
			  {
				  ovenParameters.deviceState = STATE_ERROR;
				  ovenErrorCodes.thermoCouple1Err = 1;
			  }

			  tempAVG1[cntTempArray] = thermocouple1.temperature_C;

			  ReadThermocoupleTemp(&thermocouple2, &hspi2, TERMO2_CS_GPIO_Port, TERMO2_CS_Pin);
			  if (thermocouple2.cntFault == 5)
			  {
				  ovenParameters.deviceState = STATE_ERROR;
				  ovenErrorCodes.thermoCouple2Err = 1;
			  }

			  tempAVG2[cntTempArray] = thermocouple2.temperature_C;

			  ovenParameters.tempThermo = thermocouple1.temperature_C;
			  ovenParameters.tempThermo += thermocouple2.temperature_C;
			  ovenParameters.tempThermo = ovenParameters.tempThermo / 2; // get average temp from both probes to show on screen
		  }

		  cntTempArray ++;

		  // Print data on serial port
			#ifdef UART_EN
			  // Print data
			  char message[50] = {'\0'};
			  sprintf((char *)message, "Probe1 = %.2f\r\n", ovenParameters.tempThermo); // added tick in settings to allow float serial data
			  HAL_UART_Transmit(&huart1, (uint8_t*)message, strlen((char*)message), 100);
			#endif


		  // RESET TICK TIMER - timer callback declared in z_displ_ILI9XXX.h file
		  ovenParameters.actionTick = 0;

	  }


	  // Save variables to flash
	  if (ovenParameters.saveFlash == 1)
	  {
		  WriteVarToFlash();
	  }


	  ///////////// STATE MACHINE /////////////
	  switch(ovenParameters.deviceState)
	  {
	  case STATE_INIT:
		  //////////////////////////////////////////////////////////////////////////////////////////////////////

		  uint8_t err = 0; // error counter

		  HAL_Delay(1000); // wait 1 second for all devices to power on

			#ifdef DUAL_PROBE
		  	  ovenParameters.dualProbes = 1;
			#endif

			#ifdef DUAL_SSR
		  	  ovenParameters.dualSSRs = 1;
			#endif

			#ifdef AUX1_EN
		  	  ovenParameters.AUX1 = 1;
			#endif

			#ifdef AUX2_EN
		  	  ovenParameters.AUX2 = 1;
			#endif

		  	// FLASH
		  if (!Flash_Init())
		  {
			while(1){}
		  }

		  // TODO:
		  // ... read
		  AN_V_12V = 12; // DELETE
		  AN_V_3V3 = 3.3; // DELETE
		  // Check input voltage //
		  if (AN_V_12V < MIN_IN_VOLTAGE)
		  {
			  err++;
			  ovenErrorCodes.ADC12V = 1;
		  }

		  // Check buck output voltage //
		  if (AN_V_3V3 < MIN_BUCK_VOLTAGE)
		  {
			  err++;
			  ovenErrorCodes.ADC3V3 = 1;
		  }


		  // Check thermocouples //
		  // Probe 1
		  if (ovenParameters.dualProbes == 0)
		  {
			  CheckThermocouple(&thermocouple1, &hspi2, TERMO1_CS_GPIO_Port, TERMO1_CS_Pin);
			  if (thermocouple1.fault == 1)
			  {
				  ovenErrorCodes.thermoCouple1Err = 1;
				  err++;
			  }
		  }

		  // Probe 2
		  if (ovenParameters.dualProbes == 1)
		  {
			  CheckThermocouple(&thermocouple1, &hspi2, TERMO1_CS_GPIO_Port, TERMO1_CS_Pin);
			  if (thermocouple1.fault == 1)
			  {
				  ovenErrorCodes.thermoCouple1Err = 1;
				  err++;
			  }

			  CheckThermocouple(&thermocouple2, &hspi2, TERMO2_CS_GPIO_Port, TERMO2_CS_Pin);
			  if (thermocouple2.fault == 1)
			  {
				  ovenErrorCodes.thermoCouple2Err = 1;
				  err++;
			  }
		  }


		  // NTC temperature //
		  // ... read
		  ovenParameters.tempNTC = 30; // DELETE

		  if (ovenParameters.tempNTC > NTC_MAX_TEMP)
		  {
			  err++;
			  ovenErrorCodes.NTCErr = 1;
		  }


		  // Check error counter //
		  if (err > 0)
		  {
			  ovenParameters.deviceState = STATE_ERROR; // Send device to error state
			 HAL_Delay(2000);

			 ovenParameters.initEnd = 1;
			 // change screen
			 ovenParameters.pageChageNo = 3; // Error
		  }
		  else
		  {
			  HAL_GPIO_WritePin(INHIBIT_GPIO_Port, INHIBIT_Pin, GPIO_PIN_SET); // Enable inhibit
			  ovenParameters.initEnd = 1;

			#ifndef PID_CAL
				  HAL_TIM_PWM_Start(&htim4, TIM_CHANNEL_2); // enable output for SSR1
				  TIM4->CCR2 = 0;

				  HAL_TIM_PWM_Start(&htim4, TIM_CHANNEL_1); // enable output for SSR2
				  TIM4->CCR1 = 0;
			#endif

			  // continue in reflow mode
			  if (ovenParameters.lastUsedMode == 0)
			  {
				  HAL_Delay(2000);
				  // change screen
				  ovenParameters.deviceState = STATE_REFLOW;
				  ovenParameters.pageChageNo = 1; // Reflow
			  }

			  // continue in drying mode
			  if (ovenParameters.lastUsedMode == 1)
			  {
				  HAL_Delay(2000);
				  // change screen
				  ovenParameters.deviceState = STATE_DRY;
				  ovenParameters.pageChageNo = 2; // Dry
			  }
		  }

		  break;

	  case STATE_ERROR:
		  //////////////////////////////////////////////////////////////////////////////////////////////////////
		  // DO NOTHING, INVESTIGATE THE PROBLEM
		  break;

	  case STATE_REFLOW:
		  //////////////////////////////////////////////////////////////////////////////////////////////////////

		  // End of reflow profile
		  if (endOfCycle == 1)
		  {
			  ovenParameters.startStop = 0; // end of reflow
			  TIM4->CCR2;
			  endOfCycle = 0;
			  HAL_GPIO_WritePin(BUZZER_GPIO_Port, BUZZER_Pin, GPIO_PIN_SET);
			  HAL_Delay(50);
			  HAL_GPIO_WritePin(BUZZER_GPIO_Port, BUZZER_Pin, GPIO_PIN_RESET);
		  }

		  // Get current time of reflow in seconds
		  uint16_t timeSeconds = ovenParameters.cntMinute * 60 + ovenParameters.cntSecond;

		  // Calculate delta to use as setpoint, trigered every stage change (5 times)
		  if (ovenParameters.setpointCal == 0)
		  {
			  uint16_t startTime = 0;
			  uint16_t reflowTimeDelta = 0;
			  uint16_t startTemp = round(ovenParameters.tempThermo); // can be used even these value
			  uint16_t endTime = 0;
			  int16_t tempdelta = 0;

			  // set end time of current stage
			  switch(ovenParameters.profileNoSelected)
			  {
				  case 1:
					  // Get entire time of profile
					  ovenParameters.totalReflowTime = reflowProfiles.profile1Time[4];

					  // get time delta between two stages
					  if (ovenParameters.reflowStage != 0) startTime = reflowProfiles.profile1Time[ovenParameters.reflowStage - 1];
					  endTime = reflowProfiles.profile1Time[ovenParameters.reflowStage];
					  ovenParameters.endTimeStage = endTime;
					  reflowTimeDelta = endTime - startTime;

					  // get temp delta to set setpoint
					  if (ovenParameters.reflowStage != 0) startTemp = reflowProfiles.profile1Temp[ovenParameters.reflowStage - 1];
					  tempdelta = ((float)reflowProfiles.profile1Temp[ovenParameters.reflowStage] - (float)startTemp);
					  if (tempdelta > 0) ovenParameters.tempSPDelta = ceilf(tempdelta / (float)reflowTimeDelta);
					  if (tempdelta < 0) ovenParameters.tempSPDelta = floorf(tempdelta / (float)reflowTimeDelta);

					  // get stage end temp
					  endTemp = reflowProfiles.profile1Temp[ovenParameters.reflowStage];

					  // set starting temp
					  if (ovenParameters.reflowStage == 0) startingTemp = round(ovenParameters.tempThermo);

					  break;

				  case 2:
					  // Get entire time of profile
					  ovenParameters.totalReflowTime = reflowProfiles.profile2Time[4];

					  // get time delta between two stages
					  if (ovenParameters.reflowStage != 0) startTime = reflowProfiles.profile2Time[ovenParameters.reflowStage - 1];
					  endTime = reflowProfiles.profile2Time[ovenParameters.reflowStage];
					  ovenParameters.endTimeStage = endTime;
					  reflowTimeDelta = endTime - startTime;

					  // get temp delta to set setpoint
					  if (ovenParameters.reflowStage != 0) startTemp = reflowProfiles.profile2Temp[ovenParameters.reflowStage - 1];
					  tempdelta = ((float)reflowProfiles.profile2Temp[ovenParameters.reflowStage] - (float)startTemp);
					  if (tempdelta > 0) ovenParameters.tempSPDelta = ceilf(tempdelta / (float)reflowTimeDelta);
					  if (tempdelta < 0) ovenParameters.tempSPDelta = floorf(tempdelta / (float)reflowTimeDelta);

					  // get stage end temp
					  endTemp = reflowProfiles.profile2Temp[ovenParameters.reflowStage];

					  // set starting temp
					  if (ovenParameters.reflowStage == 0) startingTemp = round(ovenParameters.tempThermo);

					  break;

				  case 3:
					  // Get entire time of profile
					  ovenParameters.totalReflowTime = reflowProfiles.profile3Time[4];

					  // get time delta between two stages
					  if (ovenParameters.reflowStage != 0) startTime = reflowProfiles.profile3Time[ovenParameters.reflowStage - 1];
					  endTime = reflowProfiles.profile3Time[ovenParameters.reflowStage];
					  ovenParameters.endTimeStage = endTime;
					  reflowTimeDelta = endTime - startTime;

					  // get temp delta to set setpoint
					  if (ovenParameters.reflowStage != 0) startTemp = reflowProfiles.profile3Temp[ovenParameters.reflowStage - 1];
					  tempdelta = ((float)reflowProfiles.profile3Temp[ovenParameters.reflowStage] - (float)startTemp);
					  if (tempdelta > 0) ovenParameters.tempSPDelta = ceilf(tempdelta / (float)reflowTimeDelta);
					  if (tempdelta < 0) ovenParameters.tempSPDelta = floorf(tempdelta / (float)reflowTimeDelta);

					  // get stage end temp
					  endTemp = reflowProfiles.profile3Temp[ovenParameters.reflowStage];

					  // set starting temp
					  if (ovenParameters.reflowStage == 0) startingTemp = round(ovenParameters.tempThermo);

					  break;

				  case 4:
					  // Get entire time of profile
					  ovenParameters.totalReflowTime = reflowProfiles.profile4Time[4];

					  // get time delta between two stages
					  if (ovenParameters.reflowStage != 0) startTime = reflowProfiles.profile4Time[ovenParameters.reflowStage - 1];
					  endTime = reflowProfiles.profile4Time[ovenParameters.reflowStage];
					  ovenParameters.endTimeStage = endTime;
					  reflowTimeDelta = endTime - startTime;

					  // get temp delta to set setpoint
					  if (ovenParameters.reflowStage != 0) startTemp = reflowProfiles.profile4Temp[ovenParameters.reflowStage - 1];
					  tempdelta = ((float)reflowProfiles.profile4Temp[ovenParameters.reflowStage] - (float)startTemp);
					  if (tempdelta > 0) ovenParameters.tempSPDelta = ceilf(tempdelta / (float)reflowTimeDelta);
					  if (tempdelta < 0) ovenParameters.tempSPDelta = floorf(tempdelta / (float)reflowTimeDelta);

					  // get stage end temp
					  endTemp = reflowProfiles.profile4Temp[ovenParameters.reflowStage];

					  // set starting temp
					  if (ovenParameters.reflowStage == 0) startingTemp = round(ovenParameters.tempThermo);

					  break;

				  case 5:
					  // Get entire time of profile
					  ovenParameters.totalReflowTime = reflowProfiles.profile5Time[4];

					  // get time delta between two stages
					  if (ovenParameters.reflowStage != 0) startTime = reflowProfiles.profile5Time[ovenParameters.reflowStage - 1];
					  endTime = reflowProfiles.profile5Time[ovenParameters.reflowStage];
					  ovenParameters.endTimeStage = endTime;
					  reflowTimeDelta = endTime - startTime;

					  // get temp delta to set setpoint
					  if (ovenParameters.reflowStage != 0) startTemp = reflowProfiles.profile5Temp[ovenParameters.reflowStage - 1];
					  tempdelta = ((float)reflowProfiles.profile5Temp[ovenParameters.reflowStage] - (float)startTemp);
					  if (tempdelta > 0) ovenParameters.tempSPDelta = ceilf(tempdelta / (float)reflowTimeDelta);
					  if (tempdelta < 0) ovenParameters.tempSPDelta = floorf(tempdelta / (float)reflowTimeDelta);

					  // get stage end temp
					  endTemp = reflowProfiles.profile5Temp[ovenParameters.reflowStage];

					  // set starting temp
					  if (ovenParameters.reflowStage == 0) startingTemp = round(ovenParameters.tempThermo);

					  break;
			  }

			  ovenParameters.setpointCal = 1;
		  }

		  // PID calculation
		  // TODO: repair how the next set point will be calculated to get more precise ramp following
		  if (ovenParameters.PID_trig == 1)
		  {
			  // increase setpoint
			  if (startingTemp < endTemp && ovenParameters.reflowStage != 4) startingTemp = round(startingTemp) + ovenParameters.tempSPDelta;

			  // cooling
			  if (startingTemp > endTemp && ovenParameters.reflowStage == 4) startingTemp = 0; // Turn OFF heater
			  //if (startingTemp > endTemp && ovenParameters.reflowStage == 4) startingTemp = round(startingTemp) + ovenParameters.tempSPDelta; // Hold constant drop with heater

			  TIM4->CCR2 =  PIDcalculation(&pid, &startingTemp); // set SSR1 Duty (Timer 4 channel 2)
			  ovenParameters.PID_trig = 0; // reset pid calculate flag
			  ovenParameters.addPoint = 1;
		  }

		  // Detect time to end current stage of reflow
		  if (timeSeconds == ovenParameters.endTimeStage)
		  {
			ovenParameters.setpointCal = 0; // trigger recalculation of parameters
			ovenParameters.reflowStage ++;	// move to next stage
		  }

		  break;

	  case STATE_DRY:
		  //////////////////////////////////////////////////////////////////////////////////////////////////////

		  if (endOfCycle == 1)
		  {
			  TIM4->CCR2;
			  ovenParameters.startStop = 0; // end of drying
			  endOfCycle = 0;
		  }

		  if (ovenParameters.PID_trig == 1)
		  {
			  TIM4->CCR2 =  PIDcalculation(&pid, &dryPreset.dryTemp); // set SSR1 Duty (Timer 4 channel 2)
			  ovenParameters.PID_trig = 0; // reset pid calculate flag
		  }

		  break;

	  default:
		  //////////////////////////////////////////////////////////////////////////////////////////////////////
		  // DO NOTHING
		  break;

	  }

  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 6;
  RCC_OscInitStruct.PLL.PLLN = 100;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 8;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_3) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief CRC Initialization Function
  * @param None
  * @retval None
  */
static void MX_CRC_Init(void)
{

  /* USER CODE BEGIN CRC_Init 0 */

  /* USER CODE END CRC_Init 0 */

  /* USER CODE BEGIN CRC_Init 1 */

  /* USER CODE END CRC_Init 1 */
  hcrc.Instance = CRC;
  if (HAL_CRC_Init(&hcrc) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN CRC_Init 2 */

  /* USER CODE END CRC_Init 2 */

}

/**
  * @brief SPI1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_SPI1_Init(void)
{

  /* USER CODE BEGIN SPI1_Init 0 */

  /* USER CODE END SPI1_Init 0 */

  /* USER CODE BEGIN SPI1_Init 1 */

  /* USER CODE END SPI1_Init 1 */
  /* SPI1 parameter configuration*/
  hspi1.Instance = SPI1;
  hspi1.Init.Mode = SPI_MODE_MASTER;
  hspi1.Init.Direction = SPI_DIRECTION_2LINES;
  hspi1.Init.DataSize = SPI_DATASIZE_8BIT;
  hspi1.Init.CLKPolarity = SPI_POLARITY_LOW;
  hspi1.Init.CLKPhase = SPI_PHASE_1EDGE;
  hspi1.Init.NSS = SPI_NSS_SOFT;
  hspi1.Init.BaudRatePrescaler = SPI_BAUDRATEPRESCALER_2;
  hspi1.Init.FirstBit = SPI_FIRSTBIT_MSB;
  hspi1.Init.TIMode = SPI_TIMODE_DISABLE;
  hspi1.Init.CRCCalculation = SPI_CRCCALCULATION_DISABLE;
  hspi1.Init.CRCPolynomial = 10;
  if (HAL_SPI_Init(&hspi1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN SPI1_Init 2 */

  /* USER CODE END SPI1_Init 2 */

}

/**
  * @brief SPI2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_SPI2_Init(void)
{

  /* USER CODE BEGIN SPI2_Init 0 */

  /* USER CODE END SPI2_Init 0 */

  /* USER CODE BEGIN SPI2_Init 1 */

  /* USER CODE END SPI2_Init 1 */
  /* SPI2 parameter configuration*/
  hspi2.Instance = SPI2;
  hspi2.Init.Mode = SPI_MODE_MASTER;
  hspi2.Init.Direction = SPI_DIRECTION_2LINES;
  hspi2.Init.DataSize = SPI_DATASIZE_8BIT;
  hspi2.Init.CLKPolarity = SPI_POLARITY_LOW;
  hspi2.Init.CLKPhase = SPI_PHASE_1EDGE;
  hspi2.Init.NSS = SPI_NSS_SOFT;
  hspi2.Init.BaudRatePrescaler = SPI_BAUDRATEPRESCALER_2;
  hspi2.Init.FirstBit = SPI_FIRSTBIT_MSB;
  hspi2.Init.TIMode = SPI_TIMODE_DISABLE;
  hspi2.Init.CRCCalculation = SPI_CRCCALCULATION_DISABLE;
  hspi2.Init.CRCPolynomial = 10;
  if (HAL_SPI_Init(&hspi2) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN SPI2_Init 2 */

  /* USER CODE END SPI2_Init 2 */

}

/**
  * @brief TIM2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM2_Init(void)
{

  /* USER CODE BEGIN TIM2_Init 0 */

  /* USER CODE END TIM2_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM2_Init 1 */

  /* USER CODE END TIM2_Init 1 */
  htim2.Instance = TIM2;
  htim2.Init.Prescaler = 4999;
  htim2.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim2.Init.Period = 4000;
  htim2.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim2.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim2) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim2, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim2, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM2_Init 2 */

  /* USER CODE END TIM2_Init 2 */

}

/**
  * @brief TIM3 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM3_Init(void)
{

  /* USER CODE BEGIN TIM3_Init 0 */

  /* USER CODE END TIM3_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM3_Init 1 */

  /* USER CODE END TIM3_Init 1 */
  htim3.Instance = TIM3;
  htim3.Init.Prescaler = 0;
  htim3.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim3.Init.Period = 62499;
  htim3.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim3.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_ENABLE;
  if (HAL_TIM_Base_Init(&htim3) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim3, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim3, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM3_Init 2 */

  /* USER CODE END TIM3_Init 2 */

}

/**
  * @brief TIM4 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM4_Init(void)
{

  /* USER CODE BEGIN TIM4_Init 0 */

  /* USER CODE END TIM4_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};
  TIM_OC_InitTypeDef sConfigOC = {0};

  /* USER CODE BEGIN TIM4_Init 1 */

  /* USER CODE END TIM4_Init 1 */
  htim4.Instance = TIM4;
  htim4.Init.Prescaler = 4999;
  htim4.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim4.Init.Period = 19999;
  htim4.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim4.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_ENABLE;
  if (HAL_TIM_Base_Init(&htim4) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim4, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_TIM_PWM_Init(&htim4) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim4, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sConfigOC.OCMode = TIM_OCMODE_PWM1;
  sConfigOC.Pulse = 0;
  sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
  sConfigOC.OCFastMode = TIM_OCFAST_DISABLE;
  if (HAL_TIM_PWM_ConfigChannel(&htim4, &sConfigOC, TIM_CHANNEL_1) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_TIM_PWM_ConfigChannel(&htim4, &sConfigOC, TIM_CHANNEL_2) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM4_Init 2 */

  /* USER CODE END TIM4_Init 2 */
  HAL_TIM_MspPostInit(&htim4);

}

/**
  * @brief USART1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_USART1_UART_Init(void)
{

  /* USER CODE BEGIN USART1_Init 0 */

  /* USER CODE END USART1_Init 0 */

  /* USER CODE BEGIN USART1_Init 1 */

  /* USER CODE END USART1_Init 1 */
  huart1.Instance = USART1;
  huart1.Init.BaudRate = 9600;
  huart1.Init.WordLength = UART_WORDLENGTH_8B;
  huart1.Init.StopBits = UART_STOPBITS_1;
  huart1.Init.Parity = UART_PARITY_NONE;
  huart1.Init.Mode = UART_MODE_TX_RX;
  huart1.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart1.Init.OverSampling = UART_OVERSAMPLING_16;
  if (HAL_UART_Init(&huart1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN USART1_Init 2 */

  /* USER CODE END USART1_Init 2 */

}

/**
  * Enable DMA controller clock
  */
static void MX_DMA_Init(void)
{

  /* DMA controller clock enable */
  __HAL_RCC_DMA2_CLK_ENABLE();

  /* DMA interrupt init */
  /* DMA2_Stream2_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA2_Stream2_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(DMA2_Stream2_IRQn);

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
/* USER CODE BEGIN MX_GPIO_Init_1 */
/* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, INHIBIT_Pin|BUZZER_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, TOUCH_CS_Pin|FLASH_CS_Pin, GPIO_PIN_SET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, DISPL_LED_Pin|DISPL_DC_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, DISPL_RST_Pin|AUX_OUT2_Pin|AUX_OUT1_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, DISPL_CS_Pin|TERMO1_CS_Pin|TERMO2_CS_Pin, GPIO_PIN_SET);

  /*Configure GPIO pin : AN_12V_Pin */
  GPIO_InitStruct.Pin = AN_12V_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(AN_12V_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : INHIBIT_Pin BUZZER_Pin */
  GPIO_InitStruct.Pin = INHIBIT_Pin|BUZZER_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pin : TOUCH_INT_Pin */
  GPIO_InitStruct.Pin = TOUCH_INT_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_RISING;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(TOUCH_INT_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : TOUCH_CS_Pin */
  GPIO_InitStruct.Pin = TOUCH_CS_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  HAL_GPIO_Init(TOUCH_CS_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : DISPL_LED_Pin DISPL_DC_Pin FLASH_CS_Pin */
  GPIO_InitStruct.Pin = DISPL_LED_Pin|DISPL_DC_Pin|FLASH_CS_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pin : DISPL_RST_Pin */
  GPIO_InitStruct.Pin = DISPL_RST_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  HAL_GPIO_Init(DISPL_RST_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : DISPL_CS_Pin */
  GPIO_InitStruct.Pin = DISPL_CS_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  HAL_GPIO_Init(DISPL_CS_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : AN_3V3_Pin */
  GPIO_InitStruct.Pin = AN_3V3_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(AN_3V3_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : TERMO1_CS_Pin TERMO2_CS_Pin AUX_OUT2_Pin AUX_OUT1_Pin */
  GPIO_InitStruct.Pin = TERMO1_CS_Pin|TERMO2_CS_Pin|AUX_OUT2_Pin|AUX_OUT1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pin : AN_T1_Pin */
  GPIO_InitStruct.Pin = AN_T1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(AN_T1_GPIO_Port, &GPIO_InitStruct);

  /* EXTI interrupt init*/
  HAL_NVIC_SetPriority(EXTI0_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(EXTI0_IRQn);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */
void PIDInit(PID *pid)
{
	// basic variables
	pid->Ts = 0.2f;
	pid->tempAVGThermo1 = 0.0f;
	pid->tempAVGThermo2 = 0.0f;
	pid->e0 = 0;
	pid->e1 = 0;
	pid->e2 = 0;
	pid->tempDelta = 0.2f;
	pid->outputMax = 100;
	pid->outputMin = 0;
	pid->output = 0;

	// fancy pid (overkill for process that slow)
	pid->N = 0;
	pid->A0 = ovenParameters.Kp + ovenParameters.Ki * pid->Ts;
	pid->A1 = -ovenParameters.Kp;
	pid->A0d = ovenParameters.Kd / pid->Ts;
	pid->A1d = -2.0 * ovenParameters.Kd / pid->Ts;
	pid->A2d = ovenParameters.Kd / pid->Ts;
	pid->tau = ovenParameters.Kd / (ovenParameters.Kp * pid->N); // IIR filter time constant
	pid->alpha = pid->Ts / (2 * pid->tau);
	pid->d0 = 0;
	pid->d1 = 0;
	pid->fd0 = 0;
	pid->fd1 = 0;
}


uint32_t PIDcalculation(PID *pid, uint16_t* setPoint)
{

	// PID with IIR //
	/*
	// Implemented only with one thermocouple
	pid->e2 = pid->e1;
	pid->e1 = pid->e0;
	pid->e0 = *setPoint - pid->tempAVGThermo1;

	// PI
	pid->output = pid->output + pid->A0 * pid->e0 + pid->A1 * pid->e1;

	// Filtered D
	pid->d1 = pid->d0;
	pid->d0 = pid->A0d * pid->e0 + pid->A1d * pid->e1 + pid->A2d * pid->e2;
	pid->fd1 = pid->fd0;
	pid->fd0 = ((pid->alpha)/(pid->alpha + 1)) * (pid->d0 + pid->d1) - ((pid->alpha - 1) / (pid->alpha + 1)) * pid->fd1;

	// End output
	pid->output = pid->output + pid->fd0;
	*/

	// Clasic PID //

	// Error
	pid->e0 = *setPoint - pid->tempAVGThermo1;

	float pid_P = ovenParameters.Kp * pid->e0 ;		// P

	pid->e1 += pid->e0 * pid->Ts;					// I
	float pid_I = ovenParameters.Ki * pid->e1;

	float pid_d1 = (pid->e0 - pid->e1) / pid->Ts;	// D
	float pid_D = ovenParameters.Kd * pid_d1;

	pid->output = pid_P + pid_I + pid_D;

	pid->e1 = pid->e0;


	// Limit output value
	if (pid->output >= pid->outputMax)
	{
		pid->output = pid->outputMax;
	}
	else if (pid->output <= pid->outputMin)
	{
		pid->output = pid->outputMin;
	}

	// Duty cycle to CCR2
	// 2^16 = 65536 / 100 = 655.36

	return (uint32_t)(pid->output * 655);
}

// TODO: write and read from flash, thermal runaway, over temperature
// Write variables to external flash
void WriteVarToFlash()
{
	// Buffer for saving data
	uint8_t dataToSave[50] = {0};

	// Prepare data to be saved
	/*
	memcpy(dataToSave, &ovenParameters.profileNoSelected, sizeof(uint8_t));
	memcpy(dataToSave + sizeof(uint8_t), &ovenParameters.lastUsedMode, sizeof(uint8_t));
	uint8_t intOffset = 2 * sizeof(uint8_t);
	memcpy(dataToSave + intOffset + 0 * sizeof(float), &ovenParameters.Kp, sizeof(float));
	memcpy(dataToSave + intOffset + 1 * sizeof(float), &ovenParameters.Ki, sizeof(float));
	memcpy(dataToSave + intOffset + 2 * sizeof(float), &ovenParameters.Kd, sizeof(float));
	*/

	Flash_Write(FLASH_START_ADDR, &ovenParameters.profileNoSelected, sizeof(uint8_t)); // start address, data, lenght
	Flash_Write(FLASH_START_ADDR + sizeof(uint8_t), &ovenParameters.lastUsedMode, sizeof(uint8_t));

	uint8_t data1 = 0;
	uint8_t data2 = 0;

	Flash_Read(FLASH_START_ADDR, &data1, sizeof(uint8_t));
	Flash_Read(FLASH_START_ADDR + sizeof(uint8_t), &data2, sizeof(uint8_t));

	//float Kptest = 0;
	//float Kitest = 0;

	//memcpy(&Kptest, dataToSave + 0 * sizeof(float), sizeof(float));
	//memcpy(&Kitest, dataToSave + 1 * sizeof(float), sizeof(float));


	ovenParameters.saveFlash = 0;
}

// Read variables from external flash
void ReadVarFromFlash()
{
	  uint8_t msg[20];

	  strcpy((char*)msg, "            ");

	  Flash_Read(0, msg, 12);

	  ovenParameters.saveFlash = 0;
}

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
