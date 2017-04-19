#include <stdio.h>

extern int liczba;
static int suma;

void sumuj(int k);

void sumuj(int k) {
	static int podsuma = 0;

	if (k <= 0) {
		printf("Cykl petli: %d\n", liczba);
		printf("Podsuma: %d; Suma: %d\n", podsuma, suma);

		podsuma = 0;
	}
	else {
		podsuma += k;
		suma += k;
	}
}