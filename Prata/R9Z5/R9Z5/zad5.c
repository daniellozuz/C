#include <stdio.h>

void wieksze_od(double * x, double * y);

int main(void) {
	double x = 7.8;
	double y = -6.22;

	printf("X: %10.2f. Y: %10.2f.\n", x, y);

	wieksze_od(&x, &y);

	printf("X: %10.2f. Y: %10.2f.\n", x, y);

	return 0;
}

void wieksze_od(double * x, double * y) {
	if (x > y)
		*y = *x;
	else
		*x = *y;
}