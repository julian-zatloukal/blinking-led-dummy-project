
#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRD |= (1<<0);
    while (1) 
    {
		PORTD ^= (1<<0);
		_delay_ms(500);
    }
}

