#include <stdio.h>

#define ROZMIAR 5

void kopiuj_tab(double zrodlo[], double cel[], int rozmiar);
void kopiuj_wsk(double * zrodlo, double * cel, int rozmiar);
void kopiuj_wsk2(double * zrodlo_p, double * cel, double * zrodlo_k);
void wyswietl(double zrodlo[], int rozmiar);

int main(void) {
	double zrodlo[ROZMIAR] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double cel1[ROZMIAR];
	double cel2[ROZMIAR];
	double cel3[ROZMIAR];

	kopiuj_tab(zrodlo, cel1, ROZMIAR);
	kopiuj_wsk(zrodlo, cel2, ROZMIAR);
	kopiuj_wsk2(zrodlo, cel3, zrodlo + ROZMIAR);

	wyswietl(zrodlo, ROZMIAR);
	wyswietl(cel1, ROZMIAR);
	wyswietl(cel2, ROZMIAR);
	wyswietl(cel3, ROZMIAR);

	return 0;
}

void kopiuj_tab(double zrodlo[], double cel[], int rozmiar) {
	int i;
	
	for (i = 0; i < rozmiar; i++)
		cel[i] = zrodlo[i];
}

void kopiuj_wsk(double * zrodlo, double * cel, int rozmiar) {
	int i;

	for (i = 0; i < rozmiar; i++)
		*(cel + i) = *(zrodlo + i);
}

void kopiuj_wsk2(double * zrodlo_p, double * cel, double * zrodlo_k) {
	while (zrodlo_p < zrodlo_k)
		*cel++ = *zrodlo_p++;
}

void wyswietl(double zrodlo[], int rozmiar) {
	int i;

	printf("Zawartosc tablicy:\n");

	for (i = 0; i < rozmiar; i++)
		printf("%6.1f ", zrodlo[i]);

	printf("\n\n");
}