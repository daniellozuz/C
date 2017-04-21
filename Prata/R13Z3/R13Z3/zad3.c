#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define DLUGOSC 40

int main(void) {
	FILE * zrodlo;
	FILE * cel;
	char nazwa_zrodlo[DLUGOSC];
	char nazwa_cel[DLUGOSC];
	char ch;

	puts("Podaj nazwe pliku, ktory chcesz skopiowac.");
	scanf("%s", nazwa_zrodlo);

	if ((zrodlo = fopen(nazwa_zrodlo, "r")) == NULL) {
		printf("Nie mozna otworzyc %s\n", nazwa_zrodlo);
		exit(EXIT_FAILURE);
	}

	puts("Podaj nazwe kopii.");
	scanf("%s", nazwa_cel);

	if ((cel = fopen(nazwa_cel, "w+")) == NULL) {
		printf("Nie mozna otworzyc %s\n", nazwa_cel);
		exit(EXIT_FAILURE);
	}

	while ((ch = getc(zrodlo)) != EOF)
		putc(toupper(ch), cel);

	rewind(cel);
	puts("Oto wynik:");
	while ((ch = getc(cel)) != EOF)
		putc(ch, stdout);

	putchar('\n');

	if (fclose(zrodlo) || fclose(cel))
		fprintf(stderr, "Blad przy zamykaniu plikow.\n");

	return 0;
}