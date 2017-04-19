#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "rzutkosc.h"

int main(void) {
	int rzuty, wynik, scianki, status;

	srand((unsigned int)time(0));

	printf("Podaj liczbe scianek (0 oznacza koniec).\n");

	while (scanf_s("%d", &scianki) == 1 && scianki > 0) {
		printf("Ile rzutow?\n");
		if ((status = scanf_s("%d", &rzuty)) != 1) {
			if (status == EOF)
				break;
			else {
				printf("Nalezy podac liczbe calkowita. Sprobujmy jeszcze raz.\n");

				while (getchar() != '\n')
					continue;

				printf("Ile scianek? (0 oznacza koniec)\n");
				continue;
			}
		}

		wynik = rzucaj_n_razy(rzuty, scianki);
		printf("Wyrzucono razem %d uzywajac %d %d-sciennych kosci.\n", wynik, rzuty, scianki);
		
		printf("Podaj liczbe scianek (0 oznacza koniec).\n");
	}

	printf("Funkcja rzucaj() zostala wywolana %d razy.\n", liczba_rzutow);
	printf("ZYCZE DUZO SZCZESCIA!\n");

	return 0;
}