#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROZMIAR 1000

void generuj(int * tab, int rozmiar);
void zlicz(int * tab, int * ilosci, int rozmiar);
void pokaz(int * ilosci);

int main(void) {
	int liczby[ROZMIAR];
	int ilosci[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	srand((unsigned int)time(0));

	generuj(liczby, ROZMIAR);

	zlicz(liczby, ilosci, ROZMIAR);

	pokaz(ilosci);

	return 0;
}

void generuj(int * tab, int rozmiar) {
	for (int i = 0; i < rozmiar; i++)
		tab[i] = rand() % 10 + 1;
}

void zlicz(int * tab, int * ilosci, int rozmiar) {
	for (int i = 0; i < rozmiar; i++)
		ilosci[tab[i] - 1]++;
}

void pokaz(int * ilosci) {
	for (int i = 0; i < 10; i++)
		printf("%d - %d\n", i + 1, ilosci[i]);
}