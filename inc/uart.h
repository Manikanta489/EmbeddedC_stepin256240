#ifndef __UART_H_
#define __UART_H_

/**
 * @file uart.h
 * @author Manikanta Suri manikantaram215@gmail.com
 * @brief When the LED is ON, This function displays the temperature value to serial monitor
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * Include the necessary header files
 */

#include <avr/io.h>
#include "gpio.h"

/**
 * Macro Definitions
 */
#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */
#define UBRR 103  /**< Baud Rate Configuration*/
#define UBRR_MSB ((UBRR>>8) & (0x00ff)) /**< UBRR0H configuration for Baud Rate*/
#define SENDING_NUMBER_OF_BITS ((1<<UCSZ01)|(1<<UCSZ00)) /**< No of bits transmission for UART protocol configuration*/
#define CONFIGURE_UCSR0B ((1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0)) /**< Configure UCSR0B register*/
#define TRASMITTER_EMPTY (!(UCSR0A&(1<<UDRE0)))
/**
 * Function Prototypes
 */

/**
 * @brief This function configures necessary registers for UART module
 * 
 */
void UARTInit(void);

/**
 * @brief Main program for UART
 * 
 * 
 * @param activity_output 
 */
void uart(activity_output*);
/**
 * @brief Write the data to transmitter UDR0 regisrer
 * 
 * @param data;message to be displayed in the serial monitor
 */
void UARTWriteTemperature(char data);

#endif
