#ifndef ACTIVITY_3_H_INCLUDED
#define ACTIVITY_3_H_INCLUDED
#define SET_PWM_OUTPUT_PIN DDRB|=(1<<PB1);
void PWMset();
char PWM_Reading(uint16_t temp_value);

#endif // ACTIVITY_3_H_INCLUDED
