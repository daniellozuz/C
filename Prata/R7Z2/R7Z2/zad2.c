#include <stdio.h>

#define ROZMIAR 1000

int main(void) {
	char tablica[ROZMIAR];
	char ch;
	int i = 0;
	int j;

	printf("Podaj cokolwiek chcesz (maksymalnie %d znakow; # aby zakonczyc).\n", ROZMIAR);

	while (scanf_s("%c", &ch) && ch != '#') {
		tablica[i] = ch;
		i++;
	}

	for (j = 0; j < i; j++) {
		printf("%3c - %3d    ", tablica[j], tablica[j]);
		
		if ((j + 1) % 8 == 0)
			printf("\n");
	}

	printf("\n");

	return 0;
}