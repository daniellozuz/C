#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROZMIAR_BUF 4096
#define DLAN 50

void dopisz(FILE * zrodlo, FILE * cel);

int main(int argc, char * argv[]) {
	FILE * zrodlo, * cel;
	int pliki = 0;
	int ch;

	if (argc < 3) {
		printf("Sposob uzycia: %s plik_docelowy plik_wejsciowy1 plik_wejsciowy2 ... plik_wejsciowyn\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	
	if ((cel = fopen(argv[1], "a+")) == NULL) {
		fprintf(stderr, "Blad przy otwarciu %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if (setvbuf(cel, NULL, _IOFBF, ROZMIAR_BUF) != 0) {
		fprintf(stderr, "Nie mozna utworzyc bufora wyjsciowego.\n");
		exit(EXIT_FAILURE);
	}
	
	for (int i = 2; i < argc; i++) {
		if (strcmp(argv[1], argv[i]) == 0)
			fputs("Nie mozna dopisac pliku do samego siebie.", stderr);
		else if ((zrodlo = fopen(argv[i], "r")) == NULL)
			fprintf(stderr, "Blad przy otwarciu pliku %s\n", argv[i]);
		else {
			if (setvbuf(zrodlo, NULL, _IOFBF, ROZMIAR_BUF) != 0) {
				fputs("Nie mozna utworzyc bufowa wejsciowego.", stderr);
				continue;
			}

			dopisz(zrodlo, cel);

			if (ferror(zrodlo) != 0)
				fprintf(stderr, "Blad odczytu pliku %s\n", argv[i]);
			if (ferror(cel) != 0)
				fprintf(stderr, "Blad zapisu pliku %s\n", argv[1]);

			if (fclose(zrodlo))
				printf("Blad przy zamknieciu pliku.\n");
			
			pliki++;
			printf("Plik %s dopisany.\n", argv[i]);
		}
	}

	printf("Koniec. Dopisano %d plikow.\n", pliki);

	rewind(cel);
	printf("%s zawiera:\n", argv[1]);
	while ((ch = getc(cel)) != EOF)
		putchar(ch);

	if (fclose(cel))
		printf("Blad przy zamknieciu pliku.\n");

	return 0;
}

void dopisz(FILE * zrodlo, FILE * cel) {
	size_t bajty;
	static char temp[ROZMIAR_BUF];

	while ((bajty = fread(temp, sizeof(char), ROZMIAR_BUF, zrodlo)) > 0)
		fwrite(temp, sizeof(char), bajty, cel);
}