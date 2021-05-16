/**
* @file util.h
* @brief Aplikacija koja deklarise pomocne funkcije za rad s nizovima
* @author Andrej Skala
* @date 14-05-2021
* @version 1.0
*/
#ifndef UTIL_H_
#define UTIL_H_

#include <avr/io.h>
#include <stdint.h>

/**
* Sort - Funkcija koja sortira niz array dužine array_length, na način
odabran parametrom mode.
* @param array - ulaz tipa uint16_t * - Pokazivac na pocetak niza
* @param array_length - ulaz tipa uint16_t - Predstavlja duzinu niza
* @param mode - ulaz tipa int8_t - Predstavlja nacin na koji se sortira niz (UP ili DOWN)
* @return Nema povratnu vrednost
*/
void Sort(int16_t *array, int16_t array_length, int8_t mode);

/**
* Check - Funkcija koja proverava da li je niz geometrijski
* @param array - ulaz tipa uint16_t * - Pokazivac na pocetak niza
* @param array_length - ulaz tipa uint16_t - Predstavlja duzinu niza
* @return vrednosti TRUE ili FALSE, definisane kao makro
konstante za vrednosti 1 i 0.
*/
int8_t Check(int16_t *array,int16_t array_length);

#endif /* UTIL_H_ */
