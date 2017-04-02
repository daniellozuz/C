#include <stdio.h>

#define KOREKTA -1

int main(void) {
	const double MNOZNIK = 0.666666;
	double but, stopa;

	but = 42.0;
	stopa = MNOZNIK * but + KOREKTA;
	printf("Rozmiar buta      Dlugosc stopy\n");
	printf("%8.1f %15.2f cm\n", but, stopa);

	return 0;
}