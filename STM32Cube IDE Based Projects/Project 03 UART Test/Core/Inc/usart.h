#ifndef USART_H
#define USART_H
#include "main.h"
#include<inttypes.h>

void USART_transmit(UART_HandleTypeDef *huart, char *data );
void USART_receive(UART_HandleTypeDef *huart, char *data, uint8_t size );

#endif
