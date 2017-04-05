#include <stdio.h>

int main(void) {
	float liczba1, liczba2;

	printf("Podaj 2 liczby zmiennoprzecinkowe.\n");

	while (scanf_s("%f %f", &liczba1, &liczba2) == 2)
		printf("(%.3f - %.3f) / (%.3f * %.3f) = %.3f\n", liczba1, liczba2, liczba1, liczba2, (liczba1 - liczba2) / (liczba1 * liczba2));

	return 0;
}