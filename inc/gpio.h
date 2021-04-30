#ifndef __GPIO_H_
#define __GPIO_H_

/**
 * @file gpio.h
 * @author Manikanta Suri manikantaram215@gmail.com
 * @brief Header file for gpio.c
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

/**
 * Structure defnitions
 */
typedef struct
{
    uint8_t gpio_out; /**<LED Status 1 for ON, 0 for OFF*/
    uint16_t adc_out; /**<Digital Value of the analog signal*/
    int temperature; /**< Temperature value*/ 
}activity_output;


/**
 * Macro Definitions
 */
#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */
#define LED_ON 	(0x01)			/**< LED state HIGH */
#define LED_OFF	(0x00)			/**< LED state LOW */
#define LED_ON_TIME     (1000)  /**< LED ON time in milli seconds  */
#define LED_OFF_TIME    (500)   /**< LED OFF time in milli seconds */
#define LED_PORT (PORTB)    /**< LED Port Number */
#define LED_PIN  (PORTB0)   /**< LED Pin number  */
#define CONFIGURE_PB0 (1 << DDB0);  /**< Configure Pin PB0 as output as Led is connected to PB0 Pin */
#define CONFIGURE_PUSH_BUTTONS ((1<<DDD0)|(1<<DDD4)); /**< Configure Pin PD0, PD4 as inputs as push buttons are connected to it */
#define PD0_PD4_LOGIC_HIGH ((1<<DDD0)|(1<<DDD4)); /**< Send logic high signal to PD0, PD4 */
#define CHECK_ACTIVATION_OF_PUSH_BUTTONS (!(PIND&((1<<DDD0)|(1<<DDD4))))
/**
 * Function Prototypes
 */

/**
 * @brief Change the state of the LED Pin according to the value of state
 * 
 * @param state Pin level to which the LED Pin should be set
 */
void change_led_state(uint8_t state);
/**
 * @brief Configure port pins
 */

void GPIOInit(void);
/**
 * 
 * @brief Status of LED
 * 
 *
 */
void gpio(activity_output*);
#endif