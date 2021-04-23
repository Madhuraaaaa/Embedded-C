/**
 * @file act_main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <avr/io.h>
#include <util/delay.h>
/**
 * @brief Main function
 * 
 * @return int 
 */
int main(void)
{
DDRB&=~(1<<PB6);
DDRB&=~(1<<PB5);
DDRB&=~(1<<PB7);
PORTB|=(1<<PB6);
PORTB|=(1<<PB7);
    while(1)
    {
        if (!(PINB&(1<<PB6)))
        {
            if (!(PINB&(1<<PB7)))
            {
            PORTB|=(1<<PB5);
            _delay_ms(50000);
            }
            else
            {
            PORTB&=~(1<<PB5);
            _delay_ms(50000);
            }
        }
        else
        {
        PORTB&=~(1<<PB5);
        _delay_ms(5000);
        }
    }
    return 0;
}
