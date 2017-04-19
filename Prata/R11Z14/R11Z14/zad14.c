#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
	double podstawa;
	int wykladnik;
	int i;
	float wynik;

	if (argc < 3)
		printf("Podaj podstawe (float) i wykladnik(int) (oddzielone spacja).\n");
	else {
		podstawa = atof(argv[1]);
		printf("%.3f\n", podstawa);
		wykladnik = atoi(argv[2]);
		printf("%d\n", wykladnik);

		if (podstawa != 0) {
			if (wykladnik >= 0) {
				for (i = 0, wynik = 1; i < wykladnik; i++)
					wynik = wynik * podstawa;
			}
			else {
				for (i = 0, wynik = 1; i > wykladnik; i--)
					wynik = wynik / podstawa;
			}
		}
		else {
			wynik = 0;
		}
		
		printf("%.3f\n", wynik);
	}

	return 0;
}