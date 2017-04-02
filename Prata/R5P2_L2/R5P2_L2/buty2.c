#include <stdio.h>

#define KOREKTA -1

int main(void) {
	const double MNOZNIK = 0.666666;
	double but, stopa;

	but = 24.0;

	printf("Rozmiar buta      Dlugosc stopy\n");
	while (but < 45) {
		stopa = MNOZNIK * but + KOREKTA;
		printf("%8.1f %15.2f cm\n", but, stopa);
		but = but + 1.0;
	}
	printf("Jesli but pasuje, nos go.\n");
	
	return 0;
}