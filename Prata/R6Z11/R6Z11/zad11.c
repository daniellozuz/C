#include <stdio.h>

#define ROZMIAR 8

int main(void) {
	int tablica[ROZMIAR];
	int i = 0;

	printf("Podaj %d liczb calkowitych.\n", ROZMIAR);
	
	while ((i < ROZMIAR) && (scanf_s("%d", &tablica[i]) == 1))
		i++;

	for (i = 1; i <= ROZMIAR; i++)
		printf("%d ", tablica[ROZMIAR - i]);
	
	printf("\n");

	return 0;
}