/**
* @file timer0.h
* @brief Aplikacija koja deklarise pomocne funkcije za rad s tajmerom0
* @author Andrej Skala
* @date 14-05-2021
* @version 1.0
*/

#ifndef TIMER0_H_
#define TIMER0_H_

#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdint.h>

/**
* timer0Delay - Funkcija koja implementira pauzu u broju milisekundi koji
je prosledjen kao parametar
* @param delay_length - ulaz tipa uint64_t - Duzina pauze u milisekundama
* @return Povratna vrednost je tipa uint64_t i ima vrednost broja milisekundi proteklih od pocetka aplikacije do trenutka izlaska iz funkcije
*/
uint64_t timer0Delay(unsigned long delay_length);
/**
* timer0InteruptInit - Funkcija koja inicijalizuje timer 0 tako da pravi
prekide svake milisekunde
* @return Nema povratnu vrednost
*/
void timer0InteruptInit();
/**
* timer0PassMs - Funkcija koja vraca broj milisekundi od pocetka rada programa
* @return Povratna vrednost je tipa uint64_t i ima vrednost broja milisekundi proteklih od pocetka aplikacije do trenutka izlaska iz funkcije
*/
uint64_t timer0PassMs();

#endif /* TIMER0_H_ */
