#include "gpio.h"
#include "adc.h"
#include "pwm.h"
#include "uart.h"
#include<stdlib.h>
int main()
{
    activity_output *app=(activity_output*)malloc(sizeof(activity_output));
    /** Initiate the registers for GPIO,PWM,UART
     */
    GPIOInit();
    PWMInit();
    UARTInit();
    while(1)
    {
        /** Execution of SeatHeating
         */ 
        gpio(app); // Call GPIO Program which activates the LED
        adc(app); // Call ADC program which converts the analog signal from potentiometer to a digital value
        pwm(app); // Call PWM program which generates PWM signal according to the digital value
        uart(app); // Call UART module which sends the temperature value to serial monitor
    }
    return 0;
}
