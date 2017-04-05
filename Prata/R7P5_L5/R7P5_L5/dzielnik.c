#include <stdio.h>
#include <stdbool.h>

int main(void) {
	unsigned long num, dziel;
	bool pierwsza;

	printf("Podaj dodatnia liczbe calkowita do przeanalizowania; wpisz q aby zakonczyc.\n");

	while (scanf_s("%ld", &num) == 1) {
		for (dziel = 2, pierwsza = true; (dziel * dziel) <= num; dziel++) {
			if (num % dziel == 0) {
				if ((dziel * dziel) != num)
					printf("%ld dzieli sie przez %ld i %ld.\n", num, dziel, num / dziel);
				else
					printf("%ld dzieli sie przez %ld.\n", num, dziel);

				pierwsza = false;
			}
		}

		if (pierwsza)
			printf("%ld jest liczba pierwsza.\n", num);

		printf("Podaj nastepna dodatnia liczbe calkowita do przeanalizowania; wpisz q aby zakonczyc.\n");
	}

	return 0;
}