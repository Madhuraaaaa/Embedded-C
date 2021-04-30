/**
 * @file Activity_4.h
 * @author Madhura Khedekar
 * @brief Header file for activity-4 of car seat heating application
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY_4_H_INCLUDED
#define ACTIVITY_4_H_INCLUDED

/**
 * @brief Defination for UART communication initialization
 * 
 */
#define ENABLE_UART_COMMUNICATION UCSR0B = (1 << RXEN0) | (1 << TXEN0) | (1 << RXCIE0) | (1 << TXCIE0);

/**
 * @brief Defination of conditions for serial data monitor
 * 
 */
#define SERIAL_MONITOR_DATA_NOT_WRITTEN !(UCSR0A & (1 << UDRE0))

/**
 * @brief Defination for baud rate set-up
 * 
 */
#define BAUD_RATE_SETUP UBRR0L = baud_rate;

/**
 * @brief Function call
 * 
 * @param baud_rate 
 */
void setUART(uint8_t baud_rate);
void displayOUTPUT(char outputs);

#endif // ACTIVITY_4_H_INCLUDED
