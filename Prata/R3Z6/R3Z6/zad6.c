#include <stdio.h>

int main(void) {
	float masa = 3e-23;
	float litry;

	printf("Podaj ilosc wody w litrach:\n");
	scanf_s("%f", &litry);

	printf("%f litrow wody zawiera %e czasteczek wody.\n", litry, litry * 1000 / masa);

	return 0;
}