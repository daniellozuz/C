#include <stdio.h>

#define WIERSZE 3
#define KOLUMNY 5

void wyswietl(int tab[][KOLUMNY], int wiersze);
void podwoj(int tab[][KOLUMNY], int wiersze);

int main(void) {
	int wartosci[WIERSZE][KOLUMNY] = {	{ 1, 2, 3, 4, 5 }, 
										{ 6, 7, 8, 9, 10 }, 
										{ 11, 12, 13, 14, 15 } };

	printf("TABLICA WARTOSCI\n");
	wyswietl(wartosci, WIERSZE);

	podwoj(wartosci, WIERSZE);

	printf("PODWOJONA TABLICA WARTOSCI\n");
	wyswietl(wartosci, WIERSZE);

	return 0;
}

void wyswietl(int tab[][KOLUMNY], int wiersze) {
	int w, k;

	for (w = 0; w < wiersze; w++) {
		for (k = 0; k < KOLUMNY; k++)
			printf(" %4d", tab[w][k]);

		printf("\n");
	}
}

void podwoj(int tab[][KOLUMNY], int wiersze) {
	int w, k;

	for (w = 0; w < wiersze; w++)
		for (k = 0; k < KOLUMNY; k++)
			tab[w][k] = 2 * tab[w][k];
}