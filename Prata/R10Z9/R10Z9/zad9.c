#include <stdio.h>

#define WIERSZE 3
#define KOLUMNY 5

void kopiuj(double tab[][KOLUMNY], double kopia[][KOLUMNY], int wiersze);
void wyswietl(double tab[][KOLUMNY], int wiersze);

int main(void) {
	double wartosci[WIERSZE][KOLUMNY] = { { 1.1, 2.2, 3.3, 4.4, 5.5 }, { 6.6, 7.7, 8.8, 9.9, 10.0 }, { 11.1, 12.2, 13.3, 14.4, 15.5 } };
	double kopia[WIERSZE][KOLUMNY];

	printf("TABLICA WARTOSCI\n");
	wyswietl(wartosci, WIERSZE);

	kopiuj(wartosci, kopia, WIERSZE);

	printf("\nTABLICA KOPIA\n");
	wyswietl(kopia, WIERSZE);

	return 0;
}

void kopiuj(double tab[][KOLUMNY], double kopia[][KOLUMNY], int wiersze) {
	int w, k;

	for (w = 0; w < wiersze; w++)
		for (k = 0; k < KOLUMNY; k++)
			kopia[w][k] = tab[w][k];
}

void wyswietl(double tab[][KOLUMNY], int wiersze) {
	int w, k;
	
	for (w = 0; w < wiersze; w++) {
		for (k = 0; k < KOLUMNY; k++)
			printf("%5.1f ", tab[w][k]);

		printf("\n");
	}
}