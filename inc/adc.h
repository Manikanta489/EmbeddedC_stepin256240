#ifndef __ADC_H_
#define __ADC_H_

/**
 * @file adc.h
 * @author Manikanta Suri manikantaram215@gmail.com
 * @brief Header file for adc.c
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
#define CONFIGURE_RESOLUTION (1<<REFS0);  /**< Configure Resolution of 1024 bits for ADC*/
#define ENABLE_ADC (1<<ADEN); /**< Enable ADC Module*/
#define START_CONVERSION (1<<ADSC); /**< Start The ADC Module */
#define WAIT_FOR_CONVERSION (!((ADCSRA)&(1<<ADIF))) /**< Wait until conversion gets completed */
#define CONVERSION_COMPLETE (1<<ADIF) /**< Conversion complete Interrupt */
/**
 * Function Definitions
 */

/**
 * @brief This function configures necessary registers for ADC Module
 * 
 */
uint16_t ReadADC(uint8_t ch);
/**
 * @brief Checks for the LED and initiates the ADC module
 * 
 * 
 * @param activity_output *ADC
 */
void adc(activity_output* ADCVALUE);

#endif