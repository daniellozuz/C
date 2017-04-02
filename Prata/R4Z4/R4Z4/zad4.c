#include <stdio.h>

int main(void) {
	float wzrost;
	char imie[40];

	printf("Podaj swoj wzrost w cm.\n");
	scanf_s("%f", &wzrost);
	printf("Podaj swoje imie.\n");
	scanf_s("%s", imie, 40);

	printf("%s, masz %.2f metra wzrostu.\n", imie, wzrost / 100);

	return 0;
}