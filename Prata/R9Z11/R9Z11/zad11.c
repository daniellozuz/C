#include <stdio.h>

unsigned long Fibonacci(int n);

int main(void) {
	int numer;

	printf("Podaj ktory wyraz ciagu Fibonacciego chcesz policzyc.\n");

	while (scanf_s("%d", &numer)) {
		printf("%d wyraz ciagu Fibonacciego wynosi: %lu\n", numer, Fibonacci(numer));
	}

	return 0;
}

unsigned long Fibonacci(int n) {
	int i;
	unsigned long wynik;
	int pierwszy = 1;
	int drugi = 1;

	if (n <= 2)
		return 1;

	for (i = 2; i < n; i++) {
		wynik = pierwszy + drugi;
		pierwszy = drugi;
		drugi = wynik;
	}

	return wynik;
}