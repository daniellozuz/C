#include <stdio.h>
#include <stdbool.h>

bool pierwsza(int i);

int main(void) {
	int liczba;
	int i;

	printf("Podaj liczbe calkowita dodatnia, do ktorej chcesz wyswietlic wszystkie liczby pierwsze.\n");

	if (scanf_s("%d", &liczba) && liczba > 1) {
		for (i = 2; i <= liczba; i++) {
			if (pierwsza(i))
				printf("%d\n", i);
		}
	}
	else
		printf("Przykro mi, musisz podac poprawna liczbe.\n");

	return 0;
}

bool pierwsza(int i) {
	int j;
	bool pierwsza = true;

	for (j = 2; j * j <= i; j++)
		if (i % j == 0)
			pierwsza = false;

	return pierwsza;
}