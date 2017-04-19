#include <stdio.h>

void podaj_liczbe(void);
void sumuj(int k);

int liczba = 0;

int main(void) {
	int wartosc;
	register int i;

	printf("Podaj dodatnia liczbe calkowita (0 to koniec): ");

	while (scanf_s("%d", &wartosc) == 1 && wartosc > 0) {
		++liczba;

		for (i = wartosc; i >= 0; i--)
			sumuj(i);

		printf("Podaj dodatnia liczbe calkowita (0 to koniec): ");
	}

	podaj_liczbe();

	return 0;
}

void podaj_liczbe(void) {
	printf("Petle opuszczono po %d cyklach\n", liczba);
}