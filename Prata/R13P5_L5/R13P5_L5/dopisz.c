#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROZMIAR_BUF 4096
#define DLAN 50

void dopisz(FILE * zrodlo, FILE * cel);
char * wczytaj(char * z, int ile);

int main(void) {
	FILE * pd, * pz;
	int pliki = 0;
	char plik_doc[DLAN];
	char plik_zro[DLAN];
	int ch;

	puts("Podaj nazwe pliku docelowego:");
	wczytaj(plik_doc, DLAN);

	if ((pd = fopen(plik_doc, "a+")) == NULL) {
		fprintf(stderr, "Blad otwarcia %s\n", plik_doc);
		exit(EXIT_FAILURE);
	}
	if (setvbuf(pd, NULL, _IOFBF, ROZMIAR_BUF) != 0) {
		fputs("Nie mozna utworzyc bufora wyjsciowego\n", stderr);
		exit(EXIT_FAILURE);
	}

	puts("Podaj nazwe pierwszego pliku zrodlowego (pusty wiersz konczy program):");
	while (wczytaj(plik_zro, DLAN) && plik_zro[0] != '\0') {
		if (strcmp(plik_zro, plik_doc) == 0)
			fputs("Nie mozna dopisac pliku do siebie\n", stderr);
		else if ((pz = fopen(plik_zro, "r")) == NULL)
			fprintf(stderr, "Blad otwarcia pliku %s\n", plik_zro);
		else {
			if (setvbuf(pz, NULL, _IOFBF, ROZMIAR_BUF) != 0) {
				fputs("Nie mozna utworzyc bufora wejsciowego\n", stderr);
				continue;
			}

			dopisz(pz, pd);
			if (ferror(pz) != 0)
				fprintf(stderr, "Blad odczytu pliku %s\n", plik_zro);
			if (ferror(pd) != 0)
				fprintf(stderr, "Blad zapisu pliku %s\n", plik_doc);
			
			fclose(pz);
			pliki++;
			printf("Plik %s dopisany.\n", plik_zro);
			puts("Kolejny plik (pusty wiersz konczy program):");
		}
	}

	printf("Koniec. Dopisano %d plikow.\n", pliki);
	rewind(pd);
	printf("%s zawiera:\n", plik_doc);
	while ((ch = getc(pd)) != EOF)
		putchar(ch);
	
	puts("Koniec.");
	fclose(pd);

	return 0;
}

void dopisz(FILE * zrodlo, FILE * cel) {
	size_t bajty;
	static char temp[ROZMIAR_BUF];

	while ((bajty = fread(temp, sizeof(char), ROZMIAR_BUF, zrodlo)) > 0)
		fwrite(temp, sizeof(char), bajty, cel);
}

char * wczytaj(char * z, int ile) {
	char * wynik;
	char * tutaj;
	
	wynik = fgets(z, ile, stdin);
	if (wynik) {
		tutaj = strchr(z, '\n');
		if (tutaj)
			*tutaj = '\0';
		else
		while (getchar() != '\n')
			continue;
	}
	
	return wynik;
}