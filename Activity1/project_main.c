/**
 * @file project_main.c
 * @author Manikanta Suri
 * @brief Project to Blink an LED when two switches are On
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "project_config.h"

#include "user_utils.h"
#include "blinky.h"

/**
 * @brief Initialize all the Peripherals and pin configurations
 * 
 */
void peripheral_init(void)
{
	/* Configure LED Pin */
	DDRB |= (1 << DDB0);
	/* Configure the switches*/
	DDRD&=~(1<<DDD0)|(1<<DDD4);
	/* logic high to ports PD0, PD4 */
	PORTD|=(1<<DDD0)|(1<<DDD4);
}

void change_led_state(uint8_t state)
{
	LED_PORT = (state << LED_PIN);
}


/**
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 * @note PORTB0 is in sink config. i.e when pin is Low, the LED will turn OFF
 * @note PORTB0 is in sink config. i.e when pin is High, the LED will turn ON
 */
int main(void)
{
	/* Initialize Peripherals */
	peripheral_init();

	while(1)
	{
		if(!(PIND&((1<<DDD0)|(1<<DDD4))))
        change_led_state(LED_ON);
		else
        change_led_state(LED_OFF);
	}
	return 0;
}
