#include <stdio.h>

int main(void) {
	float predkosc, rozmiar;

	printf("Podaj predkosc pobierania w Mb/s.\n");
	scanf_s("%f", &predkosc);

	printf("Podaj rozmiar pliku do pobrania w MB.\n");
	scanf_s("%f", &rozmiar);

	printf("Przy %.2f Mb/s plik o rozmiarze %.2f MB zostanie pobrany w %.2f s.\n", predkosc, rozmiar, 8 * rozmiar / predkosc);

	return 0;
}