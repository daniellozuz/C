#include <stdio.h>
#include "hotel.h"

int menu(void) {
	int kod, stan;

	printf("\n%s%s\n", GWIAZDKI, GWIAZDKI);
	printf("Podaj numer hotelu.\n");
	printf("1) Marek Antoniusz      2) Olimpijski\n");
	printf("3) U Marynarza          4) Savoy\n");
	printf("5) koniec\n");
	printf("\n%s%s\n", GWIAZDKI, GWIAZDKI);

	while ((stan = scanf_s("%d", &kod)) != 1 || (kod < 1 || kod > 5)) {
		if (stan != 1)
			scanf_s("%*s");
		
		printf("Podaj liczbe z przedzialu od 1 do 5.\n");
	}

	return kod;
}

int pobierz_noce(void) {
	int noce;

	printf("Ile nocy bedzie potrzebne?\n");

	while (scanf_s("%d", &noce) != 1) {
		scanf_s("%*s");

		printf("Podaj liczbe calkowita.\n");
	}

	return noce;
}

void pokaz_cene(double hotel, int noce) {
	int n;
	double suma = 0.0;
	double przelicznik = 1.0;

	for (n = 1; n <= noce; n++, przelicznik *= RABAT)
		suma += hotel * przelicznik;

	printf("Calkowity ksozt pobytu wyniesie %0.2f $.\n", suma);
}