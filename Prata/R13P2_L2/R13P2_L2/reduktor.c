#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DL 40

int main(int argc, char * argv[]) {
	FILE * we, * wy;
	int ch;
	char nazwa[DL];
	int licznik = 0;

	if (argc < 2) {
		fprintf(stderr, "Sposob uzycia: %s nazwa_pliku\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if ((we = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "Nie moglem otworzyc pliku \"%s\".\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	strncpy(nazwa, argv[1], strlen(argv[1]) - 4);
	nazwa[strlen(argv[1]) - 4] = '\0';
	strcat(nazwa, "red.txt");

	if ((wy = fopen(nazwa, "w")) == NULL) {
		fprintf(stderr, "Nie mozna otworzyc pliku wyjsciowego.\n");
		exit(EXIT_FAILURE);
	}

	while ((ch = getc(we)) != EOF)
	if (licznik++ % 3 == 0)
		putc(ch, wy);

	if (fclose(we) != 0 || fclose(wy) != 0)
		fprintf(stderr, "Blad przy zamykaniu plikow.\n");

	return 0;
}