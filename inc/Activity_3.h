/**
 * @file Activity_3.h
 * @author Madhura Khedekar 
 * @brief Header file for activity-3 of car seat heating application
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY_3_H_INCLUDED
#define ACTIVITY_3_H_INCLUDED

/**
 * @brief Defination for initialization of PWM output pin
 * 
 */
#define SET_PWM_OUTPUT_PIN DDRB |= (1 << PB1);

/**
 * @brief Function
 * 
 */
void PWMset();
char PWM_Reading(uint16_t temp_value);

#endif // ACTIVITY_3_H_INCLUDED
