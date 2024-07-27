/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "fonts.h"
#include "z_displ_ILI9XXX.h"
#include "z_touch_XPT2046.h"
#include "z_flash_W25QXXX.h"
#include "MAX31855.h"

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define AN_12V_Pin GPIO_PIN_13
#define AN_12V_GPIO_Port GPIOC
#define INHIBIT_Pin GPIO_PIN_14
#define INHIBIT_GPIO_Port GPIOC
#define BUZZER_Pin GPIO_PIN_15
#define BUZZER_GPIO_Port GPIOC
#define TOUCH_INT_Pin GPIO_PIN_0
#define TOUCH_INT_GPIO_Port GPIOA
#define TOUCH_INT_EXTI_IRQn EXTI0_IRQn
#define TOUCH_CS_Pin GPIO_PIN_1
#define TOUCH_CS_GPIO_Port GPIOA
#define DISPL_LED_Pin GPIO_PIN_2
#define DISPL_LED_GPIO_Port GPIOA
#define DISPL_DC_Pin GPIO_PIN_4
#define DISPL_DC_GPIO_Port GPIOA
#define DISPL_SCK_Pin GPIO_PIN_5
#define DISPL_SCK_GPIO_Port GPIOA
#define TOUCH_MISO_Pin GPIO_PIN_6
#define TOUCH_MISO_GPIO_Port GPIOA
#define DISPL_MOSI_Pin GPIO_PIN_7
#define DISPL_MOSI_GPIO_Port GPIOA
#define DISPL_RST_Pin GPIO_PIN_0
#define DISPL_RST_GPIO_Port GPIOB
#define DISPL_CS_Pin GPIO_PIN_1
#define DISPL_CS_GPIO_Port GPIOB
#define AN_3V3_Pin GPIO_PIN_2
#define AN_3V3_GPIO_Port GPIOB
#define FLASH_SCK_Pin GPIO_PIN_10
#define FLASH_SCK_GPIO_Port GPIOB
#define TERMO1_CS_Pin GPIO_PIN_12
#define TERMO1_CS_GPIO_Port GPIOB
#define TERMO2_CS_Pin GPIO_PIN_13
#define TERMO2_CS_GPIO_Port GPIOB
#define FLASH_MISO_Pin GPIO_PIN_14
#define FLASH_MISO_GPIO_Port GPIOB
#define FLASH_MOSI_Pin GPIO_PIN_15
#define FLASH_MOSI_GPIO_Port GPIOB
#define AN_T1_Pin GPIO_PIN_8
#define AN_T1_GPIO_Port GPIOA
#define FLASH_CS_Pin GPIO_PIN_15
#define FLASH_CS_GPIO_Port GPIOA
#define AUX_OUT2_Pin GPIO_PIN_4
#define AUX_OUT2_GPIO_Port GPIOB
#define AUX_OUT1_Pin GPIO_PIN_5
#define AUX_OUT1_GPIO_Port GPIOB
#define SSR2_Pin GPIO_PIN_6
#define SSR2_GPIO_Port GPIOB
#define SSR1_Pin GPIO_PIN_7
#define SSR1_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/*/////////// CHANGE HERE ///////////*/
#define PROBE_NO				1 // Number of thermalprobes that will be used
#define SSR_NO					1 // Number of solid state relays that will be used
#define AUX_NO					0 // Number of AUX ports that will be used
#define BUZZER_EN				0 // Enable buzzer


/////////// Do not change whats follows ///////////
#define secInMin 				60
#define minInH 					60

#define STATE_INIT				0		// Starting state
#define STATE_ERROR				1		// If fault is detected - block the device
#define STATE_REFLOW			2		// Reflow mode
#define STATE_DRY				3		// Drying mode

#define THERMALRUNAWAY_ON_OFF	1
#define RUNAWAY_TEMP			1		// thermal runaway temperature delta
#define RUNAWAY_TIME			5		// thermal runaway time delta

#define MIN_BUCK_VOLTAGE		3		// Minimum allowed buck output voltage
#define MIN_IN_VOLTAGE			10		// Minimum allowed input voltage
#define R1_3V3					6800	// R1 of voltage divider for 12V
#define R2_3V3					1000	// R2 of voltage divider for 12V
#define R1_12V					100		// R1 on 3.3V measuring

#define R1_NTC					10000	// NTC resistance
#define R2_NTC					10000	// NTC R2 resistance
#define NTC_MAX_TEMP			80		// Max allowed temperature in elektronics compartment

#define KEEP_FLASH_DATA			0		// when firmware is reuploaded do you want to reset data in flash (profiles, settings...)

/*** Structure of device settings ***/
typedef struct {

	// Device values
	float tempThermo1;			// Temperature from thermocouple 1
	float tempThermo2;			// Temperature from thermocouple 2
	float tempNTC;				// Temperature from NTC on PCB
	uint16_t timeElapsed;		// Elapsed time for drying or reflowing
	uint8_t startStop;			// start/stop variable
	uint8_t initEnd;

	// Device settings
	float PID_P;				// PID P value
	float PID_I;				// PID I value
	float PID_D;				// PID D value
	uint8_t lastUsedMode;		// mode that was last used, 0 - reflow, 1 - dry
	uint8_t dualProbes; 		// 0 - disable, 1 - enable
	uint8_t dualSSRs; 			// 0 - disable, 1 - enable
	uint8_t units; 				// 0 - C, 1 - F
	uint8_t AUX1; 				// 0 - disable, 1 - enable
	uint8_t AUX2; 				// 0 - disable, 1 - enable
	uint8_t profileNoSelected; 	// current selected reflow profile
	uint8_t profileSetupStep; 	// selected reflow step in profile setup, 0 - default meni
	uint8_t pidSetupStep;		// selected pid setting, 0 - default meni, 1 - P, 2 - I, 3 - D

} OvenParameters;

extern OvenParameters ovenParameters;


/*** Structure of reflow profiles ***/
typedef struct {

	// Reflow profile 1
	uint8_t profile1Temp[5];
	uint16_t profile1Time[5];

	// Reflow profile 2
	uint8_t profile2Temp[5];
	uint16_t profile2Time[5];

	// Reflow profile 3
	uint8_t profile3Temp[5];
	uint16_t profile3Time[5];

	// Reflow profile 4
	uint8_t profile4Temp[5];
	uint16_t profile4Time[5];

	// Reflow profile 5
	uint8_t profile5Temp[5];
	uint16_t profile5Time[5];

} ReflowProfiles;

extern ReflowProfiles reflowProfiles;


/*** Structure of drying settings ***/
typedef struct {

	// Values used for drying mode
	uint8_t dryTemp;
	uint32_t dryTime;

} DryPreset;

extern DryPreset dryPreset;

typedef struct {

	uint8_t thermoCouple1Err;

	uint8_t thermoCouple2Err;

	uint8_t NTCErr;

	uint8_t ADC3V3;

	uint8_t ADC12V;

} OvenErrorCodes;

extern OvenErrorCodes ovenErrorCodes;



/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
