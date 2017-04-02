#include <stdio.h>

#define POLA 64

int main(void) {
	const double PLON = 2E16;
	double biezace, suma;
	int licznik = 1;

	printf("pole    dodane ziarna   suma ziaren   czesc rocznej produkcji swiatowej\n");
	suma = biezace = 1.0;
	printf("%3d %15.2e %14.2e %14.2e\n", licznik, biezace, suma, suma / PLON);

	while (licznik < POLA) {
		licznik = licznik + 1;
		biezace = 2.0 * biezace;
		suma = suma + biezace;
		printf("%3d %15.2e %14.2e %14.2e\n", licznik, biezace, suma, suma / PLON);
	}

	return 0;
}