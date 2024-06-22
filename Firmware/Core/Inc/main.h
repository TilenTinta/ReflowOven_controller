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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

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
#define DISPL_DC_Pin GPIO_PIN_3
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

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
