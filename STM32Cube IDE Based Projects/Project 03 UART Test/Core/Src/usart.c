

#include "usart.h"

void USART_transmit(UART_HandleTypeDef *huart, char *data )
{
	HAL_UART_Transmit(huart, (uint8_t *) data, strlen(data), 1000);
	char newline[2] = "\r\n";
	HAL_UART_Transmit(huart, (uint8_t *) newline, 2, 10);
}

void USART_receive(UART_HandleTypeDef *huart,char *data, uint8_t size )
{
	HAL_UART_Receive(huart, (uint8_t *)data, size, 5000);
}
