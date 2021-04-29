#include "gpio.h"
#include "adc.h"
#include "pwm.h"
#include "uart.h"
#include<stdlib.h>
int main()
{
    activity_output *app=(activity_output*)malloc(sizeof(activity_output));
    GPIOInit();
    PWMInit();
    //UARTInit();
    while(1)
    {
        gpio(app);
        adc(app);
        pwm(app);
        //uart();
    }
    return 0;
}
