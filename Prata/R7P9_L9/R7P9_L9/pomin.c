#include <stdio.h>

int main(void) {
	const float MIN = 0.0f;
	const float MAX = 100.0f;

	float wynik;
	float suma = 0;
	int n = 0;
	float min = MAX;
	float max = MIN;

	printf("Podaj pierwszy wynik (albo q aby zakonczyc):\n");

	while (scanf_s("%f", &wynik) == 1) {
		if (wynik < MIN || wynik > MAX) {
			printf("%0.1f jest nieprawidlowa wartoscia.\n", wynik);
			continue;
		}

		printf("Przyjeto %0.1f:\n", wynik);
		
		min = (wynik < min) ? wynik : min;
		max = (wynik > max) ? wynik : max;
		suma += wynik;
		n++;

		printf("Podaj kolejny wynik (albo q zeby zakonczyc):\n");
	}

	if (n > 0)
		printf("Srednia z %d wynikow wynosi %0.1f.\nNajnizszy = %0.1f, najwyzszy = %0.1f\n", n, suma / n, min, max);
	else
		printf("Nie podano zadnych prawidlowych wynikow.\n");

	return 0;
}