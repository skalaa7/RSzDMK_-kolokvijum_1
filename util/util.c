/**
* @file util.h
* @brief Aplikacija koja definise pomocne funkcije za rad s nizovima
* @author Andrej Skala
* @date 14-05-2021
* @version 1.0
*/
#include <stdint.h>
#include "util.h"

/// Makro za pokazivanje tacnosti funkcije Check
#define TRUE 1
/// Makro za pokazivanje tacnosti funkcije Check
#define FALSE 0
/// Makro za biranje moda Sort funkcije
#define UP 1
/// Makro za biranje moda Sort funkcije
#define DOWN 0
/****************************************************************************
**************/
void Sort(int16_t *array, int16_t array_length, int8_t mode)
{
    for(uint8_t i; i < array_length-1; i++)
    {
    	for(uint8_t j; j < array_length-i-1; j++)
    	{
    		if(array[j]>array[j+1])
    		    {
    		    	array[j] ^= array[j+1];
    		    	array[j+1] ^= array[j];
    		    	array[j] ^= array[j+1];
    		    }
    	}

    }
    if(mode)
    {
    	for (int8_t k = 0; k < array_length/2; k++)
    	{
    		array[k] ^= array[array_length - 1 - k];
    				array[array_length - 1 - k] ^= array[k];
    				array[k] ^= array[array_length - 1 - k];
    	}
    }
}
/****************************************************************************
**************/
int8_t Check(int16_t *array,int16_t array_length)
{
	double r=array[1]/array[0];
	int8_t check=TRUE;

	for(uint8_t i = 2; i < array_length; i++)
	{
		if(array[i] / array[i - 1] != r)
		{
			check=FALSE;
		}
	}
	return check;
}
