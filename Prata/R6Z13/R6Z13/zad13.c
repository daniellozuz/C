#include <stdio.h>

#define ROZMIAR 8

int main(void) {
	int tablica[ROZMIAR];
	int i;
	int pot;

	for (i = 0, pot = 1; i < ROZMIAR; i++, pot *= 2) {
		tablica[i] = pot;
	}

	i = 0;
	do {
		printf("%d\n", tablica[i]);
	} while (++i < ROZMIAR);

	return 0;
}