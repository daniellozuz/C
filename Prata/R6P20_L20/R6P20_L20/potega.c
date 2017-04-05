#include <stdio.h>

double potega(double a, int b);

int main(void) {
	double x, xpot;
	int n;

	printf("Podaj liczbe oraz potege naturalna, do ktorej podniesiona zostanie liczba. Wpisz q, aby zakonczyc program.\n");

	while (scanf_s("%lf%d", &x, &n) == 2) {
		xpot = potega(x, n);
		printf("%.3g do potegi %d to %.5g\n", x, n, xpot);
		printf("Podaj kolejna pare liczb lub wpisz q, aby zkonczyc.\n");
	}

	printf("Zycze milego dnia!\n");

	return 0;
}

double potega(double a, int b) {
	double pot = 1;
	int i;

	for (i = 1; i <= b; i++)
		pot *= a;

	return pot;
}