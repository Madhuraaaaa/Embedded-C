/**
 * @file Activity_4.c
 * @author Madhura Khedekar
 * @brief Source code for activity-4 of car seat heating application
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include <util/delay.h>
#include "Activity_4.h"

/**
 * @brief Function for UART initialization
 * 
 * @param baud_rate 
 */
void setUART(uint8_t baud_rate)
{
    BAUD_RATE_SETUP;
    UBRR0H = (baud_rate >> 8) & (0x00ff);
    UCSR0C = (1 << UMSEL00) | (1 << UCSZ01) | (1 << UCSZ01);
    ENABLE_UART_COMMUNICATION;
}

/**
 * @brief Function to display output data on serial monitor
 * 
 * @param outputs 
 */
void displayOUTPUT(char outputs)
{
    while (SERIAL_MONITOR_DATA_NOT_WRITTEN)
    {
        //DO NOTHING
    }
    UDR0 = outputs;
}
