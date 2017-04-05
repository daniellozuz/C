#include <stdio.h>
#include <math.h>

int main(void) {
	const double ODPOWIEDZ = 3.14159;
	double odp;

	printf("Jaka jest wartosc liczby PI?\n");
	scanf_s("%lf", &odp);

	while (fabs(odp - ODPOWIEDZ) > 0.0001) {
		printf("Sprobuj ponownie.\n");
		scanf_s("%lf", &odp);
	}
	printf("Wystarczajaco blisko!\n");

	return 0;
}