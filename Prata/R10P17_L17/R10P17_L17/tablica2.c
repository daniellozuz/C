#include <stdio.h>

#define WIERSZE 3
#define KOLUMNY 4

void sumuj_wiersze(int tab[][KOLUMNY], int wiersze);
void sumuj_kolumny(int tab[][KOLUMNY], int);
int sumuj2d(int(*tab)[KOLUMNY], int wiersze);

int main(void) {
	int graty[WIERSZE][KOLUMNY] = {
		{ 2, 4, 6, 8 },
		{ 3, 5, 7, 9 },
		{ 12, 10, 8, 6 }
	};

	sumuj_wiersze(graty, WIERSZE);
	sumuj_kolumny(graty, WIERSZE);

	printf("Suma wszystkich elementow = %d\n", sumuj2d(graty, WIERSZE));

	return 0;
}

void sumuj_wiersze(int tab[][KOLUMNY], int wiersze) {
	int w, k, suma;

	for (w = 0; w < wiersze; w++) {
		for (suma = 0, k = 0; k < KOLUMNY; k++)
			suma += tab[w][k];

		printf("Wiersz %d: suma = %d\n", w, suma);
	}
}

void sumuj_kolumny(int tab[][KOLUMNY], int wiersze) {
	int w, k, suma;

	for (k = 0; k < KOLUMNY; k++) {
		for (suma = 0, w = 0; w < wiersze; w++)
			suma += tab[w][k];

		printf("Kolumna %d: suma = %d\n", k, suma);
	}
}

int sumuj2d(int tab[][KOLUMNY], int wiersze) {
	int w, k, suma;

	for (suma = 0, w = 0; w < wiersze; w++)
		for (k = 0; k < KOLUMNY; k++)
			suma += tab[w][k];

	return suma;
}