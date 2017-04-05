#include <stdio.h>

void Temperatura(float f);

int main(void) {
	float fahr;
	int ok;

	printf("Podaj temperature w stopniach Fahrenheita.\n");
	ok = scanf_s("%f", &fahr);

	while (ok) {
		Temperatura(fahr);
		printf("Podaj temperature w stopniach Fahrenheita.\n");
		ok = scanf_s("%f", &fahr);
	}

	return 0;
}

void Temperatura(float f) {
	const float MNOZNIK = 5.0 / 9.0;
	const float KOREKTA1 = 32.0;
	const float KOREKTA2 = 273.16;

	float c = MNOZNIK * (f - KOREKTA1);
	float k = c + KOREKTA2;

	printf("Fahrenheit: %.2f\nKelwin: %.2f\nCelsjusz: %.2f\n", f, k, c);
}