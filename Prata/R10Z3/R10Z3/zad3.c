#include <stdio.h>

#define ROZMIAR 7

int najw(int tab[], int rozmiar);

int main(void) {
	int tab[ROZMIAR] = { 1, 7, 2, 5, 2, 11, 1 };

	printf("Najwieksza wartosc w tablicy to %d\n", najw(tab, ROZMIAR));

	return 0;
}

int najw(int tab[], int rozmiar) {
	int i = 0;

	int najwieksza = tab[i];

	for (i = 0; i < rozmiar; i++) {
		if (tab[i] > najwieksza)
			najwieksza = tab[i];
	}

	return najwieksza;
}