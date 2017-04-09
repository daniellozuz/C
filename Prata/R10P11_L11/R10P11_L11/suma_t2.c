#include <stdio.h>

#define ROZMIAR 10

long sumujw(int * poczatek, int * koniec);

int main(void) {
	int kulki[ROZMIAR] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20 };
	long wynik;

	wynik = sumujw(kulki, kulki + ROZMIAR);

	printf("Calkowita liczba kulek wynosi %ld.\n", wynik);

	return 0;
}

long sumujw(int *poczatek, int * koniec) {
	long suma = 0;

	while (poczatek < koniec) {
		suma += *poczatek;
		poczatek++;
	}

	return suma;
}