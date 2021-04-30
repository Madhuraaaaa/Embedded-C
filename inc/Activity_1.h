/**
 * @file Activity_1.h
 * @author Madhura Khedekar
 * @brief Header file for activity-1 of seat heating application
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY_1_H_INCLUDED
#define ACTIVITY_1_H_INCLUDED
/**
 * @brief Input output pin/port defination using MACROS
 * 
 */
#define LED_PORT (PORTB)
#define IN_PIN1 (PORTB6)
#define IN_PIN2 (PORTB7)
#define OUT_PIN (PORTB5)

/**
 * @brief Defination of user actions
 * 
 */
#define BUTTON_ON !(PINB & (1 << IN_PIN1))
#define HEATER_ON !(PINB & (1 << IN_PIN2))

/**
 * @brief Defination for set/clear operation of LED 
 * 
 */
#define LED_SET PORTB |= (1 << OUT_PIN);
#define LED_CLEAR PORTB &= ~(1 << OUT_PIN);

/**
 * @brief Function call
 * 
 */
void init_port();
int detectUser();

#endif // ACTIVITY_1_H_INCLUDED
