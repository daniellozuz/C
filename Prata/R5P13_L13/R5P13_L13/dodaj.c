#include <stdio.h>

int main(void) {
	int licznik, suma;

	licznik = 0;
	suma = 0;

	while (licznik++ < 20)
		suma = suma + licznik;
	printf("suma = %d\n", suma);

	return 0;
}