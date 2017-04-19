#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define DL_TAB 1000

int main(void) {
	double liczby[DL_TAB];
	double wartosc;
	const char * plik = "liczby.dat";
	int i;
	long poz;
	FILE * plikwewy;

	for (i = 0; i < DL_TAB; i++)
		liczby[i] = 100.0 * i + 1.0 / (i + 1);

	if ((plikwewy = fopen(plik, "wb")) == NULL) {
		fprintf(stderr, "Blad otwarcia pliku %s do zapisu.\n", plik);
		exit(EXIT_FAILURE);
	}

	fwrite(liczby, sizeof(double), DL_TAB, plikwewy);
	fclose(plikwewy);

	if ((plikwewy = fopen(plik, "rb")) == NULL) {
		fprintf(stderr, "Blad otwarcia pliku %s do dostepu swobodnego.\n", plik);
		exit(EXIT_FAILURE);
	}

	printf("Podaj indeks z przedzialu 0-%d.\n", DL_TAB - 1);

	while (scanf("%d", &i) == 1 && i >= 0 && i < DL_TAB) {
		poz = (long)i * sizeof(double);
		fseek(plikwewy, poz, SEEK_SET);
		fread(&wartosc, sizeof(double), 1, plikwewy);
		printf("Wartosc pod tym indeksem to %f.\n", wartosc);
		printf("Kolejny indeks (wyjscie poza przedzial konczy program):\n");
	}

	fclose(plikwewy);
	puts("Na razie!");

	return 0;
}