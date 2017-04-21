#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DL 40
#define KONIEC "koniec"

int main(void) {
	FILE * we, * wy;
	int ch;
	char nazwa[DL];
	int licznik = 0;

	puts("Podaj nazwe pliku, ktory chcesz \"skompresowac\".");
	scanf("%s", nazwa);

	while ((we = fopen(nazwa, "r")) == NULL && nazwa != KONIEC) {
		fprintf(stderr, "Nie moglem otworzyc pliku \"%s\".\n", nazwa);

		puts("Podaj nazwe pliku, ktory chcesz \"skompresowac\".");
		scanf("%s", nazwa);
	}

	nazwa[strlen(nazwa) - 4] = '\0';
	strcat(nazwa, "red.txt");

	if ((wy = fopen(nazwa, "w")) == NULL) {
		fprintf(stderr, "Nie mozna utworzyc pliku wyjsciowego.\n");
		exit(EXIT_FAILURE);
	}

	while ((ch = getc(we)) != EOF)
	if (licznik++ % 3 == 0)
		putc(ch, wy);

	if (fclose(we) || fclose(wy))
		fprintf(stderr, "Blad przy zamykaniu plikow.\n");

	return 0;
}