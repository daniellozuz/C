#include <stdio.h>

int main(void) {
	int liczba;
	int ilosc_p = 0;
	int ilosc_np = 0;
	int suma_p = 0;
	int suma_np = 0;

	printf("Podaj liczby calkowite (0 konczy program).\n");

	while (scanf_s("%d", &liczba) && liczba != 0) {
		if (liczba % 2) {
			ilosc_np++;
			suma_np += liczba;
		} else {
			ilosc_p++;
			suma_p += liczba;
		}
	}

	printf("Podano %3d liczb parzystych.       Ich srednia wartosc to %9.2f.\n", ilosc_p, (ilosc_p > 0) ? (float)suma_p / ilosc_p : 0);
	printf("Podano %3d liczb nieparzystych.    Ich srednia wartosc to %9.2f.\n", ilosc_np, (ilosc_np > 0) ? (float)suma_np / ilosc_np : 0);

	return 0;
}