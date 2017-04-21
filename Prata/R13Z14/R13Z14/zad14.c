#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define DL 50
#define RZEDY 20
#define KOLUMNY 30

int ** usrednij(int wartosci[][KOLUMNY], int rzedy);

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

	**wartosci = usrednij(wartosci, RZEDY);

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

int ** usrednij(int wartosci[][KOLUMNY], int rzedy) {
	int nowe_wartosci[RZEDY][KOLUMNY];

	for (int j = 0; j < KOLUMNY; j++) {
		for (int i = 0; i < RZEDY; i++) {
			if (j > 0 && j < KOLUMNY - 1 && i > 0 && i < RZEDY - 1) {
				nowe_wartosci[j][i] = (wartosci[j + 1][i] + wartosci[j - 1][i] + wartosci[j][i + 1] + wartosci[j][i - 1]) / 4;
			}
			else if (j == 0 && i == 0) {
				nowe_wartosci[j][i] = (wartosci[j + 1][i] + wartosci[j][i + 1]) / 2;
			}
			else if (j == 0 && i == RZEDY - 1) {
				nowe_wartosci[j][i] = (wartosci[j + 1][i] + wartosci[j][i - 1]) / 2;
			}
			else if (j == KOLUMNY - 1 && i == RZEDY - 1) {
				nowe_wartosci[j][i] = (wartosci[j - 1][i] + wartosci[j][i - 1]) / 2;
			}
			else if (j == KOLUMNY - 1 && i == 0) {
				nowe_wartosci[j][i] = (wartosci[j - 1][i] + wartosci[j][i + 1]) / 2;
			}
			else if (j == 0) {
				nowe_wartosci[j][i] = (wartosci[j + 1][i] + wartosci[j][i + 1] + wartosci[j][i - 1]) / 3;
			}
			else if (j == KOLUMNY - 1) {
				nowe_wartosci[j][i] = (wartosci[j - 1][i] + wartosci[j][i + 1] + wartosci[j][i - 1]) / 3;
			}
			else if (i == 0) {
				nowe_wartosci[j][i] = (wartosci[j + 1][i] + wartosci[j][i + 1] + wartosci[j - 1][i]) / 3;
			}
			else if (i == RZEDY - 1) {
				nowe_wartosci[j][i] = (wartosci[j + 1][i] + wartosci[j][i - 1] + wartosci[j - 1][i]) / 3;
			}
		}
	}

	return nowe_wartosci;
}