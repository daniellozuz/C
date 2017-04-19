#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 41

int main(void) {
	FILE * wp;
	char slowa[MAX];

	if ((wp = fopen("slowka.txt", "a+")) == NULL) {
		fprintf(stderr, "Nie moge otworzyc pliku \"slowka.txt\".\n");
		exit(EXIT_FAILURE);
	}

	puts("Podaj slowa, ktore maja zostac dodane do pliku. Aby zakonczyc wpisz #.");

	while ((fscanf(stdin, "%40s", slowa) == 1) && (slowa[0] != '#'))
		fprintf(wp, "%s\n", slowa);

	puts("Zawartosc pliku:");

	rewind(wp);

	while (fscanf(wp, "%s", slowa) == 1)
		puts(slowa);

	puts("Gotowe!\n");

	if (fclose(wp) != 0)
		fprintf(stderr, "Blad przy zamykaniu pliku.\n");

	return 0;
}