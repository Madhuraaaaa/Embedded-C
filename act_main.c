#include "avr/io.h"
#include "util/delay.h"
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
