#include<avr/io.h>
#include<util/delay.h>
#include "Activity_1.h"

void init_port(void){
    DDRB&=~(1<<IN_PIN1);
    DDRB|=(1<<OUT_PIN);
    DDRB&=~(1<<IN_PIN2);
    PORTB|=(1<<IN_PIN1);
    PORTB|=(1<<IN_PIN2);
}
int detectUser(){
    if (BUTTON_ON)
        {
            if (HEATER_ON)
            {
                LED_SET;
                _delay_ms(50000);
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

