#include <stdio.h>

#define ROZMIAR 5

int range(int tab[], int rozmiar);

int main(void) {
	int wartosci[ROZMIAR] = { -10, 2, 32, 14, 5 };

	printf("Roznica pomiedzy najwiekszym a najmniejszym elementem tablicy wynosi %d\n", range(wartosci, ROZMIAR));

	return 0;
}

int range(int tab[], int rozmiar) {
	int i = 0;
	int najwieksza = tab[0];
	int najmniejsza = tab[0];

	for (i = 0; i < rozmiar; i++) {
		if (tab[i] > najwieksza)
			najwieksza = tab[i];

		if (tab[i] < najmniejsza)
			najmniejsza = tab[i];
	}

	return najwieksza - najmniejsza;
}