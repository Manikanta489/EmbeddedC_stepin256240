#include "pwm.h"
#include <util/delay.h>

void PWMInit()
{
        TCCR0A|=NON_INVERTING_FAST_PWM_MODE;
        TCCR0B|=PRESCALER_CONFIG;
        DDRD|=CONFIGURE_PWM_PIN;
}
void pwm(activity_output* TEMPERATURE)
{
    /**
     * Checks for digital value of potentiometer and generates PWM accordingly
     **/
    //if((ADCVALUE->adc_out)<201)
    if((TEMPERATURE->adc_out)<201)
    {
    OCR0A=51;
    TEMPERATURE->pwm_out=20;
    }
    else if((TEMPERATURE->adc_out)<501)
    {
        OCR0A=102;
        TEMPERATURE->pwm_out=25;
    }
    else if((TEMPERATURE->adc_out)<701)
    {
    OCR0A=179;
    TEMPERATURE->pwm_out=29;
    }
    else
    {
    OCR0A=230;
    TEMPERATURE->pwm_out=33;
    }
    _delay_ms(200);
    }