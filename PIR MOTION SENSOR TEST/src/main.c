#include "main.h"

void LED_Init();

int main(void) {
  HAL_Init();
  LED_Init();

  while (1)
  {
    
    if (HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_9)==1)
    {
        HAL_GPIO_WritePin(GPIOC, LED_PIN,0);
    }
    else
    {
      HAL_GPIO_WritePin(GPIOC, LED_PIN,1);
    }
    
    
  }
}

void LED_Init() {
  LED_GPIO_CLK_ENABLE();
  BUT_GPIO_CLK_ENABLE();
  GPIO_InitTypeDef GPIO_InitStruct;
  GPIO_InitStruct.Pin = LED_PIN;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
 GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  HAL_GPIO_Init(LED_GPIO_PORT, &GPIO_InitStruct);
}

void SysTick_Handler(void) {
  HAL_IncTick();
}