#include <stdio.h>

#define ROZMIAR 256

int main(void) {
	char linia[ROZMIAR];
	int i = 0;
	int j = 0;

	printf("Podaj napis (maksymalnie 255 znakow, zatwierdz klawiszem enter).\n");

	while ((i < ROZMIAR) && scanf_s("%c", &linia[i]) && (linia[i] != '\n'))
		i++;

	for (j = 0; j <= i; j++)
		printf("%c", linia[i - j]);

	printf("\n");

	return 0;
}