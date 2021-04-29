#include<avr/io.h>
#include<util/delay.h>
#include "Activity_4.h"

void setUART(uint8_t val_UBRR)
{
    UBRR0L = val_UBRR;
    UBRR0H = (val_UBRR>>8)&(0x00ff);
    UCSR0C = (1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ01);
    UCSR0B = (1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);

}
void dispOP(char outputs)
{
    while(!(UCSR0A & (1<<UDRE0)))
    {

    }
    UDR0 = outputs;
}
