#include <stdio.h>
#include <stdbool.h>

long pobierz_long(void);
bool zle_granice(long poczatek, long koniec, long dolna, long gorna);
double suma_kwadr(long a, long b);

int main(void) {
	const long MIN = -10000000;
	const long MAX = 10000000;
	long start, stop;
	double wynik;

	printf("Program oblicza sume kwadratow liczb calkowitych.\n");
	printf("Dolna granica przedzialu nie powinna byc mniejsza od %d.\n", MIN);
	printf("Gorna granica przedzialu nie powinna byc wieksza od %d.\n", MAX);

	printf("Podaj granice przedzialu (podanie 0 dla obu oznacza koniec).\nDolna granica: ");
	start = pobierz_long();
	printf("Gorna granica: ");
	stop = pobierz_long();

	while (start != 0 || stop != 0) {
		if (zle_granice(start, stop, MIN, MAX))
			printf("Sproboj ponownie.\n");
		else {
			wynik = suma_kwadr(start, stop);
			printf("Suma kwadratow liczb calkowitych w przedziale od %ld do %ld wynosi %g.\n", start, stop, wynik);
		}

		printf("Podaj granice przedzialu (podanie 0 dla obu oznacza koniec).\nDolna granica: ");
		start = pobierz_long();
		printf("Gorna granica: ");
		stop = pobierz_long();
	}

	printf("Koniec.\n");

	return 0;
}

long pobierz_long(void) {
	long we;
	char ch;

	while (scanf_s("%ld", &we) != 1) {
		while ((ch = getchar()) != '\n')
			putchar(ch);

		printf(" nie jest liczba calkowita.\nProsze podac wartosc calkowita, np. 25, -178 czy 3: ");
	}

	return we;
}

double suma_kwadr(long a, long b) {
	double suma = 0;
	int i;

	for (i = a; i <= b; i++)
		suma += i * i;

	return suma;
}

bool zle_granice(long poczatek, long koniec, long dolna, long gorna) {
	bool zle = false;

	if (poczatek > koniec) {
		printf("%ld nie jest mniejsze od %ld.\n", poczatek, koniec);
		zle = true;
	}

	if (poczatek < dolna || koniec < dolna) {
		printf("Wartosci musza miec wartosc co najmniej: %ld.\n", dolna);
		zle = true;
	}

	if (poczatek > gorna || koniec > gorna) {
		printf("Wartosci musza miec wartosc co najwyzej: %ld.\n", gorna);
		zle = true;
	}

	return zle;
}