#include "gpio.h"
#include "adc.h"
#include "pwm.h"
#include<stdlib.h>
int main()
{
    activity_output *app=(activity_output*)malloc(sizeof(activity_output));
    while(1)
    {
        app->gpio_out=gpio();
        adc(app);
        pwm(app);
    }
    return 0;
}
