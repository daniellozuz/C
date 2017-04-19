#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rzucaj(int scianki);
int rzucaj_n_razy(int rzuty, int scianki);

int main(void) {
	int rzuty, scianki, kolejki;

	srand((unsigned int)time(0));

	printf("Wprowadz liczbe kolejek; wybierz q, aby zakonczyc.\n");
	while (scanf_s("%d", &kolejki) == 1 && kolejki > 0) {
		printf("Ile scian i ile kosci?\n");
		while (scanf_s("%d %d", &scianki, &rzuty) == 2 && scianki > 0 && rzuty > 0) {
			printf("Oto %d kolejek rzutow %d %d-sciennymi kostkami:\n", kolejki, rzuty, scianki);

			for (int i = 0; i < kolejki; i++) {
				printf("%d ", rzucaj_n_razy(rzuty, scianki));
				
				if (i % 15 == 14)
					putchar('\n');
			}
				
			printf("\nWprowadz liczbe kolejek; wybierz q, aby zakonczyc.\n");
			break;
		}
	}
	
	return 0;
}

int rzucaj(int scianki) {
	return rand() % scianki + 1;
}

int rzucaj_n_razy(int rzuty, int scianki) {
	int suma = 0;

	if (scianki < 2) {
		puts("Wymagane sa co najmniej 2 scianki.");
		return -2;
	}
	if (rzuty < 1) {
		puts("Wymagany jest co najmniej 1 rzut.");
		return -1;
	}

	for (int k = 0; k < rzuty; k++)
		suma += rzucaj(scianki);

	return suma;
}