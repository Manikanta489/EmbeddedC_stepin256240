#include "pwm.h"
void pwm(activity_output* ADCVALUE)
{
    /**
     * Checks for digital value of potentiometer and generates PWM accordingly
     **/
    void PWMInit()
    {
        TCCR0A|=NON_INVERTING_FAST_PWM_MODE;
        TCCR0B|=PRESCALER_CONFIG;
        DDRD|=CONFIGURE_PWM_PIN;
    }
    PWMInit();
    if(ADCVALUE->adc_out<201)
    OCR0A=51;
    else if(ADCVALUE->adc_out<501)
    OCR0A=102;
    else if(ADCVALUE->adc_out<701)
    OCR0A=179;
    else
    OCR0A=230;
    }