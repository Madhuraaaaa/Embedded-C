#include<avr/io.h>
#include<util/delay.h>
#include "Activity_3.h"


void PWMset(void){
    TCCR1A|=(1<<COM1A1)|(1<<WGM10)|(1<<WGM11);
    TCCR1B|=(1<<CS11)|(1<<CS10)|(1<<WGM12);
    DDRB|=(1<<PB1);
}

char OutPWM (uint16_t temp_value)
{
    char temperature;
    if((temp_value>=0) && (temp_value<=200)){

        OCR1A = 205; //20% duty cycle
        temperature = 20;
        _delay_ms(50);
    }
    else if((temp_value>=201) && (temp_value<=500)){

        OCR1A = 410; //40% duty cycle
        temperature = 25;
       _delay_ms(50);
    }
    else if((temp_value>=501) && (temp_value<=700)){

        OCR1A = 717;//70% duty cycle
        temperature = 29;
        _delay_ms(50);
    }
    else if((temp_value>=701) && (temp_value<=1024)){

        OCR1A = 973; //95% duty cycle
        temperature = 33;
        _delay_ms(50);
    }
    else{
        OCR1A = 0; //0% output
        temperature = 0;
    }
    return temperature;
}
