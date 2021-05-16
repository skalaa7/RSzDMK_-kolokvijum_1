/**
* @file main.c
* @brief Glavna aplikacija projekta
* @author Andrej Skala
* @date 14-05-2021
* @version 1.0
*/
#include "../usart/usart.h"
#include "../util/util.h"
#include "../pin/pin.h"
#include "../timer0/timer0.h"

int main()
{
	int8_t str[64];
	usartInit(9600);
	while(1)
	{

	}
	return 0;
}
