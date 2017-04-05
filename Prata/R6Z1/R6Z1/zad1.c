#include <stdio.h>

#define ROZMIAR 26

int main(void) {
	char tab[ROZMIAR];
	int i = 0;

	while (i < ROZMIAR && scanf_s("%c", &tab[i]) == 1)
		i++;

	printf("Oto wprowadzone znaki:\n");
	for (i = 0; i < ROZMIAR; i++)
		printf("%c", tab[i]);

	printf("\n");

	return 0;
}