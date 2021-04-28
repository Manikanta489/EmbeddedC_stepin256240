#ifndef __PWM_H_
#define __PWM_H_

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
#define NON_INVERTING_FAST_PWM_MODE ((1<<COM0A1)|(1<<WGM01)|(1<<WGM00))  /**< Non-inverting Fast PWM mode*/
#define PRESCALER_CONFIG ((1<<CS01)|(1<<CS00)); /**< Set Prescaler Value to 64 */
#define CONFIGURE_PWM_PIN (1<<PD6);
/**
 * Function Definitions
 */

/**
 * @brief This function configures necessary registers for PWM module
 * 
 */
void PWMInit(void);

/**
 * @brief Checks for the digital value of potentiometer and generates PWM signal
 * 
 * 
 * @param activity_output *ADC
 */
void pwm(activity_output* ADCVALUE);

#endif
