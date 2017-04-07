#include <stdio.h>

void do_podst_n(unsigned long n, int podstawa);

int main(void) {
	unsigned long liczba;
	int podstawa;

	printf("Podaj liczbe calkowita i podstawe systemu (2 - 10) (q konczy program).\n");

	while (scanf_s("%ld %d", &liczba, &podstawa) == 2) {
		if (podstawa < 2 || podstawa > 10) {
			printf("Podaj podstawe z przedzialu (2, 10).\n");

			continue;
		}

		printf("Odpowiednik dwojkowy: ");
		do_podst_n(liczba, podstawa);

		putchar('\n');
		printf("Podaj liczbe calkowita i podstawe systemu (2 - 10) (q konczy program).\n");
	}

	printf("Gotowe.\n");

	return 0;
}

void do_podst_n(unsigned long n, int p) {

	int r;

	r = n % p;

	if (n >= p)
		do_podst_n(n / p, p);

	putchar(48 + r);

	return;
}