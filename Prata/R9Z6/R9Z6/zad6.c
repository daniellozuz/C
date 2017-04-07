#include <stdio.h>

void sortuj_3(double * x, double * y, double * z);

int main(void) {
	double x = 6.2;
	double y = 99.22;
	double z = -8.0;

	printf("X: %7.2f Y: %7.2f Z: %10.2f\n", x, y, z);

	sortuj_3(&x, &y, &z);

	printf("X: %7.2f Y: %7.2f Z: %10.2f\n", x, y, z);

	return 0;
}

void sortuj_3(double * x, double * y, double * z) {
	double temp;

	if (*x > *y) {
		temp = *x;
		*x = *y;
		*y = temp;
	}
	if (*y > *z) {
		temp = *y;
		*y = *z;
		*z = temp;
	}
	if (*x > *y) {
		temp = *x;
		*x = *y;
		*y = temp;
	}
}