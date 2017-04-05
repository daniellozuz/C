#include <stdio.h>

int main(void) {
	int dzielna, dzielnik;

	printf("Program obliczajacy reszte z dzielenia.\n");

	printf("Podaj dzielnik (liczba calkowita):");
	scanf_s("%d", &dzielnik);

	printf("Podaj dzielna (<= 0, aby zakonczyc): ");
	scanf_s("%d", &dzielna);

	while (dzielna > 0) {
		printf("%d %% %d wynosi %d.\n", dzielna, dzielnik, dzielna % dzielnik);

		printf("Podaj dzielna (<= 0, aby zakonczyc): ");
		scanf_s("%d", &dzielna);
	}
	printf("Koniec");

	return 0;
}