#include <stdio.h>

#define ROZMIAR 40

int main(void) {
	char slowo[ROZMIAR];
	int dlugosc;
	int i;

	printf("Podaj slowo (max 39 znakow).\n");
	scanf_s("%s", slowo, ROZMIAR);

	dlugosc = strlen(slowo);

	printf("Slowo wspak:\n");

	for (i = 1; i <= dlugosc; i++)
		printf("%c", slowo[dlugosc - i]);

	printf("\n");

	return 0;
}