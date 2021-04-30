/**
 * @file Activity_2.h
 * @author Madhura Khedekar
 * @brief Header file for activity-2 of car seat heating application
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY_2_H_INCLUDED
#define ACTIVITY_2_H_INCLUDED

/**
 * @brief Defination for enabling ADC
 * 
 */
#define ADC_ENABLE (ADEN)

/**
 * @brief Checking for ADC interrupt occurrence
 * 
 */
#define ADC_INTERRUPT_NOT_OCCURRED !(ADCSRA & (1 << ADIF))

/**
 * @brief Setting ADC interrupt flag
 * 
 */
#define SET_ADC_INTERRUPT_FLAG ADCSRA |= (1 << ADIF);

/**
 * @brief Function call
 * 
 */
void init_ADC();
uint16_t Read_ADC(uint8_t n);

#endif // ACTIVITY_2_H_INCLUDED