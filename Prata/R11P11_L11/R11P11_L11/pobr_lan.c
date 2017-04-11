#include <stdio.h>

#define DLUGOSC 11

int main(void) {
	char imie1[DLUGOSC], imie2[DLUGOSC];
	int licznik;

		printf("Podaj 2 imiona.\n");

		licznik = scanf_s("%5s %10s", imie1, DLUGOSC, imie2, DLUGOSC);

		printf("Odczytalem %d imiona: %s i %s.\n", licznik, imie1, imie2);
	
	return 0;
}