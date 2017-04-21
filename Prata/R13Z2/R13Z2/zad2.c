#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
	FILE * zrodlo;
	FILE * cel;
	char ch;

	if (argc != 3) {
		printf("Sposob uzycia: %s nazwa_pliku_zrodlowego nazwa_pliku_docelowego\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if ((zrodlo = fopen(argv[1], "rb")) == NULL) {
		printf("Nie mozna otworzyc pliku %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if ((cel = fopen(argv[2], "wb")) == NULL) {
		printf("Nie mozna utworzyc pliku %s\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	while ((ch = getc(zrodlo)) != EOF)
		putc(ch, cel);

	if (fclose(zrodlo) || fclose(cel))
		fprintf(stderr, "Blad przy zamykaniu plikow.\n");

	return 0;
}