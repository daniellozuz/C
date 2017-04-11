#include <stdio.h>

#define ROZMIAR 7

int najw_i(int tab[], int rozmiar);

int main(void) {
	int tab[ROZMIAR] = { 13, 7, 2, 5, 2, 11, 1 };

	printf("Najwieksza wartosc w tablicy znajduje sie pod indeksem %d\n", najw_i(tab, ROZMIAR));

	return 0;
}

int najw_i(int tab[], int rozmiar) {
	int i = 0;

	int najwiekszy_indeks = i;

	for (i = 0; i < rozmiar; i++) {
		if (tab[i] > tab[najwiekszy_indeks])
			najwiekszy_indeks = i;
	}

	return najwiekszy_indeks;
}