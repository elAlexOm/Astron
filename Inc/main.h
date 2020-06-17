/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f7xx_hal.h"
#include "stm32f7xx_hal.h"

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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define BOLO_VTEMP_M_Pin GPIO_PIN_1
#define BOLO_VTEMP_M_GPIO_Port GPIOA
#define DIO1_Pin GPIO_PIN_7
#define DIO1_GPIO_Port GPIOE
#define DIO2_Pin GPIO_PIN_8
#define DIO2_GPIO_Port GPIOE
#define DIO3_Pin GPIO_PIN_9
#define DIO3_GPIO_Port GPIOE
#define DIO4_Pin GPIO_PIN_10
#define DIO4_GPIO_Port GPIOE
#define DIO5_Pin GPIO_PIN_11
#define DIO5_GPIO_Port GPIOE
#define DIO6_Pin GPIO_PIN_12
#define DIO6_GPIO_Port GPIOE
#define DIO7_Pin GPIO_PIN_13
#define DIO7_GPIO_Port GPIOE
#define DIO0_Pin GPIO_PIN_11
#define DIO0_GPIO_Port GPIOC
#define USB_RST_Pin GPIO_PIN_9
#define USB_RST_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

#define USB_PHY_RESET_ON()                { USB_RST_GPIO_Port->BSRR = USB_RST_Pin; }
#define USB_PHY_RESET_OFF()               { USB_RST_GPIO_Port->BSRR = USB_RST_Pin << 16;; }

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
