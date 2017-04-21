#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define DL 50
#define RZEDY 20
#define KOLUMNY 30

int main(void) {
	FILE * fp;
	char nazwa[DL];
	char ch;
	int wartosci[RZEDY][KOLUMNY];
	char znaki[10] = { ' ', '.', '\'', ':', '~', '*', '=', '?', '%', '#' };
	char obraz[RZEDY][KOLUMNY + 1];

	puts("Podaj nazwe pliku.");
	scanf("%s", nazwa);

	if ((fp = fopen(nazwa, "r")) == NULL) {
		fprintf(stderr, "Blad odczytu %s\n", nazwa);
		exit(EXIT_FAILURE);
	}

	int i = 0;
	int j = 0;
	while ((ch = getc(fp)) != EOF) {
		if (isdigit(ch)) {
			wartosci[j][i] = ch - 48;
			i++;
			if (i == KOLUMNY) {
				i = 0;
				j++;
			}
		}
	}

	for (int j = 0; j < RZEDY; j++) {
		for (i = 0; i < KOLUMNY + 1; i++) {
			if (i == KOLUMNY)
				obraz[j][i] = '\0';
			else
				obraz[j][i] = znaki[wartosci[j][i]];
		}
	}

	for (j = 0; j < RZEDY; j++)
		puts(obraz[j]);

	return 0;
}