#include <stdio.h>

#define ROZMIAR 4

void sumuj(int tab1[], int tab2[], int tab3[], int rozmiar);
void wyswietl(int tab[], int rozmiar);

int main(void) {
	int wartosci1[ROZMIAR] = { 1, 0, -4, -6 };
	int wartosci2[ROZMIAR] = { -2, 14, 5, 28 };
	int suma_wartosci[ROZMIAR];

	sumuj(wartosci1, wartosci2, suma_wartosci, ROZMIAR);

	wyswietl(wartosci1, ROZMIAR);
	wyswietl(wartosci2, ROZMIAR);
	printf("---------------------\n");
	wyswietl(suma_wartosci, ROZMIAR);

	return 0;
}

void wyswietl(int tab[], int rozmiar) {
	int i;

	for (i = 0; i < rozmiar; i++)
		printf(" %4d", tab[i]);

	printf("\n");
}

void sumuj(int tab1[], int tab2[], int suma[], int rozmiar) {
	int i;

	for (i = 0; i < rozmiar; i++)
		suma[i] = tab1[i] + tab2[i];
}