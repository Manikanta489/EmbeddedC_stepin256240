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
        gpio(app);
        adc(app);
        pwm(app);
        uart(app);
    }
    return 0;
}
