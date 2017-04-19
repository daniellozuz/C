#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROZMIAR 100

void generuj(int * tab, int rozmiar);
void wyswietl(int const * tab, int rozmiar);
void sortuj(int const * tab, int rozmiar);

int main(void) {
	int liczby[ROZMIAR];

	srand((unsigned int)time(0));

	puts("Wygenerowane liczby:");
	generuj(liczby, ROZMIAR);
	wyswietl(liczby, ROZMIAR);

	puts("Posortowane liczby:");
	sortuj(liczby, ROZMIAR);
	wyswietl(liczby, ROZMIAR);

	return 0;
}

void generuj(int * tab, int rozmiar) {
	for (int i = 0; i < rozmiar; i++)
		tab[i] = rand() % 10 + 1;
}

void sortuj(int * tab, int rozmiar) {
	for (int i = 0; i < rozmiar - 1; i++) {
		for (int j = 1 + i; j < rozmiar; j++) {
			if (tab[i] > tab[j]) {
				int temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
		}
	}
}

void wyswietl(int const * tab, int rozmiar) {
	for (int i = 0; i < rozmiar; i++) {
		printf("%3d ", tab[i]);

		if (i % 10 == 9)
			putchar('\n');
	}
}