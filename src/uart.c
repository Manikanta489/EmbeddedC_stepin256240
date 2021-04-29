/**
 * @file uart.c
 * @author Manikanta Suri
 * @brief Send the temperature value to serial monitor
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "uart.h"
/**
 * @brief Configuration of UARTInit Module
 * 
 */
void UARTInit()
{
    UBRR0L=UBRR;
    UBRR0H=UBRR_MSB;
    UCSR0C=SENDING_NUMBER_OF_BITS;
    UCSR0B=CONFIGURE_UCSR0B;
}
/**
 * @brief Write the character to serial monitor
 * 
 * @param data 
 */
void UARTWriteChar(char data)
{
while(TRASMITTER_EMPTY)
{
}
UDR0=data;
}
/**
 * @brief Main program of UART Module
 * 
 */
void uart()
{
    UARTWriteChar('A');
}