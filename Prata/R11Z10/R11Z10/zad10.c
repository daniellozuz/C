#include <stdio.h>

#define ROZMIAR 10

void pobierz(char * lancuch);
void usunOdstepy(char * lancuch);

int main(void) {
	char * tekst[ROZMIAR];

	printf("Podaj tekst do scalenia (maks %d znakow; pusta linia konczy program)\n", ROZMIAR - 2);
	pobierz(tekst);

	while (strcmp(tekst, "\0") != 0) {
		puts("Wynik");
		puts(tekst);

		printf("Podaj tekst do scalenia (maks %d znakow; pusta linia konczy program)\n", ROZMIAR - 2);
		pobierz(tekst);
	}

	return 0;
}

void pobierz(char * lancuch) {
	fgets(lancuch, ROZMIAR, stdin);
	
	if (lancuch[strlen(lancuch) - 1] != '\n')
		while (getchar() != '\n')
			continue;

	lancuch[strlen(lancuch) - 1] = '\0';

	usunOdstepy(lancuch);
}

void usunOdstepy(char * lancuch) {
	int i, j;

	for (i = 0, j = 0; i < strlen(lancuch); i++) {
		lancuch[j] = lancuch[i];

		if (!isspace(lancuch[i]))
			j++;
	}

	lancuch[j] = '\0';
}