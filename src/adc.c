/**
 * @file adc.c
 * @author Manikanta Suri
 * @brief Digital value of a Analog signal
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "adc.h"
/**
 * @brief Configure the ADC Module
 * 
 */
void ADCInit()
{
ADMUX|=CONFIGURE_RESOLUTION;
ADCSRA|=ENABLE_ADC;
}
/**
 * @brief Converts the analog signal in the channel ch to digital value
 * 
 * @param ch 
 * @return uint16_t 
 */
uint16_t ReadADC(uint8_t ch)
{
    ADMUX&=0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;
    ADCSRA|=START_CONVERSION;
    while(WAIT_FOR_CONVERSION==1);
    ADCSRA|=CONVERSION_COMPLETE;
    return(ADC);
}

void adc(activity_output* ADCVALUE)
{
    /**
     * Checks for status of LED and initiates ADC
     * Stores the result in adc_out member in the activity_outputs
     **/
    if(ADCVALUE->gpio_out==1)
    {
    ADCInit();
    uint16_t temp=0;
    temp=ReadADC(3);
    ADCVALUE->adc_out=temp;
    }
}