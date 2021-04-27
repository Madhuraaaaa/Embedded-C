#include<avr/io.h>
#include<util/delay.h>
#include "Activity_1.h"

int detectUser(){
    init_port();
    if (!(PINB&(1<<IN_PIN1)))
        {
            if (!(PINB&(1<<IN_PIN2)))
            {
            PORTB|=(1<<OUT_PIN);
        _delay_ms(5000);
        return 1;
            }
            else
            {
            PORTB&=~(1<<OUT_PIN);
          _delay_ms(5000);
            }
        }
        else
        {
        PORTB&=~(1<<OUT_PIN);
      _delay_ms(5000);
        }
    return 0;
}

