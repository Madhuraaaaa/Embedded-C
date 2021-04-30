/**
 * @file main.c
 * @author Madhura
 * @brief Main function file for car seat heating application
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <avr/io.h>
#include <util/delay.h>
#include "inc/Activity_1.h"
#include "inc/Activity_2.h"
#include "inc/Activity_3.h"
#include "inc/Activity_4.h"
#define val_ADC 0

/**
 * @brief Main function for seat heating application
 * 
 * @return int 
 */

int main(void)
{
    init_port();
    init_ADC();
    PWMset();
    setUART(103);
    while (1)
    {
        uint16_t var = 0;
        char temperature_op;

        //ACTIVITY-1
        detectUser(); //DETECTS THE PRESENCE OF USER IN A CAR

        //ACTIVITY-2, 3 & 4
        if (detectUser() == 1)
        {
            var = Read_ADC(val_ADC);           //READS PWM OUTPUT
            temperature_op = PWM_Reading(var); //CALCULATES TEMPERATURE VALUE
            displayOUTPUT(temperature_op);     //DISPLAYS TEMPERATURE OUTPUT
        }
    }
    return 0;
}
