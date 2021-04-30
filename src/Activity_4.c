#include<avr/io.h>
#include<util/delay.h>
#include "Activity_4.h"

void setUART(uint8_t baud_rate)
{
    BAUD_RATE_SETUP;
    UBRR0H = (baud_rate>>8)&(0x00ff);
    UCSR0C = (1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ01);
    ENABLE_UART_COMMUNICATION;
}
void displayOUTPUT(char outputs)
{
    while(SERIAL_MONITOR_DATA_NOT_WRITTEN)
    {
        //DO NOTHING
    }
    UDR0 = outputs;
}
