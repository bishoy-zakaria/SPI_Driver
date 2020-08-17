/*
 * SPI.c
 *
 * Created: 8/16/2020 11:36:42 PM
 * Author : 20112
 */ 

#include "SPI.h"
#define F_CPU 16000000
#include <util/delay.h>
int main(void)
{
	DIO_WritePin(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW );
    SPI_Master_Init();
	SPI_Start();
	 
	 _delay_ms(1000);
	 while (1)
	 {
	    SPI_Send_Byte('A');
		_delay_ms(1000);
		SPI_Send_Byte('B');
		_delay_ms(1000);
		
	 }
}

