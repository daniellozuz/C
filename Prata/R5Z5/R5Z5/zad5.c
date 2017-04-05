#include <stdio.h>

int main(void) {
	int licznik = 0;
	int suma = 0;
	int dni;

	printf("Podaj ilosc dni.\n");
	scanf_s("%d", &dni);

	while (licznik++ < dni)
		suma = suma + licznik;
	printf("Zarobisz %d$\n", suma);

	return 0;
}