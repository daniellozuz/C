#include <stdio.h>

double min(double x, double y);

int main(void) {
	double x = 7.44;
	double y = -5.22;

	printf("Mniejsza z liczb %f i %f to %f.\n", x, y, min(x, y));

	return 0;
}

double min(double x, double y) {
	return (x < y) ? x : y;
}