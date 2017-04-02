#include <stdio.h>

int main(void) {
	char imie[40];
	int dlugosc;

	printf("Podaj swoje imie.\n");
	scanf_s("%s", imie, 40);

	printf("\"%s\"\n", imie);
	printf("\"%20s\"\n", imie);
	printf("\"%-20s\"\n", imie);

	dlugosc = strlen(imie);
	printf("%*s\n", dlugosc + 3, imie);

	return 0;
}