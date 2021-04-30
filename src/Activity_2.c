/**
 * @file Activity_2.c
 * @author Madhura Khedekar
 * @brief Source code for activity-2 of car seat heating application
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include <util/delay.h>
#include "Activity_2.h"

/**
 * @brief Function for ADC initialization
 * 
 */
void init_ADC()
{
    ADMUX = (1 << REFS0);
    ADCSRA = (1 << ADC_ENABLE) | (7 << ADPS0);
}

/**
 * @brief Function to obtain ADC output
 * 
 * @param n 
 * @return uint16_t 
 */
uint16_t Read_ADC(uint8_t n)
{
    ADMUX &= 0XF8;
    n = n & 0b00000111;
    ADMUX |= n;
    ADCSRA |= (1 << ADSC);
    while (ADC_INTERRUPT_NOT_OCCURRED)
        ;
    SET_ADC_INTERRUPT_FLAG;
    return (ADC);
}
