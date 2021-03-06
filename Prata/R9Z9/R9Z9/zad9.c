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

	if (a == 0 && b != 0)
		return 0;

	if (a == 0 & b == 0) {
		printf("Nie mozesz podniesc 0 do potegi 0.\n");
		return 1;
	}

	if (b > 0) {
		pot = a * potega(a, b - 1);
	}
	else if (b < 0) {
		pot = potega(a, b + 1) / a;
	}

	if (b == 0)
		return 1;

	return pot;
}