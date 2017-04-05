#include <stdio.h>

#define ILOSC 10

int main(void) {
	int liczba;
	int licznik;

	printf("Podaj liczbe calkowita.\n");
	scanf_s("%d", &liczba);
	licznik = liczba;

	while (licznik <= liczba + ILOSC) {
		printf("%d\n", licznik);
		licznik++;
	}

	return 0;
}