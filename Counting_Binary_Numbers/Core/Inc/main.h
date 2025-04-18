/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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
#define PAUSE_PLAY_Pin GPIO_PIN_1
#define PAUSE_PLAY_GPIO_Port GPIOA
#define PAUSE_PLAY_EXTI_IRQn EXTI1_IRQn
#define UP_Pin GPIO_PIN_3
#define UP_GPIO_Port GPIOA
#define UP_EXTI_IRQn EXTI3_IRQn
#define DOWN_Pin GPIO_PIN_4
#define DOWN_GPIO_Port GPIOA
#define DOWN_EXTI_IRQn EXTI4_IRQn

/* USER CODE BEGIN Private defines */
extern volatile int sayac; // Sistemdeki mevcut numarayı takip eden değişken
extern volatile int time; // Zamanı takip eden değişken
extern volatile unsigned char mask;
extern volatile uint8_t function_running; // İşlevin çalışma durumu: 0 = durdu, 1 = UP çalışıyor, 2 = DOWN çalışıyor
extern volatile uint8_t paused_mode; // Durdurulan modu saklamak için

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
