#include <stdio.h>

int main(void) {
	float ciezar;
	float wartosc;

	printf("Czy jestes wart tyle, co Twoj ciezar w zlocie?\n");
	printf("Podaj swoj ciezar w kilogramach: ");

	scanf_s("%f", &ciezar);

	wartosc = 4250.0 * ciezar * 32.151;

	printf("Twoj ciezar w zlocie jest wart %.2f zl.\n", wartosc);

	return 0;
}