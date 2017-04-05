#include <stdio.h>

int main(void) {
	float dlugosc, szerokosc;

	printf("Podaj dlugosc prostokata.\n");

	while (scanf_s("%f", &dlugosc) == 1) {
		printf("Dlugosc = %0.2f\n", dlugosc);

		printf("Podaj szerokosc prostokata:\n");

		if (scanf_s("%f", &szerokosc) != 1)
			break;

		printf("Szerokosc = %0.2f\n", szerokosc);
		printf("Pole = %0.2f\n", dlugosc * szerokosc);

		printf("Podaj dlugosc prostokata.\n");
	}

	printf("Gotowe.\n");

	return 0;
}