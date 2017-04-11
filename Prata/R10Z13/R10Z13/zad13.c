#include <stdio.h>

#define WIERSZE 3
#define KOLUMNY 5

void pobierz(double tab[][KOLUMNY], int wiersze);
float srednia_zbioru(double tab[], int kolumny);
float srednia(double tab[][KOLUMNY], int wiersze);
float najwieksza(double tab[][KOLUMNY], int wiersze);
void wyswietl(double tab[][KOLUMNY], int wiersze);

int main(void) {
	double liczby[WIERSZE][KOLUMNY];
	int i;

	pobierz(liczby, WIERSZE);

	printf("\n\nTABLICA LICZB\n");
	wyswietl(liczby, WIERSZE);

	printf("\nSrednie wartosci zbiorow (wiersze)\n");
	for (i = 0; i < WIERSZE; i++)
		printf("%6.2f\n", srednia_zbioru(liczby[i], KOLUMNY));

	printf("\nSrednia wartosc z calej tablicy.\n");
	printf("%6.2f\n", srednia(liczby, WIERSZE));

	printf("\nNajwieksza wartosc\n");
	printf("%6.2f\n\n", najwieksza(liczby, WIERSZE));
	
	return 0;
}

void pobierz(double tab[][KOLUMNY], int wiersze) {
	double wartosci[KOLUMNY];
	int i;
	int j;

	for (j = 0; j < wiersze; j++) {
		printf("Podaj %d grupe 5 liczb zmiennoprzecinkowych.\n", j + 1);

		i = 0;

		while (scanf_s("%lf", wartosci + i))
			if (++i > 4)
				break;

		for (i = 0; i < KOLUMNY; i++)
			tab[j][i] = wartosci[i];
	}
}

float srednia_zbioru(double tab[], int kolumny) {
	float suma = 0;
	int i;

	for (i = 0; i < kolumny; i++)
		suma += tab[i];

	return suma / kolumny;
}

float srednia(double tab[][KOLUMNY], int wiersze) {
	float suma = 0;
	int w, k;

	for (w = 0; w < wiersze; w++) 
		for (k = 0; k < KOLUMNY; k++)
			suma += tab[w][k];

	return suma / (KOLUMNY * wiersze);
}

float najwieksza(double tab[][KOLUMNY], int wiersze) {
	float najwieksza = tab[0][0];
	int w, k;

	for (w = 0; w < wiersze; w++)
		for (k = 0; k < KOLUMNY; k++)
			if (tab[w][k] > najwieksza)
				najwieksza = tab[w][k];

	return najwieksza;
}

void wyswietl(double tab[][KOLUMNY], int wiersze) {
	int w, k;

	for (w = 0; w < wiersze; w++) {
		for (k = 0; k < KOLUMNY; k++)
			printf(" %6.2f", tab[w][k]);

		printf("\n");
	}
}