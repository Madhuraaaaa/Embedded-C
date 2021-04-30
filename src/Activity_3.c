#include<avr/io.h>
#include<util/delay.h>
#include "Activity_3.h"


void PWMset(void){

    //FOR INITIALIZATION OF TIMER
    TCCR1A|=(1<<COM1A1)|(1<<WGM10)|(1<<WGM11);
    //8-BIT PRESCALER
    TCCR1B|=(1<<CS11)|(1<<CS10)|(1<<WGM12); 
    SET_PWM_OUTPUT_PIN;
}

char PWM_Reading(uint16_t temp_value)
{
    char temperature_op=0;
    if((temp_value>=0) && (temp_value<=200)){
        //FOR 20% DUTY CYCLE PWM SIGNAL
        OCR1A = 205; 
        temperature_op = 20;
        _delay_ms(30);
    }
    else if((temp_value>=201) && (temp_value<=500)){
        //FOR 40% DUTY CYCLE PWM SIGNAL
        OCR1A = 410; 
        temperature_op = 25;
        _delay_ms(30);
    }
    else if((temp_value>=501) && (temp_value<=700)){
        //FOR 70% DUTY CYCLE PWM SIGNAL
        OCR1A = 717;
        temperature_op = 29;
        _delay_ms(30);
    }
    else if((temp_value>=701) && (temp_value<=1024)){
        //FOR 95% DUTY CYCLE PWM SIGNAL
        OCR1A = 973;
        temperature_op = 33;
        _delay_ms(30);
    }
    return temperature_op;
}
