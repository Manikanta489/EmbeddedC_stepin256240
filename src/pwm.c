/**
 * @file pwm.c
 * @author Manikanta Suri
 * @brief Function which generate a PWM signal on PB1 according to converted digital value
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
/**
 * Include the header files
 */

#include "pwm.h"
#include <util/delay.h>
#include <string.h>
/**
 * @brief Configure necessary registers for PWM module
 * 
 */
void PWMInit()
{
        TCCR1A|=NON_INVERTING_FAST_PWM_MODE;
        TCCR1B|=PRESCALER_CONFIG;
        DDRB|=CONFIGURE_PWM_PIN;
}
void pwm(activity_output* ADCVALUE)
{
    /**
     * Checks for digital value of potentiometer and generates PWM and sets the temperature
     **/
    if((ADCVALUE->gpio_out)==0)
    {
    OCR1A=0;
    }
    else
    {
    if((ADCVALUE->adc_out)<201)
    {
    OCR1A=D20;
    ADCVALUE->temperature=20;
    }
    else if((ADCVALUE->adc_out)<501)
    {
    OCR1A=D40;
    ADCVALUE->temperature=25;
    }
    else if((ADCVALUE->adc_out)<701)
    {
    OCR1A=D70;
    ADCVALUE->temperature=29;
    }
    else
    {
    OCR1A=D95;
    ADCVALUE->temperature=33;
    }
    }
    _delay_ms(200);
    }