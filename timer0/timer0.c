/**
* @file timer0.c
* @brief Aplikacija koja definise pomocne funkcije za rad s tajmerom0
* @author Andrej Skala
* @date 14-05-2021
* @version 1.0
*/
#include "timer0.h"

volatile uint64_t ms = 0; //promenjliva koja se uvecava svake milisekunde

void timer0InteruptInit()
{
    // Inicijalizacija tajmera 0 tako da perioda prekida bude 1ms
	TCCR0A = 0x02;
    TCCR0B = 0x03;
    OCR0A = 249;
    TIMSK0 = 0x02;

    // Podesavanje globalne dozvole prekida
    sei();
}
/****************************************************************************
**************/
/**
* ISR - prekidna rutina tajmera 0 u modu CTC
*/
ISR(TIMER0_COMPA_vect)
{
// Inkrementovanje vremena koje su prosle od pokretanja
	ms++;

}
/****************************************************************************
**************/
uint64_t timer0Delay(unsigned long delay_length)
{
    uint64_t t0; // Trenutak pocevsi od kog se racuna pauza
    // Implementacija pauze
    t0 = ms;
    while ((ms - t0) < delay_length)
    ; // Pauza delay_length milisekundi
    return ms;
}
/****************************************************************************
**************/
uint64_t timer0PassMs()
{
	return ms;
}
