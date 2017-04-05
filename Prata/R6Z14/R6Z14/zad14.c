#include <stdio.h>

#define ROZMIAR 8

int main(void) {
	double tab1[ROZMIAR];
	double tab2[ROZMIAR];
	int i = 0;
	double suma = 0;

	printf("Podaj %d liczb zmiennoprzecinkowych.\n", ROZMIAR);

	while (i < ROZMIAR && scanf_s("%lf", &tab1[i]))
		i++;

	for (i = 0; i < ROZMIAR; i++) {
		suma += tab1[i];
		tab2[i] = suma;
	}

	for (i = 0; i < ROZMIAR; i++)
		printf("%8.2f ", tab1[i]);

	printf("\n");

	for (i = 0; i < ROZMIAR; i++)
		printf("%8.2f ", tab2[i]);

	printf("\n");

	return 0;
}