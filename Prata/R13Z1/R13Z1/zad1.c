#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define DLUGOSC 40

int main(void) {
	int ch;
	FILE * wp;
	unsigned long licznik = 0;
	char nazwa[DLUGOSC];

	puts("Podaj nazwe pliku, w ktorym chcesz policzyc ilosc liter.");

	scanf("%s", nazwa);

	if ((wp = fopen(nazwa, "r")) == NULL) {
		printf("Nie mozna otworzyc %s\n", nazwa);
		exit(EXIT_FAILURE);
	}

	while ((ch = getc(wp)) != EOF) {
		putchar(ch);
		licznik++;
	}

	fclose(wp);

	printf("\nPlik %s zawiera %lu znakow\n", nazwa, licznik);

	return 0;
}