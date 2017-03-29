#include <stdio.h>

int main(void) {
	int wiek_lata = 22;
	int wiek_dni = 365 * wiek_lata;

	printf("Zyje juz %d lat, czyli %d dni.\nSo far so good.\n", wiek_lata, wiek_dni);

	return 0;
}