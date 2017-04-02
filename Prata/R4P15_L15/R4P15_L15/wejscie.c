#include <stdio.h>

int main(void) {
	int wiek;
	float majatek;
	char zwierzatko[40];

	printf("Podaj swoj wiek, majatek i ulubione zwierzatko.\n");
	scanf_s("%d %f", &wiek, &majatek);
	scanf_s("%s", zwierzatko, 40);
	printf("%d, %.0f zl, %s\n.", wiek, majatek, zwierzatko);

	return 0;
}