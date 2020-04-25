#ifndef MAIN_H
#define MAIN_H

#include "stm32f1xx_hal.h"
#include "stm32f1xx.h"

#define LED_PIN                                GPIO_PIN_14
#define LED_GPIO_PORT                          GPIOC
#define LED_GPIO_CLK_ENABLE()                  __HAL_RCC_GPIOC_CLK_ENABLE()

#define BUT_GPIO_CLK_ENABLE()                  __HAL_RCC_GPIOB_CLK_ENABLE()

#endif // MAIN_H