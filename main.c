/**
 * @file main.c
 * @author Madhura (mdhuk8719@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <avr/io.h>
#include <util/delay.h>
#include "inc/Activity_1.h"
#include "inc/Activity_2.h"
#include "Activity_2.c"
#include "Activity_1.c"

/**
 * @brief Main function
 * 
 * @return int 
 */

int main(void)
{
    while(1)
    {
        uint16_t var=0;
        //ACTIVITY-1
        detectUser();  
        //ACTIVITY-2         
        if (detectUser()==1)
        {
            var=Read_ADC(0);
        }
    }
    return 0;
}
