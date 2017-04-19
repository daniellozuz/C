#include <stdio.h>

#define ROZMIAR 11

void pobierz(char * znak, int dlugosc);

int main(void) {
	char zdanie[ROZMIAR];

	printf("Podaj zdanie (max %d znakow).\n", ROZMIAR - 1);

	pobierz(zdanie, ROZMIAR);
	puts("Przyjalem");
	puts(zdanie);

	printf("Podaj zdanie (max %d znakow).\n", ROZMIAR - 1);

	pobierz(zdanie, ROZMIAR);
	puts("Przyjalem");
	puts(zdanie);

	return 0;
}

void pobierz(char * znak, int dlugosc) {
	char ch;
	int i = 0;

	while (i < (dlugosc - 1) && (ch = getchar())) {
		znak[i] = ch;
		i++;
	}

	while (getchar() != '\n')
		continue;

	znak[i] = '\0';
}