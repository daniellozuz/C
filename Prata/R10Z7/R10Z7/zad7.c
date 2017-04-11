#include <stdio.h>

#define WIERSZE 2
#define KOLUMNY 3

void kopiuj(double tab[], double kopia[], int rozmiar);
void wyswietl(double tab[], int rozmiar);

int main(void) {
	int i;
	double wartosci[WIERSZE][KOLUMNY] = { { 1.1, 2.2, 3.3 }, { 4.4, 5.5, 6.6 } };
	double kopia[WIERSZE][KOLUMNY];

	printf("TABLICA WARTOSCI:\n");
	for (i = 0; i < WIERSZE; i++) {
		wyswietl(wartosci[i], KOLUMNY);
	}

	for (i = 0; i < WIERSZE; i++) {
		kopiuj(wartosci[i], kopia[i], KOLUMNY);
	}

	printf("\nTABLICA KOPIA:\n");
	for (i = 0; i < WIERSZE; i++) {
		wyswietl(kopia[i], KOLUMNY);
	}

	return 0;
}

void kopiuj(double tab[], double kopia[], int rozmiar) {
	int i;

	for (i = 0; i < rozmiar; i++)
		kopia[i] = tab[i];
}

void wyswietl(double tab[], int rozmiar) {
	int i;

	for (i = 0; i < rozmiar; i++)
		printf("%4.1f ", tab[i]);

	printf("\n");
}