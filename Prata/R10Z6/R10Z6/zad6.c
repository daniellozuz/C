#include <stdio.h>

#define ROZMIAR 6

void pokaz(double tab[], int rozmiar);
void odwroc(double tab[], int rozmiar);

int main(void) {
	double wartosci[ROZMIAR] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };
	
	pokaz(wartosci, ROZMIAR);

	odwroc(wartosci, ROZMIAR);
	
	pokaz(wartosci, ROZMIAR);
	
	return 0;
}

void odwroc(double tab[], int rozmiar) {
	int i;
	double temp;

	for (i = 0; i < rozmiar / 2; i++) {
		temp = tab[i];
		tab[i] = tab[rozmiar - 1 - i];
		tab[rozmiar - 1 - i] = temp;
	}
}

void pokaz(double tab[], int rozmiar) {
	int i;

	for (i = 0; i < rozmiar; i++)
		printf("%4.1f ", tab[i]);

	printf("\n");
}