/*
 * SPI_SLAVE.c
 *
 * Created: 8/17/2020 12:19:40 AM
 * Author : 20112
 */ 

#include "SPI.h"
#include "LCD.h"
#define F_CPU 16000000
#include <util/delay.h>
int main(void)
{
	uint8 data =0;
	DIO_SetPinDir(DIO_PORTC,DIO_PIN0,DIO_PIN_OUTPUT);
	DIO_SetPinDir(DIO_PORTC,DIO_PIN1,DIO_PIN_OUTPUT);
	//LCD_Init();
    SPI_Slave_Init();
	SPI_Start();
	_delay_ms(1000);
	while (1)
	{
		data=SPI_Recieve_Byte();
	  if(data == 'A')
	  {
		DIO_WritePin(DIO_PORTC,DIO_PIN0,DIO_PIN_HIGH);
	  }
	  if(data == 'B')
	  {
		  DIO_WritePin(DIO_PORTC,DIO_PIN1,DIO_PIN_HIGH);
	  }
	  
	}
	
	
   
}

