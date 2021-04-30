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
    UCSR0B|=CONFIGURE_UCSR0B;
    UCSR0C=SENDING_NUMBER_OF_BITS;
}
/**
 * @brief Write the character to serial monitor
 * 
 * @param data 
 */
void UARTWriteTemperature(char temperature)
{
    /** Wait until Transmitter is empty*/
while(TRASMITTER_EMPTY)
{
}
UDR0=temperature;
}
/**
 * @brief Main program of UART Module
 * 
 */
void uart(activity_output* UART)
{
    /** Check if LED is on*/
    if(UART->gpio_out==1)
    UARTWriteTemperature(UART->temperature);

}