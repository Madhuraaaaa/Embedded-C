#ifndef ACTIVITY_1_H_INCLUDED
#define ACTIVITY_1_H_INCLUDED

#define LED_PORT (PORTB)
#define IN_PIN1 (PORTB6)
#define IN_PIN2 (PORTB7)
#define OUT_PIN (PORTB5)

void init_port(void){
    DDRB&=~(1<<IN_PIN1);
    DDRB&=~(1<<OUT_PIN);
    DDRB&=~(1<<IN_PIN2);
    PORTB|=(1<<IN_PIN1);
    PORTB|=(1<<IN_PIN2);
}

#endif // ACTIVITY_1_H_INCLUDED
