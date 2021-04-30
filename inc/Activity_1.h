#ifndef ACTIVITY_1_H_INCLUDED
#define ACTIVITY_1_H_INCLUDED

#define LED_PORT (PORTB)
#define IN_PIN1 (PORTB6)
#define IN_PIN2 (PORTB7)
#define OUT_PIN (PORTB5)
#define BUTTON_ON !(PINB&(1<<IN_PIN1))
#define HEATER_ON !(PINB&(1<<IN_PIN2))
#define LED_SET PORTB|=(1<<OUT_PIN);
#define LED_CLEAR PORTB&=~(1<<OUT_PIN);

void init_port();
int detectUser();

#endif // ACTIVITY_1_H_INCLUDED
