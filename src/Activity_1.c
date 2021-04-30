/**
 * @file Activity_1.c
 * @author Madhura Khedekar
 * @brief Source code for activity-1 of car seat heating application
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include <util/delay.h>
#include "Activity_1.h"

/**
 * @brief Function for port initialization
 * 
 */
void init_port(void)
{
    DDRB &=~(1 << IN_PIN1);
    DDRB |= (1 << OUT_PIN);
    DDRB &=~(1 << IN_PIN2);
    PORTB |= (1 << IN_PIN1);
    PORTB |= (1 << IN_PIN2);
}

/**
 * @brief Function to check whether heater sensing is on or off
 * 
 * @return int 
 */
int detectUser()
{
    if (BUTTON_ON)
    {
        if (HEATER_ON)
        {
            LED_SET;
            _delay_ms(5000);
            return 1;
        }
        else
        {
            LED_CLEAR;
            _delay_ms(5000);
        }
    }
    else
    {
        LED_CLEAR;
        _delay_ms(5000);
    }
    return 0;
}
