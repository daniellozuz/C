#include <stdio.h>

int main(void) {
	int i, ilosc;

	printf("Podaj ilosc liczb, z ktorych chcesz stworzyc tabele.\n");
	scanf_s("%d", &ilosc);

	printf("Liczba Kwadrat Szescian\n");

	for (i = 1; i <= ilosc; i++) {
		printf("%6d %7d %8d\n", i, i * i, i * i * i);
	}

	return 0;
}