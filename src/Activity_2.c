#include <avr/io.h>
#include <util/delay.h>
#include "Activity_2.h"

uint16_t Read_ADC(uint8_t n){
    init_ADC();
    ADMUX&=0XF8;
    n=n&0b00000111;
    ADMUX|=n;
    ADCSRA|=(1<<ADSC);
    while(!(ADCSRA&(1<<ADIF)));
    ADCSRA|=(1<<ADIF);
    return (ADC);
}
