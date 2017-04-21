#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 41

int main(void) {
	FILE * wp;
	char slowa[MAX];
	int wiersz = 1;
	char ch;

	if ((wp = fopen("slowka.txt", "a+")) == NULL) {
		fprintf(stderr, "Nie moge otworzyc pliku \"slowka.txt\".\n");
		exit(EXIT_FAILURE);
	}

	while ((ch = getc(wp)) != EOF) {
		if (ch == '\n')
			wiersz++;
	}
	rewind(wp);

	puts("Podaj slowa, ktore maja zostac dodane do pliku. Aby zakonczyc, wpisz #.");

	while ((fscanf(stdin, "%40s", slowa) == 1) && (slowa[0] != '#'))
		fprintf(wp, "%d. %s\n", wiersz++, slowa);

	puts("Zawartosc pliku:");
	rewind(wp);
	while ((ch = getc(wp)) != EOF)
		putchar(ch);

	puts("Gotowe.");
	
	if (fclose(wp))
		fprintf(stderr, "Blad przy zamykaniu pliku.");

	return 0;
}