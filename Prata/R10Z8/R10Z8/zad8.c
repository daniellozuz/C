#include <stdio.h>

#define ROZMIAR 7

void kopiuj_czesc(int tab[], int kopia[], int rozmiar);
void wyswietl(int tab[], int rozmiar);

int main(void) {
	int wartosci[ROZMIAR] = { 1, 2, 3, 4, 5, 6, 7 };
	int kopia[3];

	printf("TABLICA WARTOSCI:\n");
	wyswietl(wartosci, ROZMIAR);
	
	kopiuj_czesc(wartosci + 2, kopia, 3);

	printf("TABLICA KOPIA:\n");
	wyswietl(kopia, 3);

	return 0;
}

void kopiuj_czesc(int tab[], int kopia[], int rozmiar) {
	int i;

	for (i = 0; i < rozmiar; i++)
		kopia[i] = tab[i];
}

void wyswietl(int tab[], int rozmiar) {
	int i;

	for (i = 0; i < rozmiar; i++)
		printf("%4d ", tab[i]);

	printf("\n");
}